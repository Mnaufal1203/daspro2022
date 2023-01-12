//judul
//Menghitung durasi waktu
//Muhammad Naufal Abdulmajid
//21 September 22
//d2g
//14:20:45 - 19:34:12

#include <iostream>
using namespace std;
//kamus
int jAwal, mAwal, dAwal;
int jAkhir, mAkhir, dAkhir;
int totalawal, totalakhir;
int durasi;
int HH, MM, DD;

//deskripsi     :
main ()
{

    cout << "----------------------------------------------------------" << endl;
    cout << "Inputkan Jam pertama : ";
    cin >> jAwal;
    cout << "Inputkan Menit pertama : ";
    cin >> mAwal;
    cout << "Inputkan Detik pertama : ";
    cin >> dAwal;
    cout << "----------------------------------------------------------" << endl;
    cout << "Inputkan Jam kedua : ";
    cin >> jAkhir;
    cout << "Inputkan Menit kedua : ";
    cin >> mAkhir;
    cout << "Inputkan Detik kedua : ";
    cin >> dAkhir;
    cout << "----------------------------------------------------------" << endl;

    totalawal  = (3600 * jAwal) + (60 * mAwal) + (dAwal);
    totalakhir = (3600 * jAkhir) + (60 * mAkhir) + (dAkhir);

    durasi     = totalakhir - totalawal;

    HH         = durasi / 3600;
    MM         = (durasi % 3600) / 60;
    DD         = durasi - ((HH * 3600) + (MM * 60));

    cout << "Sisa Jamnya Adalah" << HH << endl;
    cout << "Sisa Menitnya Adalah" << MM << endl;
    cout << "Sisa Detiknya Adalah" << DD << endl;
    cout << "----------------------------------------------------------" << endl;

    if      (durasi<=300)
            {
            cout << "Kok Sediluk" << endl;
            }
    else if (durasi>300 & durasi<=3600)
            {
            cout << "Cukuplah" << endl;
            }
    else
            {
            cout << "Suwiiiiiiiiiiiiiiiiiii" << endl;
            }
    cout << "----------------------------------------------------------" << endl;
}
