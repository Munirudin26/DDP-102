//daftar isi
// latihan struct

// latihan struct =============================================================================================================================
#include <iostream>
#include <string>

using namespace std;

/*contoh struck = adalah data yang dibentuk oleh beberapa data
contoh 
jeruk=buah
jeruk.warna
jeruk.berat
jeruk.harga
jeruk.rasa*/

struct buah{        // ini akan menjadi frame untuk data di bawah
    string warna;//string = untuk data teks
    float berat;//float = untuk data angka desimal
    int harga;//integer = untuk data angka bilangan bulat
    bool lulus; // bollean = untuk data logika true false
    string rasa;
};

int main(){
    
    buah apel;
    buah jeruk;

    apel.warna = "merah";
    apel.berat = 120.50f;
    apel.harga = 30000;
    apel.rasa = "manis kecut";

    jeruk.warna = "hijau"; // tekan ctrl + sift + down untuk merubah teks bersamaan "jeruk dan apel"
    jeruk.berat = 210.50f;
    jeruk.harga = 20000;
    jeruk.rasa = "manis banget";

    cout << "apel" << endl;
    cout << "-" << apel.berat << endl;
    cout << "-" << apel.warna << endl;
    cout << "-" << apel.harga << endl;
    cout << "-" << apel.rasa << endl;

    cout << "jeruk" << endl;
    cout << "-" << jeruk.warna << endl;
    cout << "-" << jeruk.berat << endl;
    cout << "-" << jeruk.harga << endl;
    cout << "-" << jeruk.rasa << endl;

    cin.get();
    return 0; 
}
