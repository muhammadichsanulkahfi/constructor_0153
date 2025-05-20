//Buatlah program C++ dengan class Barang yang memiliki atribut: namaBarang,
//KodeBarang
//Program memiliki constructor berparameter untuk megisi 
//nilai namaBarang dan kodeBarang.
//serta memiliki fungsi untuk menampilkan informasi barang.

#include <iostream>
#include <string>
using namespace std;

class barang {
    public:
    string nama;
    int kode;

    barang(string nama, int kodeBarang);
};

barang::barang(string nama, int kode){
    cout << "Constructor Dengan Parameter Terpanggil" << endl;
    cout << "Nama Barang  : " << nama << endl;
    cout << "Kode Barang  : " << kode << endl;
}
    
int main() {
    barang brg ("TV", 12345);
    return 0;
}