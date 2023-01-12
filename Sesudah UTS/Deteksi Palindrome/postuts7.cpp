//judul
    //Latihan Deteksi Palindrome
    //Muhammad Naufal ABdulmajid
    //21 des 22
    //d2g

#include <iostream>
#include <string.h>
using namespace std;

//kamus
int depan, belakang;
int panjang;
bool palindrome;
string kata;

//deskripsi
main ()
{
cout << "Program Deteksi Palindrom" << endl;
cout << "=================================" << endl << endl;

cout << "Inputkan Kata : "; getline(cin,kata);
panjang = kata.length();
palindrome = true;

depan = 0;
belakang = panjang - depan - 1;
while (depan < panjang)
{
    if (kata[depan] != kata[belakang])
    {
    palindrome = false;
    break;
    }
    depan = depan + 1;
}
cout << endl << "=================================" << endl;
cout << "Kata Tersebut ";
if (palindrome==true)
{
    cout << "Palindrom";
}
else
{
    cout << "Bukan Palindrom";
}
}
