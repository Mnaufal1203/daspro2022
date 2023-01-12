//judul
//nama dan jenis kelamin
//Muhammad Naufal Abdulmajid
//25 sept 2022
//rumah

#include <iostream>
using namespace std;

//kamus
string nama;
int jk;

//deskripsi
main ()
{
cout << "Program Sederhana Nama dan Jenis Kelamin" << endl;
cout << "----------------------------------------------------------------------------------------------------" << endl << endl;


cout << "Masukkan Nama Anda : ";
getline (cin, nama);

cout << "Pilih jenis kelamin (Input 1 untuk perempuan, Input 2 untuk laki-laki) : ";
cin  >> jk;

cout << "----------------------------------------------------------------------------------------------------" << endl << endl;

switch (jk)
    {
        case 1 :
            {
                cout << "Halo " << nama << ", Jenis Kelamin Perempuan" << endl << endl;
                break;
            }
        case 2 :
            {
                cout << "Halo " << nama << ", Jenis Kelamin Laki Laki" << endl << endl;
                break;
            }

        default :
            {
                cout << "Halo " << nama << endl << "Input Jenis Kelamin Salah." << endl << endl;
                break;
            }
    }

cout << "----------------------------------------------------------------------------------------------------";
}

