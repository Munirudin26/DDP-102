#include <iostream> 
#include <string>  
#include <vector>  
#include <limits> // Penting untuk numeric_limits  

using namespace std;  

// Kelas Pengguna (sama seperti sebelumnya)  
class Pengguna {  
public:  
    string username;  
    string password; // Seharusnya di-hash  
    string nama;  
    double saldo;  
    vector<pair<string, double>> riwayat_transaksi; // Deskripsi dan jumlah  

    Pengguna(string username, string password, string nama, double saldo) :  
        username(username), password(password), nama(nama), saldo(saldo) {}  

    double lihat_saldo() {  
        return saldo;  
    }  

    bool transfer(Pengguna& penerima, double jumlah) {  
        if (saldo >= jumlah) {  
            saldo -= jumlah;  
            penerima.saldo += jumlah;  
            catat_transaksi("Transfer ke " + penerima.nama, -jumlah);  
            penerima.catat_transaksi("Transfer dari " + nama, jumlah);  
            return true;  
        } else {  
            return false;  
        }  
    }  

    void catat_transaksi(string deskripsi, double jumlah) {  
        riwayat_transaksi.push_back(make_pair(deskripsi, jumlah));  
    }  

    void lihat_riwayat_transaksi() {  
        cout << "\nRiwayat Transaksi:\n";  
        for (auto& transaksi : riwayat_transaksi) {  
            cout << transaksi.first << " " << transaksi.second << endl;  
        }  
    }  
};  

// Fungsi Login (sama seperti sebelumnya)  
Pengguna* login(string username, string password, vector<Pengguna>& daftar_pengguna) {  
    for (Pengguna& pengguna : daftar_pengguna) {  
        if (pengguna.username == username && pengguna.password == password) { // Seharusnya verifikasi hash  
            return &pengguna;  
        }  
    }  
    return nullptr;  
}  

int main() {  
    vector<Pengguna> daftar_pengguna;  
    char lagi;  

    // Bagian A: Memasukkan Data Pengguna  
    do {  
        string username, password, nama;  
        double saldo;  

        cout << "Username\t: ";  
        getline(cin, username);  

        cout << "Password\t: ";  
        getline(cin, password); // JANGAN SIMPAN PASSWORD ASLI  

        cout << "Nama Lengkap\t: ";  
        getline(cin, nama);  

        cout << "Saldo Awal\t: ";  
        cin >> saldo;  

        // Validasi input saldo  
        while (cin.fail()) {  
            cout << "Input tidak valid. Masukkan saldo awal (angka): ";  
            cin.clear();  
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  
            cin >> saldo;  
        }  
        cin.ignore(); // Membersihkan newline setelah input yang valid  

        // Membuat objek Pengguna baru dan menambahkannya ke daftar  
        daftar_pengguna.push_back(Pengguna(username, password, nama, saldo));  

        cout << "Mau merekam data lagi [Y/T] ? ";  
        cin >> lagi;  
        cin.ignore(); // Membersihkan newline  

    } while (toupper(lagi) == 'Y');  

    // Bagian B: Menampilkan Data Pengguna yang Tersimpan  
    cout << "\nDaftar Pengguna:\n";  
    for (int i = 0; i < daftar_pengguna.size(); i++) {  
        cout << i + 1 << ". " << daftar_pengguna[i].nama << " (" << daftar_pengguna[i].username << ")" << endl;  
        cout << "   Saldo: " << daftar_pengguna[i].saldo << endl;  
    }  

    // Bagian C: Fitur Transfer Saldo  
    if (daftar_pengguna.size() >= 2) {  
        int pengirim_index, penerima_index;  
        double jumlah_transfer;  

        // Memilih Pengirim  
        cout << "\n--- Transfer Saldo ---\n";  
        cout << "Pilih pengirim (masukkan nomor): ";  
        cin >> pengirim_index;  

        // Validasi input pengirim  
        while (cin.fail() || pengirim_index < 1 || pengirim_index > daftar_pengguna.size()) {  
            cout << "Input tidak valid. Masukkan nomor pengirim yang benar: ";  
            cin.clear();  
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  
            cin >> pengirim_index;  
        }  
        cin.ignore(); // Membersihkan newline  

        // Memilih Penerima  
        cout << "Pilih penerima (masukkan nomor): ";  
        cin >> penerima_index;  

        // Validasi input penerima  
        while (cin.fail() || penerima_index < 1 || penerima_index > daftar_pengguna.size() || penerima_index == pengirim_index) {  
            cout << "Input tidak valid. Masukkan nomor penerima yang benar (tidak boleh sama dengan pengirim): ";  
            cin.clear();  
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  
            cin >> penerima_index;  
        }  
        cin.ignore(); // Membersihkan newline  

        // Memasukkan Jumlah Transfer  
        cout << "Masukkan jumlah yang akan ditransfer: ";  
        cin >> jumlah_transfer;  

        // Validasi input jumlah transfer  
        while (cin.fail() || jumlah_transfer <= 0) {  
            cout << "Input tidak valid. Masukkan jumlah transfer yang benar (harus lebih dari 0): ";  
            cin.clear();  
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  
            cin >> jumlah_transfer;  
        }  
        cin.ignore(); // Membersihkan newline  


        // Melakukan Transfer  
        bool berhasil_transfer = daftar_pengguna[pengirim_index - 1].transfer(daftar_pengguna[penerima_index - 1], jumlah_transfer);  

        if (berhasil_transfer) {  
            cout << "Transfer berhasil!\n";  
            cout << daftar_pengguna[pengirim_index - 1].nama << " saldo: " << daftar_pengguna[pengirim_index - 1].saldo << endl;  
            cout << daftar_pengguna[penerima_index - 1].nama << " saldo: " << daftar_pengguna[penerima_index - 1].saldo << endl;  
        } else {  
            cout << "Transfer gagal. Saldo tidak mencukupi.\n";  
        }  
    } else {  
        cout << "Tidak cukup pengguna untuk melakukan transfer. Minimal 2 pengguna.\n";  
    }  

    cin.get(); // Menunggu input sebelum program berakhir  
    return 0;  
}
