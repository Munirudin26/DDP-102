    TIPE DATA DASAR BORLAND C++
    1. char        ( 1 byte) (128 s.d 127               )
    2. int         ( 2 byte) (-3278 s.d 32767           )
    3. short       ( 3 byte) (-3278 s.d 32767           )
    4. long        ( 4 byte) (-2147435648 s.d 2147435647)
    5. float       ( 4 byte) (34x10-38 s.d 34x10+38     ) (5-7   digit)
    6. double      ( 8 byte) (17x10-308 s.d 17x10+308   ) (15-16 digit)
    7. long double (10 byte) (34x10-4932 s.d 11x10+4932 ) (19    digit)
    
    DATA TAMBAHAN
    1. unsigned integer        (2 byte)(0-65535)
    2. unsigned character      (1 byte)(0-255)
    3. unsigned long integer   (4 byte)(0-4294967295)
                   
    PERINTAH KELUARAN
    1.printf
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
   
        ESCAPE SQUANCES
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
