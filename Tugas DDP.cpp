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
#include <stdio.h>  
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
        char buffer[100]; // buffer untuk menyimpan string yang akan dicetak  

        sprintf(buffer, "Data Ke - %d", i + 1);  
        puts(buffer);  

        sprintf(buffer, "NIM     = %s", nim[i].c_str());  
        puts(buffer);  

        sprintf(buffer, "Nama    = %s", nama[i].c_str());  
        puts(buffer);  

        sprintf(buffer, "Nilai Akhir = %d", nilaiAkhir[i]);  
        puts(buffer);  

        char keterangan = tentukanKeterangan(nilaiAkhir[i]);  
        sprintf(buffer, "Keterangan yang didapat = %c", keterangan);  
        puts(buffer);  
        puts("");  
    }  
    getchar();  
    return 0;  
}
// TUGAS 1.3.putschar ----------------------------------------------------------------------------------------------------
// TUGAS 1.4.cout --------------------------------------------------------------------------------------------------------
#include <iostream>  
#include <string>  

using namespace std; // Ini opsional, tapi menyederhanakan penulisan cout  

char tentukanKeterangan(int nilai) {  
    if (nilai >= 100) return 'A';  
    if (nilai >= 80) return 'B';  
    if (nilai >= 60) return 'C';  
    return 'D';  
}  

int main() {  
    string nim[] = {"230101010183", "2301010183"};  
    string nama[] = {"MUHAMMAD MUNIRUDIN", "muhammad munirudin"};  
    int nilaiAkhir[] = {68, 65};  

    for (int i = 0; i < 2; ++i) {  
        cout << "Data Ke - " << i + 1 << endl;  
        cout << "NIM     = " << nim[i] << endl;  
        cout << "Nama    = " << nama[i] << endl;  
        cout << "Nilai Akhir = " << nilaiAkhir[i] << endl;  
        cout << "Keterangan yang didapat = " << tentukanKeterangan(nilaiAkhir[i]) << endl << endl;  
    }  
    // getchar() tidak diperlukan dalam C++ dengan cout  
    /*Karena cout menampilkan output secara sinkron, tidak perlu menahan eksekusi dengan fungsi seperti getchar()*/
    return 0;  
}

// TUGAS 2.4.cout-------------------------------------------------------------------------------
#include <iostream>  
#include <string>  
#include <limits> // untuk membersihkan buffer input  

using namespace std;  

int main() {  
    string nim[2];  
    string nama[2];  
    int nilaiAkhir[2];  

    for (int i = 0; i < 2; ++i) {  
        cout << "masukan NIM = ";  
        cin >> nim[i];  
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // membersihkan buffer  

        cout << "masukan Nama = ";  
        getline(cin, nama[i]); // Menggunakan getline untuk membaca nama dengan spasi  

        cout << "masukan Nilai Akhir = ";  
        cin >> nilaiAkhir[i];  
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // membersihkan buffer  

        cout << endl;  
    }  


    for (int i = 0; i < 2; ++i) {  
        cout << "Data Ke - " << i + 1 << endl;  
        cout << "NIM     = " << nim[i] << nama[i] << endl;  
        cout << "Nama    = " << nama[i] << endl;  
        cout << "Nilai Akhir = " << nilaiAkhir[i] << endl << endl;  
    }  

    return 0;  
}
