
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
        membuka file    : nano file.cpp
        menyimpan file  : ctrl+o    enter    ctrl+x
        q               : quit
    fdisk partisi
        sudo apt update
        sudo apt install dosfstools parted
          /dev/sdX          X adalah disk yang kamu inginkan
          p      : membuat partisi primer
          l      : membuat partisi logis
          d      : menghapus partisi dg masukan no partisinya
          w      : menulis perubahan
          q      : exit
    parted partisi
          sudo apt update
          sudo apt install parted
          sudo parted /dev/sdX         : buka terminal
          print                        : daftar partisi
          mkpart primary ext4 1GB 2GB  : membuat partisi, 2gb 4gb adalah opsi
          rm N                         : menghapus partisi, ganti N dg no partisi
          resizepart N 100GB           : mengubah ukuran. ganti N dan 100GB opsi
          quit                         : keluar
    ----------------------------------------- 
    world wide web 1991-Tim Berners-Lee
    Lynx 1992-Lou Montulli
        sudo apt-get update
        sudo apt-get install lynx
    Mosaic 1993-
    Netscape Navigator 1994
    Internet Explorer 1995-Microsoft
    w3m 1995-Akinori Mita
        sudo apt install w3m w3m-img
        w3m https://www.howtogeek.com/103574/how-to-browse-from-the-linux-terminal-with-w3m/
    links 1999-Anton Laglashev
    Opera 2000-
    Mozila 2000-
    ELinks 2002-Jesse Andrews
        sudo apt install elinks
        elinks
        Enter           : pilih
        Esc             : menu browser
        Ctrl+a          : add bookmark
        /               : bilah pencarian
        q               : quit
    Firefox 2004
    Chrome 2008-google
    f3k 2017-open source
    Browsh 2017-Luis Fernando -https://www.youtube.com/watch?v=zqAoBD62gvo&t=175s
    vims 2017-Julius Schmidt
    --------------------------------------------
    Docker
        sudo apt-get update
        sudo apt-get install docker.io
        sudo systemctl enable docker
        docker run [OPTION] IMAGE [COMMAND]    : menjalankan kontainer
        docker run hello-world                 : contoh up
        docker ps                              : melihat kontainer yang berjalan
        docker ps -a                           : melihat semua kontainer
        docker stop CONTAINER_ID               : menghentikan kontainer
        docker rm CONTAINER_ID                 : menghapus kontainer
        docker pull IMAGE_NAME                 : mengunduh image
        docker pull ubuntu                     : contoh up
        docker images                          : melihat daftar image
        docker rmi IMAGE_ID                    : menghapus image
        docker exec -it CONTAINER_ID /bin/bash : masuk kedalam kontainer
                        contoh penggunaan
        misalkan ingin menjalankan aplikasi web sederhana menggunakan
        Nginx, kamu dapat melakukan lngkah langkah ini.
        docker pull nginx            : unduh image Nginx
        docker run -d -p 80:80 nginx : jalankan kontainer nginx
                   akses nginx melalui browser
                         http://localhost
------------------------------------------------------------                        
                          CHROMEBOOK
    MEMBUKA TERMINAL
        ctrl + alt + t
    MODE CROSH ----------------------------------------------
        shell
    MODE SHELL ----------------------------------------------
        help    : daftar perintah
        exit    : Keluar dari shell crosh
