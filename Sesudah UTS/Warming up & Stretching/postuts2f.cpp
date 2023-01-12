//judul
    //stretching & warming up
    //Muhammad Naufal Abdulmajid
    //16 November 2022
    //d2g

//task
    //Mencari Bilangan
    //Input A, Be, Ce
    //input bilangan yang ingin dicari

#include <iostream>
using namespace std;
//kamus
float A;
int Be, Ce;
int cari;
//deskripsi
main ()
{
cout << "Inputkan Nilai A : "; cin >> A;
cout << "Inputkan Nilai Be :"; cin >> Be;
cout << "Inputkan Nilai Ce :"; cin >> Ce;
cout << "Inputkan Bilangan yang ingin dicari : "; cin >> cari;

if (cari == A)
{
    cout << "Ketemu di A.";
}
else if (cari == Be)
{
    cout << "Ketemu di Be.";
}
else if (cari == Ce)
{
    cout << "Ketemu di Ce.";
}
else
{
    cout << "Tidak Ketemu.";
}
}
