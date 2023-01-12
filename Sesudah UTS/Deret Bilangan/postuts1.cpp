//judul
//Muhammad Naufal Abdulmajid
//9 Nov 2022
//d2g

//task:
    //- Menampilkan angka 1-40 dengan loop while/repeat
    //- Menampilkan total jumlah bilangan dari 1-40
    //- Menampilkan bilangan yang habis dibagi 3
    //- Berapa Jumlah Bilangan yang habis dibagi 3
    //- Total Jumlah Bilangan yang habis dibagi 3

#include <iostream>
using namespace std;
//kamus
int deret;
int derettotal;
int bagi3;
int bagi3count;
int bagi3total;
//deskripsi
main ()
{
    cout << "Deret Bilangan 1-40" << endl;
    deret = 1;
    derettotal = 0;
    while (deret < 41)
    {
        cout << deret << ", ";
        deret = deret + 1;
        derettotal = derettotal + deret;
    }
    cout << endl;
    cout << "Total Jumlah Bilangannya adalah : " << derettotal << endl << endl;

    cout << "Deret Bilangan 1-40 yang habis dibagi 3" << endl;
    bagi3 = 3;
    bagi3count = 0;
    bagi3total = 0;
    while (bagi3 < 40)
    {
        cout << bagi3 << ", ";
        bagi3 = bagi3 + 3;
        bagi3count = bagi3count + 1;
        bagi3total = bagi3total + bagi3;
    }
    cout << endl;
    cout << "Jumlah Bilangan yang Habis Dibagi 3 adalah : " << bagi3count << endl;
    cout << "Total Jumlah Bilangan yang HAbis Dibagi 3 : " << bagi3total << endl;
}
