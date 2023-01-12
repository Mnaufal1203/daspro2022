//judul
    //latihan ADT 2
    //Muhammad Naufal Abdulmajid
    //14 Desember 2022
    //d2g

#include <iostream>
using namespace std;
//kamus
struct tgl
{
    int day, year;
    string month;
};
struct tgl a, b, c;
//deskripsi
main ()
{
cout << "Mendata Tangal Lahir" << endl;

cout << "==============================================" << endl;

cout << "Inputkan Tanggal Lahir A : "; cin >> a.day;
cout << "Inputkan Bulan Lahir A : "; cin >> a.month;
cout << "Inputkan Tahun Lahir A : "; cin >> a.year;

cout << endl;
cout << "==============================================" << endl;

cout << "Inputkan Tanggal Lahir B :"; cin >> b.day;
cout << "Inputkan Bulan Lahir B :"; cin >> b.month;
cout << "Inputkan Tahun Lahir B :"; cin >> b.year;

cout << endl;
cout << "==============================================" << endl;

cout << "Inputkan Tanggal Lahir C :"; cin >> c.day;
cout << "Inputkan Bulan Lahir C :"; cin >> c.month;
cout << "Inputkan Tahun Lahir C :"; cin >> c.year;

cout << endl;
cout << "==============================================" << endl;

cout << "Tanggal Lahir A : " << a.day << " " << a.month << " " << a.year << endl;
cout << "Tanggal Lahir B : " << b.day << " " << b.month << " " << b.year << endl;
cout << "Tanggal Lahir C : " << c.day << " " << c.month << " " << c.year << endl;
}
