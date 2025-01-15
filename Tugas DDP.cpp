/*KELUARAN
    1.printf
    2.puts
    3.putchar
    4.cout*/

// 1.printf
#include <iostream>  
#include <cstdio> //untuk keluaran printf  
#include <string> // menggunakan tipe data string
//using namespace std; // hapus slash jika tidak mau ngetik ulang std:: ber ulang

char tentukanKeterangan(int nilaiAkhir) {  
    if (nilaiAkhir >= 70) return 'L';  
    else return 'G';  
}  

int main() {  
    std::string nim[] = {"12345NINING", "12354NENENG"};  
    std::string nama[] = {"NINING", "NENENG"};  
    int nilaiAkhir[] = {68, 65};  

    for (int i = 0; i < 2; ++i) {  
        std::printf("Data Ke - %d\n", i + 1);  
        std::printf("NIM     - %s\n", nim[i].c_str()); // c_str() diperlukan agar printf dapat berfungsi  
        std::printf("Nama    - %s\n", nama[i].c_str());  
        std::printf("Nilai Akhir - %d\n", nilaiAkhir[i]);  
        std::printf("Keterangan yang didapat - %c\n\n", tentukanKeterangan(nilaiAkhir[i]));  
    }  

    std::cin.get(); //ini ikut <iostream> supaya tidak otomatis selesai.
    return 0;  
}

// 2.puts
#include <iostream>  
#include <string>  
#include <cstring> // Optional, but good practice if using other C string functions  

// Fungsi penentu nilai  
char tentukanKeterangan(int nilaiAkhir) {  
    if (nilaiAkhir >= 70) return 'L';  
    else return 'G';  
}  

int main() {  
    std::string nim[] = {"12345NINING", "12354NENENG"};  
    std::string nama[] = {"NINING", "NENENG"};  
    int nilaiAkhir[] = {68, 65};  

    for (int i = 0; i < 2; ++i) {  
        puts("Data Ke - ");  
        puts((std::to_string(i + 1)).c_str()); // Convert int to string  
        puts("NIM     - ");  
        puts(nim[i].c_str());  
        puts("Nama    - ");  
        puts(nama[i].c_str());  
        puts("Nilai Akhir - ");  
        puts((std::to_string(nilaiAkhir[i])).c_str()); // Convert int to string  
        puts("Keterangan yang didapat - ");  
        puts(std::string(1, tentukanKeterangan(nilaiAkhir[i])).c_str()); // Convert char to string  
    }  

    std::cin.get();  
    return 0;  
}

// 3.putschar
#include <iostream>  
#include <string>  
#include <cstring>  

char tentukanKeterangan(int nilaiAkhir) {  
    if (nilaiAkhir >= 70) return 'L';  
    else return 'G';  
}  

int main() {  
    std::string nim[] = {"12345NINING", "12354NENENG"};  
    std::string nama[] = {"NINING", "NENENG"};  
    int nilaiAkhir[] = {68, 65};  

    for (int i = 0; i < 2; ++i) {  
        //Contoh penggunaan putchar untuk mencetak "Data Ke - " diikuti nomornya. Sangat tidak efisien!  
        const char* text = "Data Ke - ";  
        for (size_t k = 0; text[k] != '\0'; k++) putchar(text[k]);  
        std::string numStr = std::to_string(i + 1);  
        for (char c : numStr) putchar(c);  
        putchar('\n');  


        // ... (analog untuk NIM, Nama, Nilai Akhir, dan Keterangan.  Akan sangat panjang!) ...  

        //Menghindari penggunaan putchar secara ekstensif karena tidak efisien  
        puts("NIM     - ");  
        puts(nim[i].c_str());  
        puts("Nama    - ");  
        puts(nama[i].c_str());  
        puts("Nilai Akhir - ");  
        puts(std::to_string(nilaiAkhir[i]).c_str());  
        puts("Keterangan yang didapat - ");  
        putchar(tentukanKeterangan(nilaiAkhir[i]));  
        putchar('\n');  
    }  

    std::cin.get();  
    return 0;  
}

// 4.cout
#include <iostream>  
#include <string>  

char tentukanKeterangan(int nilaiAkhir) {  
    if (nilaiAkhir >= 70) return 'L';  
    else return 'G';  
}  

int main() {  
    std::string nim[] = {"12345NINING", "12354NENENG"};  
    std::string nama[] = {"NINING", "NENENG"};  
    int nilaiAkhir[] = {68, 65};  

    for (int i = 0; i < 2; ++i) {  
        std::cout << "Data Ke - " << i + 1 << std::endl;  
        std::cout << "NIM     - " << nim[i] << std::endl;  
        std::cout << "Nama    - " << nama[i] << std::endl;  
        std::cout << "Nilai Akhir - " << nilaiAkhir[i] << std::endl;  
        std::cout << "Keterangan yang didapat - " << tentukanKeterangan(nilaiAkhir[i]) << std::endl << std::endl;  
    }  

    std::cin.get();  
    return 0;  
}
