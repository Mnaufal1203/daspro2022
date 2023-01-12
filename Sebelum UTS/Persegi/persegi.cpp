//judul
//Menghitung Luas dan Keliling Segi Empat

#include <iostream>
using namespace std;

//kamus
float panjang,lebar,keliling,luas;

//deskripsi
main ()

 {
    cout << "Menghitung Luas dan Keliling Segi 4" << endl;
    cout << "-----------------------------------" << endl;

    cout << "masukkan Panjangnya";
    cin  >> panjang;
    cout << "Masukkan Lebarnya";
    cin  >> lebar;
    keliling  = 2 * panjang + 2 * lebar;
    luas      = panjang * lebar;

    cout << "jika panjangnya adalah"  << panjang;
    cout << "dan lebarnya adalah" << lebar << endl;
    cout << "maka kelilingnya adalah" << keliling;
    cout << "dan luasnya adalah" << luas << endl;
    cout << "------------------------------------" <<endl;

    if (panjang==lebar){
        cout << "ini merupakan persegi" << endl;
    } else {
        cout << "ini merupakan persegi panjang" << endl;
    }
    cout << "------------------------------------" << endl;
}
