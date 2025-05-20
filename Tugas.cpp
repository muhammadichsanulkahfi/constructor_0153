// Buatlah sebuah class bernama bangunDatar yang memiliki member sebagai berikut:
// panjang, lebar, method hitungLuas dan hitungKeliling
// Buatlah class persegiPanjang yang memiliki member inputdata dan outputdata
// Buatlah member yang ada di class persegi panjang
// dapat mengakses member di bangun datar
// gunakan pointer untuk megakses member yang ada pada class bangundatar


#include <iostream>
using namespace std;

//deklarasi class Bangundatar
class bangunDatar;

class PersegiPanjang{
    public:
         void inputData(BangunDatar &bd);
         void outputData(BangunDatar &bd);

};

class BangunDatar{
    private:
         float panjang;
         float lebar;
         float hitungLuas(){
            return panjang * lebar;
    };
    float hitungkeliling(){
        return 2 * (panjang * lebar);

    };
public:
    //untuk mengakses panjang dan lebar
    friend void PersegiPanjang::inputData(BangunDatar &bd);
    //untuk megakses fungsi
    friend void PersegiPanjang::outputData(BangunDatar &bd);

};

void PersegiPanjang::inputData(BangunDatar &bd){
    cout << "Masukkan Panjang : ";
    cin >> bd.panjang;
    cout << "Masukkan Lebar : ";
    cin >> bd.lebar;
}

void PersegiPanjang::outputData(BangunDatar &bd){
    cout << "Luas : " << bd.hitungLuas() << endl;
    cout << "Keliling : " << bd.hitungkeliling() << endl;
};

int main() {
    PersegiPanjang pP;
    BangunDatar bD;
    pP.inputData(bD);
    pP.outputData(bD);
};