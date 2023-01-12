//judul
//Menghitung Luas dan Keliling Lingkaran

#include <iostream>
using namespace std;
//kamus
int   jari;
float luas,keliling,phi;

//deskripsi
main ()
{
    phi=3,14;

    cout << "Menghitung Luas dan Keliling Lingkaran" << endl;
    cout << "--------------------------------------" << endl;

    cout << "Masukkan Jari Jarinya";
    cin  >> jari;
    luas    =phi * jari * jari;
    keliling=2 * phi * jari;

    cout << "jika jari jarinya adalah"  << jari << endl;
    cout << "Maka Luas Lingkaran tersebut adalah" << luas << endl;
    cout << "dan kelilingnya adalah" << keliling << endl;
    cout << "--------------------------------------" << endl;

}
