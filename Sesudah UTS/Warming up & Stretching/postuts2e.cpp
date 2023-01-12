//judul
    //stretching & warming up
    //Muhammad Naufal Abdulmajid
    //16 November 2022
    //d2g

//task
    // N = Integer
    // Input N
    // repeat until Sebanyak N Kali

#include <iostream>
using namespace std;
//kamus
int N;
int loop;

//deskripsi
main ()
{
cout << "Inputkan Nilai N : "; cin >> N;

loop = 1;
do {
    cout << loop << " ";
    loop = loop + 1;
}while (loop <= N);

}
