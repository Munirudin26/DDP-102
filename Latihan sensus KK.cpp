/*tambahkan fungsi ifstream jika ingin di terapkan 
agar data yang di input bisa disimpan dalam txt*/
#include <iostream>
#include <vector>
#include <string>

struct Penduduk {
    std::string noKK;
    std::vector<std::string> anggota;
};

void cetakPenduduk(Penduduk penduduk, int tingkat = 0) {
    for (int i = 0; i < tingkat; i++) {
        std::cout << " ";
    }
    std::cout << "No.KK: " << penduduk.noKK << std::endl;
    for (std::string anggota : penduduk.anggota) {
        for (int i = 0; i < tingkat + 1; i++) {
            std::cout << " ";
        }
        std::cout << "- " << anggota << std::endl;
    }
}

int main() {
    char lagi = 'Y';
    std::vector<Penduduk> penduduk;

    while (lagi == 'Y' || lagi == 'y') {
        Penduduk temp;
        std::cout << "Masukkan No.KK : ";
        std::cin >> temp.noKK;

        int jumlahAnggota;
        std::cout << "Jumlah anggota : ";
        std::cin >> jumlahAnggota;

        for (int i = 0; i < jumlahAnggota; i++) {
            std::string nama;
            std::cout << "Nama anggota  " << i + 1 << ": ";
            std::cin >> nama ;
            temp.anggota.push_back(nama);
        }

        penduduk.push_back(temp) ;
        
        std::cout << "berhasil disimpan" << std::endl << std::endl;
        std::cout << "lanjut input data ?" << std::endl;
        std::cout << "     Y / N" << std::endl;
        std::cin >> lagi;
    }
    
    std::cout << "\n     Data masarakat Rt01 Rw03";
    std::cout << "\nsurat tugas desa no DD.XI/01022025" << std::endl;
    for (int i = 0; i < penduduk.size(); i++) {
        cetakPenduduk(penduduk[i]);
    }

    return 0;
}
