//judul
    //stretching & warming up
    //Muhammad Naufal Abdulmajid
    //16 November 2022
    //d2g

//task
    //A = 1.9, Be = Input, Ce = 20
    //A * Be =?
    //A + Be * Ce =?
    //Rubah A menjadi 20 dan Ce menjadi 1.9

#include <iostream>
using namespace std;
//kamus
float A, Be, Ce;
float d, e;

//deskripsi
main ()
{
cout << "Inputkan Nilai Be : "; cin >> Be;
A = 1.9;
Ce = 20;

d = A * Be;
e = A + Be * Ce;

cout << "Jika A = 1.9 dan Ce = 20" << endl;
cout << "A * Be = " << d << endl;
cout << "A + Be * Ce = " << e << endl;

A = 20;
Ce = 1.9;

d = A * Be;
e = A + Be * Ce;
cout << "Jika A = 20 dan Ce = 1.9" << endl;
cout << "A * Be = " << d << endl;
cout << "A + Be * Ce = " << e;

}
