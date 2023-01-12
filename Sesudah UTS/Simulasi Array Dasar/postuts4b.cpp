//judul
    //matrix array
    //Muhammad Naufal Abdulmajid
    //30 November 2022
    //d2g

#include <iostream>
using namespace std;
//kamus
int matA[5];
int matB[5];
int matHsl[5];
int x;
//deskripsi
main ()
{
matA[4] = 1;
matA[0] = 3;
matA[1] = 4;
matA[3] = 9;
matA[2] = 7;
//========================================================================================
x = 0;
while (x < 5)
{
    cout << "Inputkan Nilai MatB Index ke-" << x << ": "; cin >> matB[x];
    x = x + 1;
}
//========================================================================================
x = 0;
while (x < 5)
{
    matHsl[x] = matA[x] + matB[x];
    x = x + 1;
}
//========================================================================================
cout << endl;
//========================================================================================
x = 0;
while (x < 5)
{
    cout << "Hasil Penjumlahan MatA + MatB Index ke-" << x << ": " << matHsl[x] << endl;
    x = x + 1;
}
}
