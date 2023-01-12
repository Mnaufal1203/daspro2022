//judul
    //latihan ADT 3
    //Muhammad Naufal Abdulmajid
    //14 Desember 2022
    //d2g

#include <iostream>
using namespace std;
//kamus
struct tgl
{
    int day, mon, yr;
};
struct time
{
    int, sec, mint, hr;
};
struct datetime
{
    struct tgl tanggal;
    struct time waktu;
};
struct placedatetime
{
    string tempat;
    struct datetime wkt;
};
//deskripsi
