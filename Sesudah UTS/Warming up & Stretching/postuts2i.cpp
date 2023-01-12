//judul
    //stretching & warming up
    //Muhammad Naufal Abdulmajid
    //23 November 2022
    //d2g

//task
    //datane 7 array
    //input datane menggunakan loop
    //sorting

#include <iostream>
using namespace std;
//kamus
int datane[7];
int loop;
int urut;
int box;


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
loop = 0;
while (loop < 6)
{
    urut = loop +1;
    while (urut < 7)
    {
        if (datane[loop] > datane[urut])
            {
            box = datane[loop];
            datane[urut] = datane[loop];
            datane[loop] = box;
            }
        urut = urut +1;
    }
    loop = loop + 1;
}

loop = 0;
while (loop < 7)
{
    cout << datane[loop] << " ";
    loop = loop +1;
}


}
