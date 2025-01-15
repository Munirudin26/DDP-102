/*
KELUARAN
    1.printf
    2.puts
    3.putchar
    4.cout
*/
// 1.printf ------------------------------------------------------------------------------------------------------
#include <stdio.h>  
#include <string>  

// char ini adalah fungsi untuk mendefinisikan nilai
char tentukanKeterangan(int nilai) {  
    if (nilai >= 100) return 'A';  // jika nilai lebih dari 100 maka tampil A
    if (nilai >= 80) return 'B';  
    if (nilai >= 60) return 'C';  
    return 'D'; // jika nilai di bawah 60 maka tamoil D
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
// 2.puts --------------------------------------------------------------------------------------------------------
// 3.putschar ----------------------------------------------------------------------------------------------------
// 4.cout --------------------------------------------------------------------------------------------------------
