    ESCAPE SQUANCES -----------------------------------------
        \b    backspace
        \f    pindah halaman
        \n    baris baru
        \r    carriage return
        \t    tab (default = 7 karakter)
        \'    tanda kutip tunggal
        \"    tanda kutip ganda
        \\    backslash
        \xaa  kode ASCII dalam hexadecimal 
              (aa menunjukan angka ASCII ybs)
        \aaa  kode ASCII dalam octal 
              (aaa menunjukan angka ASCII ybs)
------------------------------------------------------------
                            LINUX
    menginstal paket baru           : sudo apt install nama_paket
    menginstal paket ulang          : sudo apt-get install nama_paket
    menghapus paket                 : sudo apt remove nama_paket
    menghapus paket & file config   : sudo apt purge nama_paket
    melihat riwayat instalasi paket : grep " install " /var/log/apt/history.log
    
------------------------------------------------------------
                         APLIKASI CMD
    G++ compiler
        g++ file.cpp -o file
        ./file
        g++ -o output file.cpp
        ./output
    
    nano editor teks
        membaca file    : cat file.cpp
        membaca file    : less file.cpp    q=exit
        membuka file    : nano file.cpp
------------------------------------------------------------                        
                          CHROMEBOOK
    MEMBUKA TERMINAL
        ctrl + alt + t
    MODE CROSH ----------------------------------------------
        shell
    MODE SHELL ----------------------------------------------
        help    : daftar perintah
        exit    : Keluar dari shell crosh
    LYNX ----------------------------------------------------
    browser teks mendukung (HTTP,HTTPS,FTP,dll.)
    dikembangkan tahun 1992 oleh Lou Montulli
    INSTAL LYNX ---------------------------------------------
        sudo apt-get update
        sudo apt-get install lynx
    ELinks --------------------------------------------------
    browser teks mendukung JavaScript dan CSS.
    dikembangkan tahun 2001 oleh Petr Baudis
        sudo apt-get update
        sudo apt-get install elinks
    DOCKER --------------------------------------------------
    platform untuk membuat, menguji, dan mengelola aplikasi
        sudo apt-get update
        sudo apt-get install docker.io
        sudo systemctl enable docker
