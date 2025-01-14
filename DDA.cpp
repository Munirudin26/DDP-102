//by: munirudin
//Dasar Dsar Pemrograman
/*==========================================[ DAFTAR ISI ]================================================
        0. PERKENALAN (sesi 1)
        1. TIPE DATA (sesi 2)
        2. DATA TAMBAHAN
        3. PERINTAH KELUARAN
            1.printf
            2.puts
            3.putchar
            4.cout
        4. FUNGSI MANIPULATOR (sesi 3)
            1.endl
            2.end
            3.dec
            4.hex
            5.oct
            6.setbase
            7.setw
            8.setfill
            9.setprecission
            10.setioflags
        5.PERINTAH MASUKAN
            1.scanf
            2.gets
            3.cin
            4.getch
            5.getche
        6. OPERATOR (sesi 4)
            1.operator aritmatika
            2.operator pemberi nilai aritmatika
            3.operator relasi
            4.operasi penyeleksian kondisi
                1.pernyataan if
                2.pernyataan if - else
                3.pernyataan NESTED if
                4.pernyataan if - else majemuk
                5.pernyataan switch - case
        
        7.dapet ebook DDP (ssesi 5)
        8.
=========================================================================================================*/
                                              program pertamaku 
#include<iostream>
using namespace std;
int main ()
{
    cout<<"selamat belajar C++";
    cin.get();// menunggu user menekan enter
    return 0;}


                                    ==[ TIPE DATA DASAR BORLAND C++ ]==
/*
    1. char        ( 1 byte) (128 s.d 127               )
    2. int         ( 2 byte) (-3278 s.d 32767           )
    3. short       ( 3 byte) (-3278 s.d 32767           )
    4. long        ( 4 byte) (-2147435648 s.d 2147435647)
    5. float       ( 4 byte) (34x10-38 s.d 34x10+38     ) (5-7   digit)
    6. double      ( 8 byte) (17x10-308 s.d 17x10+308   ) (15-16 digit)
    7. long double (10 byte) (34x10-4932 s.d 11x10+4932 ) (19    digit)
*/
                                            ==[ DATA TAMBAHAN ]==
/*
    1. unsigned integer        (2 byte)(0-65535)
    2. unsigned character      (1 byte)(0-255)
    3. unsigned long integer   (4 byte)(0-4294967295)
*/
                                           ==[ PERINTAH KELUARAN ]==

/*==[ 1.printf ]============================================================================================
FORMAT PRINTF
    integer                          %d
    floating point
      bentuk desimal                 %f
      bentuk berpangkat              %e
      bentuk desimal dan berpangkat  %g
    double precission                %lf
    character                        %c
    string                           %s
    unsigned integer                 %u
    long integer                     %ld
    long unsigned integer            %lu
    unsigned hexadecimal integer     %x
    unsigned octal integer           %o
rumus printf()
    printf("string-kontrol",argumen-1,argumen-2,);
*/    
#include<stdio.h>
int main(){
    int s = 7;
    char b = 'G';

    printf("%c merupakan abjad yang ke - %d\n",b,s);
}
//==[ 1.printf tanpa penentu lebar field ]==================================================================
#include<stdio.h>
int main(){
    float a=7.50,b=243.21;

    printf("bilangan A=%f\n",a);
    printf("bilangan B=%f",b);
}
//==[ 1.printf dengan penentu lebar field ]=================================================================
#include<stdio.h>
int main(){
    float a=7.50,b=243.21;

    printf("bilangan A=%.1lf\n",a);
    printf("bilangan B=%.1lf",b);
}
/*ESCAPE SQUANCES
    \b    backspace
    \f    pindah halaman
    \n    baris baru
    \r    carriage return
    \t    tab (default = 7 karakter)
    \'    tanda kutip tunggal
    \"    tanda kutip ganda
    \\    backslash
    \xaa  kode ASCII dalam hexadecimal (aa menunjukan angka ASCII ybs)
    \aaa  kode ASCII dalam octal (aaa menunjukan angka ASCII ybs)*/
//==[ 1.printf dengan escape sequences ]====================================================================
#include <stdio.h>
int main(){
    float a = 7.50, b = 43.21, c = 3.21;
    float d = 17.50, e = 47.41, f = 3.1;

    printf("%8.2f\t %8.2f\t %8.2f", a, b, c);
    printf("\n%8.2f\t %8.2f\t %8.2f", d, e, f);
}
//==[ 2.puts ]==============================================================================================
#include <stdio.h>
//#include <conio.h> // di cromebook ini tidak di gunakan
int main () {
    char a[4] = "BSI";// karena [4] maksimal karater adalah 4 (+null terminator)
    //clrscr(); // di cromebook ini tidak berfungsi
    puts("saya kuliah di");
    puts(a);
}
//==[ 2.puts ]==============================================================================================
#include <stdio.h>
//#include <conio.h> // di cromebook ini tidak di gunakan
int main () {
    char a[6] = "UNSIA";// karena [6] maksimal karater adalah 6 (+null terminator)
    //clrscr();         // jika [] maka akan otomatis menyesuaikan banyaknya karakter (+null terminator)
    puts("saya kuliah di");
    puts(a);
}
//==[ 3.putchar ]===========================================================================================
/*metode putschar tidak efisien karena berulang*/
#include <stdio.h>
//#include <conio.h>
int main(){
    //clsscr();
    putchar('B');
    putchar('S');
    putchar('I');
}
//==[ 3.putchar ]===========================================================================================
#include <stdio.h>
//#include <conio.h> // di cromebook ini tidak di gunakan
int main(){
    //clsscr();
    putchar('U');
    putchar('N');
    putchar('S');
    putchar('I');
    putchar('A');
    putchar('\n'); //Menambahkan baris baru 
}
//==[ 3.cout ]==============================================================================================
//Header <iostream.h> sudah usang dan tidak lagi digunakan dalam C++ modern.
#include <iostream>  
int main() {  
    float a, b, c;
    a=7.5; b=8.4; c=0;
    std::cout << "Masukan nilai A: "<<a;  
    std::cout << "Masukan nilai B: "<<b;
    c = a + b;  
    std::cout << "Masukan ilai C : " << c;  
    std::cin.get();// Untuk mencegah jendela konsol langsung tertutup / menunggu user menekan enter,
}
//==[ 3.cout-using namespace std ]==========================================================================
#include <stdio.h>//Header <iostream.h> sudah usang dan tidak lagi digunakan dalam C++ modern.
#include <iostream>
using namespace std;//Untuk menghindari mengetik std:: berulang kali dalam kode C++, Namun, tidak disarankan dalam program yang lebih besar karena dapat menyebabkan konflik nama jika Anda menggunakan library lain yang memiliki nama yang sama dengan elemen di namespace std 
int main(){
    float a, b, c;
    a = 7.5; b = 8.4; c = 0;
    //clrscr();
    cout << "masukan nilai A : " << a;
    cout << "masukan nilai B : " << b;
    c = a + b;
    cout << "masukan nilai C : " << c;
    cin.get();// menunggu user menekan enter
}

                                          ==[ fungsi manipulator ]==
//==[ 1.endl ]============================================================================================
//==[ 2.end ]=============================================================================================
//==[ 3.dec () ]==========================================================================================
//==[ 4.hex () ]==========================================================================================
//==[ 5.oct () ]==========================================================================================
//==[ 6.setbase() ]=======================================================================================
//==[ 7.setw () ]=========================================================================================
//==[ 8.setfill () ]======================================================================================
//==[ 9.setprecission () ]==================================================================================
//==[ 10.setioflags () ]====================================================================================

                                ==[ TANDA FORMAT KELUARAN NOTASI KONVERSI ]==

                                            ==[ PERINTAH MASUKAN ]==
