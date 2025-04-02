Jadi Anda ingin file txt selalu update saat ada input baru, tapi tidak ingin data lama hilang. Anda ingin data baru ditambahkan ke file txt yang sudah ada, bukan menggantikan data lama.

Cara Membuat File Txt Selalu Update
Untuk membuat file txt selalu update, Anda dapat menggunakan mode append saat membuka file txt. Mode append memungkinkan Anda menambahkan data baru ke akhir file txt yang sudah ada.

Contoh Kode
Berikut adalah contoh kode yang menggunakan mode append:


void simpanDataKeFile(std::vector<Penduduk> penduduk) {
    std::ofstream file("data_penduduk.txt", std::ios_base::app);
    if (file.is_open()) {
        for (int i = 0; i < penduduk.size(); i++) {
            file << "No.KK: " << penduduk[i].noKK << std::endl;
            for (std::string anggota : penduduk[i].anggota) {
                file << "- " << anggota << std::endl;
            }
            file << std::endl;
        }
        file.close();
        std::cout << "Data berhasil disimpan ke file data_penduduk.txt" << std::endl;
    } else {
        std::cout << "Gagal membuka file" << std::endl;
    }
}
