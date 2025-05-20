#include <iostream>
#include <string>
using namespace std;

class Barang {
private:
    string namaBarang;
    string kodeBarang;

public:
    // Konstruktor berparameter
    Barang(string nama, string kode) {
        namaBarang = nama;
        kodeBarang = kode;
    }

    // Fungsi untuk menampilkan informasi barang
    void tampilkanInfo() {
        cout << "Nama Barang : " << namaBarang << endl;
        cout << "Kode Barang : " << kodeBarang << endl;
    }
};

int main() {
    // Membuat objek dari kelas Barang dengan memberikan parameter
    Barang barang1("Laptop", "LP001");

    // Menampilkan informasi barang
    barang1.tampilkanInfo();

    return 0;
}
