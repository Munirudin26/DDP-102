 list tugas dan latihan

- tugas keluaran printf
- tugas keluaran cout
- tugas keluaran printf
- tugas keluaran cout

- latihan struct

// tugas A. dengan keluaran printf =============================================================================================================
#include <stdio.h> 
#include <string> 

char tentukanKeterangan(int nilai) {    // char ini adalah fungsi untuk mendefinisikan nilai
   if (nilai >= 100) return 'A';        // jika nilai lebih dari 100 maka tampil A
   if (nilai >= 80) return 'B'; 
   if (nilai >= 60) return 'C'; 
   return 'D';    // jika nilai di bawah 60 maka tamoil D
} 

int main() { 
   std::string nim[] = {"230101010183", "2301010183"}; 
   std::string nama[] = {"MUHAMMAD MUNIRUDIN", "muhammad munirudin"}; 
   int nilaiAkhir[] = {68, 65}; // ini adalah Array yaitu nilai bilangan bulat 

   for (int i = 0; i < 2; ++i) { 
       printf("Data Ke - %d\n", i + 1); 
       printf("NIM     = %s\n", nim[i].c_str()); 
       printf("Nama    = %s\n", nama[i].c_str()); 
       printf("Nilai Akhir = %d\n", nilaiAkhir[i]); 
       printf("Keterangan yang didapat = %c\n\n", tentukanKeterangan(nilaiAkhir[i])); 
   } 
   getchar(); // supaya menunggu menekan tombol 
   return 0; 
}

// tugas A dengan keluaran cout ================================================================================================================
#include <iostream> 
#include <string> 


char tentukanKeterangan(int nilai) { 
   if (nilai >= 100) return 'A'; 
   if (nilai >= 80) return 'B'; 
   if (nilai >= 60) return 'C'; 
   return 'D'; 
} 

int main() { 
   std::string nim[] = {"230101010183", "2301010183"}; 
   std::string nama[] = {"MUHAMMAD MUNIRUDIN", "muhammad munirudin"}; 
   int nilaiAkhir[] = {68, 65}; 

   for (int i = 0; i < 2; ++i) { 
       std::cout << "Data Ke - " << i + 1 << std::endl; 
       std::cout << "NIM     = " << nim[i] << std::endl; 
       std::cout << "Nama    = " << nama[i] << std::endl; 
       std::cout << "Nilai Akhir = " << nilaiAkhir[i] << std::endl; 
       std::cout << "Keterangan yang didapat = " << tentukanKeterangan(nilaiAkhir[i]) << std::endl << std::endl; 
   } 
   std::cin.get(); // Menunggu input dari user sebelum program berakhir. 
   return 0; 
}

#include <iostream> 
#include <string> 
#include <limits> 
#include <cstdio> // Untuk printf 

//tugas B debgan keluaran printf ==============================================================================================================
int main() { 
   std::string nim[2]; 
   std::string nama[2]; 
   int nilaiAkhir[2]; 

   for (int i = 0; i < 2; ++i) { 
       printf("Masukan NIM = "); 
       std::cin >> nim[i]; 
       std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 

       printf("Masukan Nama = "); 
       std::getline(std::cin, nama[i]); 

       printf("Masukan Nilai Akhir = "); 
       std::cin >> nilaiAkhir[i]; 
       std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
       printf("\n"); 
   } 

   for (int i = 0; i < 2; ++i) { 
       printf("Data Ke - %d\n", i + 1); 
       printf("NIM     = %s\n", nim[i].c_str()); 
       printf("Nama    = %s\n", nama[i].c_str()); 
       printf("Nilai Akhir = %d\n\n", nilaiAkhir[i]); 
   } 

   getchar(); // Menunggu input dari user sebelum program berakhir. 
   return 0; 
}

// tugas B dengan keluaran cout ================================================================================================================
#include <iostream> 
#include <string> 
#include <limits> 

int main() { 
   std::string nim[2]; 
   std::string nama[2]; 
   int nilaiAkhir[2]; 

   for (int i = 0; i < 2; ++i) { 
       std::cout << "Masukan NIM = "; 
       std::cin >> nim[i]; 
       std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 

       std::cout << "Masukan Nama = "; 
       std::getline(std::cin, nama[i]); 

       std::cout << "Masukan Nilai Akhir = "; 
       std::cin >> nilaiAkhir[i]; 
       std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
       std::cout << std::endl; 
   } 

   for (int i = 0; i < 2; ++i) { 
       std::cout << "Data Ke - " << i + 1 << std::endl; 
       std::cout << "NIM     = " << nim[i] << std::endl; //Perbaikan: NIM dan Nama ditampilkan di baris terpisah. 
       std::cout << "Nama    = " << nama[i] << std::endl; 
       std::cout << "Nilai Akhir = " << nilaiAkhir[i] << std::endl << std::endl; 
   } 

   std::cin.get(); // Menunggu input dari user sebelum program berakhir.
   return 0; 
}  

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
    boll lulus; // bollean = untuk data logika true false
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
