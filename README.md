    LINUX --------------------------- ====================================================================================================
        instal paket baru           : sudo apt install namapaket
        instal paket ulang          : sudo apt-get install namapaket
        hapus paket                 : sudo apt remove namapaket
        hapus configurasi           : sudo apt purge namapaket
        tampilkan riwayat install   : grep " install " /var/log/apt/history.log
        membaca riwayat instal      : less /var/log/apt/history.log
        informasi kebijakan         : apt-cache namafile
        tampilkan versi             : namafile --version
 
    ZIP -------------------------------------------------
        menentukan direktori tempat file diekstrak      : unzip -d /path/to/directory nama_file.zip
        menampilkan isi file ZIP tanpa ekstrak          : unzip -l file.zip
        menimpa file yang sudah ada tanpa konfirmasi    : unzip -o file.zip   
        mengekstrak file tanpa menampilkan pesan        : unzip -q file.zip  

    G++ -------------------------
        g++ file.cpp -o file    : A.1
        ./file                  : A.2
        -------------------------
        g++ -o output file.cpp  : B.1
        ./output                : B.2
    
    NANO ------------------------
        membaca file            : less file    (atau)    cat file
        membuka file            : nano file                                        
        menyimpan file          : ctrl+o    enter    ctrl+x                              
        keluar                  : q
        
    VALGRID
        sudo apt-get install valgrind
        --------------------------------------------------
        menjalankan Valgrind                             : valgrind --leak-check=full ./nama_program
        melakukan analisis kebocoran memori              : --leak-check=full
        menampilkan semua jenis kebocoran memori         : --show-leak-kinds=all
        menampilkan detail informasi analisis            : --verbose
        menggunakan Valgrind dengan GDB lebih efektif    : valgrind --vgdb-error=1 ./nama_program
        lanjut melakukan debugging seperti biasa dg GDB
        Instalasi GDB
    
    GDB
        sudo apt-get install gdb
        ------------------------------
        Menjalankan GDB              :gdb nama_program
        Menjalankan Program          :run
        Menetapkan Breakpoint        :break nama_fungsi
        Melanjutkan Eksekusi Program :continue
        Menampilkan Nilai Variabel   :print nama_variabel
        Keluar                       : quit
    
    MySQL
        sudo apt-get install mysql-server
        ------------------------------
        Konfigurasi MySQL            :sudo mysql_secure_installation
        Mengakses MySQL              :mysql -u nama_pengguna -p
        Keluar dari MySQL            : EXIT
    
    DOCKER
        sudo apt-get install docker.io
        sudo systemctl enable docker
        -------------------------------------------------
        docker run [OPTION] IMAGE [COMMAND]             : menjalankan kontainer
        docker run hello-world                 
        docker ps                                       : melihat kontainer yang berjalan
        docker ps -a                                    : melihat semua kontainer
        docker stop CONTAINER_ID                        : menghentikan kontainer
        docker rm CONTAINER_ID                          : menghapus kontainer
        docker pull IMAGE_NAME                          : mengunduh image
        docker pull ubuntu                     
        docker images                                   : melihat daftar image
        docker rmi IMAGE_ID                             : menghapus image
        docker exec -it CONTAINER_ID /bin/bash          : masuk kedalam kontainer
                      
    BROWSER ----------------------========================================================================================================
        1.world wide web      1991    Tim Berners-Lee                    
        2.Lynx                1992    Lou Montulli
        3.Mosaic              1993                                      
        4.Netscape Navigator  1994                                     
        5.Internet Explorer   1995    Microsoft                         
        6.w3m                 1995    Akinori Mita
        7.links               1999    Anton Laglashev
        8.Opera               2000
        9.Mozila              2000
        10.ELinks             2002    Jesse Andrews
        11.Firefox            2004 
        12.Chrome             2008    google
        13.f3k                2017    
        14.Browsh             2017    Luis Fernando
        15.vims               2017    Julius Schmidt
