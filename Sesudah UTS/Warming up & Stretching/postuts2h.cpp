//judul
    //stretching & warming up
    //Muhammad Naufal Abdulmajid
    //23 November 2022
    //d2g

//task
    //datane 7 array
    //input datane menggunakan loop
    //cari bilangan tertentu dalam inputan

#include <iostream>
using namespace std;
//kamus
int datane[7];
int loop;
int cari;


//deskripsi
main ()
{
loop = 0;
while (loop < 7)
{
    cout << "Masukkan Nilai Index Ke - " << loop << ": "; cin >> datane[loop];
    loop = loop + 1;
}
cout << endl;

cout << "Masukkan Bilangan Yang Ingin Dicari :"; cin >> cari;
loop = 0;
while (loop < 7)
{
    if (cari == datane[loop])
        cout << "Ditemukan di Index " << loop;
    if (cari != datane[loop])
        cout << "Tidak Ketemu";
    loop = loop + 1;
}

}

