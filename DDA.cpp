//program pertamaku
#include<iostream>
using namespace std;
int main ()
{
    cout<<"selamat belajar C++";
    cin.get();// menunggu user menekan enter
    return 0;}
    
//rumus printf()
//printf("string-kontrol",argumen-1,argumen-2,);       
#include<stdio.h>
int main(){
    int s = 7;
    char b = 'G';
    printf("%c merupakan abjad yang ke - %d\n",b,s);
}

//[ 1.printf tanpa penentu lebar field ]
#include<stdio.h>
int main(){
    float a=7.50,b=243.21;
    printf("bilangan A=%f\n",a);
    printf("bilangan B=%f",b);
}

//    [ 1.printf dengan penentu lebar field ]
#include<stdio.h>
int main(){
    float a=7.50,b=243.21;
    printf("bilangan A=%.1lf\n",a);
    printf("bilangan B=%.1lf",b);
}

//    [ 1.printf dengan escape sequences ]
#include <stdio.h>
int main(){
    float a = 7.50, b = 43.21, c = 3.21;
    float d = 17.50, e = 47.41, f = 3.1;
    printf("%8.2f\t %8.2f\t %8.2f", a, b, c);
    printf("\n%8.2f\t %8.2f\t %8.2f", d, e, f);
}

//    [ 2.puts ]
#include <stdio.h>
//#include <conio.h> // di cromebook ini tidak di gunakan
int main () {
    char a[4] = "BSI";// karena [4] maksimal karater adalah 4 (+null terminator)
    //clrscr(); // di cromebook ini tidak berfungsi
    puts("saya kuliah di");
    puts(a);
}

//    [ 2.puts ]
#include <stdio.h>
//#include <conio.h> // di cromebook ini tidak di gunakan
int main () {
    char a[6] = "UNSIA";// karena [6] maksimal karater adalah 6 (+null terminator)
    //clrscr();         // jika [] maka akan otomatis menyesuaikan banyaknya karakter (+null terminator)
    puts("saya kuliah di");
    puts(a);
}

//    [ 3.putchar ]
/*metode putschar tidak efisien karena berulang*/
#include <stdio.h>
//#include <conio.h>
int main(){
    //clsscr();
    putchar('B');
    putchar('S');
    putchar('I');
}

//    [ 3.putchar ]
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

//   [ 3.cout ]
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

//    [ 3.cout-using namespace std ]
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
