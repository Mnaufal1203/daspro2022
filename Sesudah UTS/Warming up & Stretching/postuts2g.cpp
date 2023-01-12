//judul
    //stretching & warming up
    //Muhammad Naufal Abdulmajid
    //23 November 2022
    //d2g

//task
    //datane 6 array
    //input datane menggunakan loop

#include <iostream>
using namespace std;
//kamus
int datane[7];
int loop;

//deskripsi
main ()
{
loop = 0;
while (loop < 7)
{
    cout << "Masukkan Nilai Index Ke - " << loop << ": "; cin >> datane[loop];
    loop = loop + 1;
}
}
