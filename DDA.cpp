//------------------------------------------------------------------------------------------------------------------------------
//program pertamaku 
//230101010183_MUHAMMAD MUNIRUDIN_TUGAS2.pdf
/*
#include<iostream>
using namespace std;
int main ()
{
    cout<<"selamat belajar C++";
    return 0;
}
*/
/*
===============================================================================================
7 tipe data dasar borland C++
    char        ( 1 byte)(128 s.d 127               )
    int         ( 2 byte)(-3278 s.d 32767           )
    short       ( 3 byte)(-3278 s.d 32767           )
    long        ( 4 byte)(-2147435648 s.d 2147435647)
    float       ( 4 byte)(34x10-38 s.d 34x10+38     )(5-7   digit)
    double      ( 8 byte)(17x10-308 s.d 17x10+308   )(15-16 digit)
    long double (10 byte)(34x10-4932 s.d 11x10+4932 )(19    digit)
Data tambahan
    unsigned integer        (2 byte)(0-65535)
    unsigned character      (1 byte)(0-255)
    unsigned long integer   (4 byte)(0-4294967295)

perintah keluaran
    printf()
    puts()
    putchar()
    cout()

penentu format printf()
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
    
contoh
#include<stdio.h>
int main(){
    int s = 7;
    char b = 'G';

    printf("%c merupakan abjad yang ke - %d\n",b,s);
}

contoh tanpa penggunaan penentu lebar field
#include<stdio.h>
int main(){
    float a=7.50,b=243.21;

    printf("bilangan A=%f\n",a);
    printf("bilangan B=%f",b);
}

contoh dengan penggunaan penentu lebar field
#include<stdio.h>
int main(){
    float a=7.50,b=243.21;

    printf("bilangan A=%.1lf\n",a);
    printf("bilangan B=%.1lf",b);
}

penggunaan escape sequences
    \b    backspace
    \f    pindah halaman
    \n    baris baru
    \r    carriage return
    \t    tab (default = 7 karakter)
    \'    tanda kutip tunggal
    \"    tanda kutip ganda
    \\    backslash
    \xaa  kode ASCII dalam hexadecimal (aa menunjukan angka ASCII ybs)
    \aaa  kode ASCII dalam octal (aaa menunjukan angka ASCII ybs)

contoh
#include <stdio.h>
int main(){
    float a = 7.50, b = 43.21, c = 3.21;
    float d = 17.50, e = 47.41, f = 3.1;

    printf("%8.2f\t %8.2f\t %8.2f", a, b, c);
    printf("\n%8.2f\t %8.2f\t %8.2f", d, e, f);
}
    
*/
