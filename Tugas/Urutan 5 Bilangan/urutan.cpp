//judul
    //urutan 5 bilangan
    //Muhammad Naufal Abdulmajid
    //9 Okt 2022
    //line 421

#include <iostream>
using namespace std;
//kamus
int a, b, c, d, e;
int jumlah, kali;
char redo;

//deskripsi
main ()
{
awal:
    cout << "Program Sederhana Urutan 5 Bilangan" << endl;
    cout << "========================================================" << endl << endl;
    cout << "Masukkan Bilangan Pertama  : "; cin >> a;
    cout << "Masukkan Bilangan Kedua    : "; cin >> b;
    cout << "Masukkan Bilangan Ketiga   : "; cin >> c;
    cout << "Masukkan Bilangan Keempat  : "; cin >> d;
    cout << "Masukkan Bilangan Kelima   : "; cin >> e;
    cout << endl;
    cout << "========================================================" << endl << endl;
 if (a > b && b > c && c > d && d > e)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << e << "," << d << "," << c << "," << b << "," << a  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << a << "," << b << "," << c << "," << d << "," << e  << "." << endl;
 }
 if (a > b && b > c && c > e && e > d)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << d << "," << e << "," << c << "," << b << "," << a  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << a << "," << b << "," << c << "," << e << "," << d  << "." << endl;
 }
 if (a > b && b > d && d > e && e > c)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << c << "," << e << "," << d << "," << b << "," << a  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << a << "," << b << "," << d << "," << e << "," << c  << "." << endl;
 }
 if (a > b && b > d && d > c && c > e)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << e << "," << c << "," << d << "," << b << "," << a  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << a << "," << b << "," << d << "," << c << "," << e  << "." << endl;
 }
 if (a > b && b > e && e > c && c > d)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << d << "," << c << "," << e << "," << b << "," << a  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << a << "," << b << "," << e << "," << c << "," << d  << "." << endl;
 }
 if (a > b && b > e && e > d && d > c)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << c << "," << d << "," << e << "," << b << "," << a  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << a << "," << b << "," << e << "," << d << "," << c  << "." << endl;
 }
 if (a > c && c > b && b > d && d > e)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << e << "," << d << "," << b << "," << c << "," << a  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << a << "," << c << "," << b << "," << d << "," << e  << "." << endl;
 }
 if (a > c && c > b && b > e && e > d)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << d << "," << e << "," << b << "," << c << "," << a  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << a << "," << c << "," << b << "," << e << "," << d  << "." << endl;
 }
 if (a > c && c > d && d > b && b > e)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << e << "," << b << "," << d << "," << c << "," << a  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << a << "," << c << "," << d << "," << b << "," << e  << "." << endl;
 }
 if (a > c && c > d && d > e && e > b)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << b << "," << e << "," << d << "," << c << "," << a  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << a << "," << c << "," << d << "," << e << "," << b  << "." << endl;
 }
 if (a > c && c > e && e > b && b > d)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << d << "," << b << "," << e << "," << c << "," << a  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << a << "," << c << "," << e << "," << b << "," << d  << "." << endl;
 }
 if (a > c && c > e && e > d && d > b)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << b << "," << d << "," << e << "," << c << "," << a  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << a << "," << c << "," << e << "," << d << "," << b  << "." << endl;
 }
 if (a > d && d > b && b > e && e > c)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << c << "," << e << "," << b << "," << d << "," << a  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << a << "," << d << "," << b << "," << e << "," << c  << "." << endl;
 }
 if (a > d && d > b && b > c && c > e)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << e << "," << c << "," << b << "," << d << "," << a  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << a << "," << d << "," << b << "," << c << "," << e  << "." << endl;
 }
 if (a > d && d > c && c > b && b > e)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << e << "," << b << "," << c << "," << d << "," << a  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << a << "," << d << "," << c << "," << b << "," << e  << "." << endl;
 }
 if (a > d && d > c && c > e && e > b)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << b << "," << e << "," << c << "," << d << "," << a  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << a << "," << d << "," << c << "," << e << "," << b  << "." << endl;
 }
 if (a > d && d > e && e > c && c > d)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << b << "," << c << "," << e << "," << d << "," << a  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << a << "," << d << "," << e << "," << c << "," << b  << "." << endl;
 }
 if (a > d && d > e && e > b && b > c)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << c << "," << b << "," << e << "," << d << "," << a  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << a << "," << d << "," << e << "," << b << "," << c  << "." << endl;
 }
 if (a > e && e > b && b > c && c > d)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << d << "," << c << "," << b << "," << e << "," << a  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << a << "," << e << "," << b << "," << c << "," << d  << "." << endl;
 }
 if (a > e && e > b && b > d && d > c)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << c << "," << d << "," << b << "," << e << "," << a  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << a << "," << e << "," << b << "," << d << "," << c  << "." << endl;
 }
 if (a > e && e > c && c > d && d > b)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << b << "," << d << "," << c << "," << e << "," << a  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << a << "," << e << "," << c << "," << d << "," << b  << "." << endl;
 }
 if (a > e && e > c && c > b && b > d)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << d << "," << b << "," << c << "," << e << "," << a  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << a << "," << e << "," << c << "," << b << "," << d  << "." << endl;
 }
 if (a > e && e > d && d > c && c > b)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << b << "," << c << "," << d << "," << e << "," << a  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << a << "," << e << "," << d << "," << c << "," << b  << "." << endl;
 }
 if (a > e && e > d && d > b && b > c)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << c << "," << b << "," << d << "," << e << "," << a  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << a << "," << e << "," << d << "," << b << "," << c  << "." << endl;
 }
 if (b > a && a > c && c > d && d > e)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << e << "," << d << "," << c << "," << a << "," << b  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << b << "," << a << "," << c << "," << d << "," << e  << "." << endl;
 }
 if (b > a && c > c && c > e && e > d)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << d << "," << e << "," << c << "," << a << "," << b  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << b << "," << a << "," << c << "," << e << "," << d  << "." << endl;
 }
 if (b > a && a > d && d > c && c > e)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << e << "," << c << "," << d << "," << a << "," << b  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << b << "," << a << "," << d << "," << c << "," << e  << "." << endl;
 }
 if (b > a && a > d && d > e && e > c)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << c << "," << e << "," << d << "," << a << "," << b  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << b << "," << a << "," << d << "," << e << "," << c  << "." << endl;
 }
 if (b > a && a > e && e > c && c > d)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << d << "," << c << "," << e << "," << a << "," << b  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << b << "," << a << "," << e << "," << c << "," << d  << "." << endl;
 }
 if (b > a && a > e && e > d && d > c)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << c << "," << d << "," << e << "," << a << "," << b  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << b << "," << a << "," << e << "," << d << "," << c  << "." << endl;
 }
 if (b > c && c > a && a > d && d > e)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << e << "," << d << "," << a << "," << c << "," << b  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << b << "," << c << "," << a << "," << d << "," << e  << "." << endl;
 }
 if (b > c && c > a && a > e && e > d)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << d << "," << e << "," << a << "," << c << "," << b  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << b << "," << c << "," << a << "," << e << "," << d  << "." << endl;
 }
 if (b > c && c > d && d > a && a > e)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << e << "," << a << "," << d << "," << c << "," << b  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << b << "," << c << "," << d << "," << a << "," << e  << "." << endl;
 }
 if (b > c && c > d && d > e && e > a)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << a << "," << e << "," << d << "," << c << "," << b  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << b << "," << c << "," << d << "," << e << "," << a  << "." << endl;
 }
 if (b > c && c > e && e > a && a > d)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << d << "," << a << "," << e << "," << c << "," << b  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << b << "," << c << "," << e << "," << a << "," << d  << "." << endl;
 }
 if (b > c && c > e && e > d && d > a)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << a << "," << d << "," << e << "," << c << "," << b  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << b << "," << c << "," << e << "," << d << "," << a  << "." << endl;
 }
 if (b > d && d > a && a > c && c > e)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << e << "," << c << "," << a << "," << d << "," << b  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << b << "," << d << "," << a << "," << c << "," << e  << "." << endl;
 }
 if (b > d && d > a && a > e && e > c)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << c << "," << e << "," << a << "," << d << "," << b  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << b << "," << d << "," << a << "," << e << "," << c  << "." << endl;
 }
 if (b > d && d > e && e > a && a > c)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << c << "," << a << "," << e << "," << d << "," << b  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << b << "," << d << "," << e << "," << a << "," << c  << "." << endl;
 }
 if (b > d && d > e && e > c && c > a)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << a << "," << c << "," << e << "," << d << "," << b  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << b << "," << d << "," << e << "," << c << "," << a  << "." << endl;
 }
 if (b > d && d > c && c > a && a > e)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << e << "," << a << "," << c << "," << d << "," << b  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << b << "," << d << "," << c << "," << a << "," << e  << "." << endl;
 }
 if (b > d && d > c && c > e && e > a)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << a << "," << e << "," << c << "," << d << "," << b  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << b << "," << d << "," << c << "," << e << "," << a  << "." << endl;
 }
 if (b > e && e > a && a > c && c > d)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << d << "," << c << "," << a << "," << e << "," << b  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << b << "," << e << "," << a << "," << c << "," << d  << "." << endl;
 }
 if (b > e && e > a && a > d && d > c)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << c << "," << d << "," << a << "," << e << "," << b  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << b << "," << e << "," << a << "," << d << "," << c  << "." << endl;
 }
 if (b > e && e > c && c > a && a > d)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << d << "," << a << "," << c << "," << e << "," << b  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << b << "," << e << "," << c << "," << a << "," << d  << "." << endl;
 }
 if (b > e && e > c && c > d && d > a)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << a << "," << d << "," << c << "," << e << "," << b  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << b << "," << e << "," << c << "," << d << "," << a  << "." << endl;
 }
 if (b > e && e > d && d > a && a > c)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << c << "," << a << "," << d << "," << e << "," << b  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << b << "," << e << "," << d << "," << a << "," << c  << "." << endl;
 }
 if (b > e && e > d && d > c && c > a)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << e << "," << d << "," << d << "," << e << "," << b  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << b << "," << e << "," << d << "," << c << "," << a  << "." << endl;
 }
 if (c > a && a > b && b > d && d > e)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << e << "," << d << "," << b << "," << a << "," << c  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << c << "," << a << "," << b << "," << d << "," << e  << "." << endl;
 }
 if (c > a && a > b && b > e && e > d)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << d << "," << e << "," << b << "," << a << "," << c  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << c << "," << a << "," << b << "," << e << "," << d  << "." << endl;
 }
 if (c > a && a > d && d > b && b > e)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << e << "," << b << "," << d << "," << a << "," << c  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << c << "," << a << "," << d << "," << b << "," << e  << "." << endl;
 }
 if (c > a && a > d && d > e && e > b)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << b << "," << e << "," << d << "," << a << "," << c  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << c << "," << a << "," << d << "," << e << "," << b  << "." << endl;
 }
 if (c > a && a > e && e > b && b > d)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << d << "," << b << "," << e << "," << a << "," << c  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << c << "," << a << "," << e << "," << b << "," << d  << "." << endl;
 }
 if (c > a && a > e && e > d && d > b)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << b << "," << d << "," << e << "," << a << "," << c  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << c << "," << a << "," << e << "," << d << "," << b  << "." << endl;
 }
 if (c > b && b > a && a > d && d > e)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << e << "," << d << "," << a << "," << b << "," << c  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << c << "," << b << "," << a << "," << d << "," << e  << "." << endl;
 }
 if (c > b && b > a && a > e && e > d)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << d << "," << e << "," << a << "," << b << "," << c  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << c << "," << b << "," << a << "," << e << "," << d  << "." << endl;
 }
 if (c > b && b > d && d > a && a > c)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << e << "," << a << "," << d << "," << b << "," << c  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << c << "," << b << "," << d << "," << a << "," << e  << "." << endl;
 }
 if (c > b && b > d && d > e && e > a)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << a << "," << e << "," << d << "," << b << "," << c  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << c << "," << b << "," << d << "," << e << "," << a  << "." << endl;
 }
 if (c > b && b > e && e > a && a > d)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << d << "," << a << "," << e << "," << b << "," << c  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << c << "," << b << "," << e << "," << a << "," << d  << "." << endl;
 }
 if (c > b && b > e && e > d && d > a)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << a << "," << d << "," << e << "," << b << "," << c  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << c << "," << b << "," << e << "," << d << "," << a  << "." << endl;
 }
 if (c > d && d > a && a > b && b > e)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << e << "," << b << "," << a << "," << d << "," << c  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << c << "," << d << "," << a << "," << b << "," << e  << "." << endl;
 }
 if (c > d && d > a && a > e && e > b)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << b << "," << e << "," << a << "," << d << "," << c  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << c << "," << d << "," << a << "," << e << "," << b  << "." << endl;
 }
 if (c > d && d > b && b > a && a > e)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << e << "," << a << "," << b << "," << d << "," << c  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << c << "," << d << "," << b << "," << a << "," << e  << "." << endl;
 }
 if (c > d && d > b && b > e && e > a)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << a << "," << e << "," << b << "," << d << "," << c  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << c << "," << d << "," << b << "," << e << "," << a  << "." << endl;
 }
 if (c > d && d > e && e > a && a > b)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << b << "," << a << "," << e << "," << d << "," << c  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << c << "," << d << "," << e << "," << a << "," << b  << "." << endl;
 }
 if (c > d && d > e && e > b && b > a)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << a << "," << b << "," << e << "," << d << "," << c  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << c << "," << d << "," << e << "," << b << "," << a  << "." << endl;
 }
 if (c > e && e > a && a > b && b > d)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << d << "," << b << "," << a << "," << e << "," << c  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << c << "," << e << "," << a << "," << b << "," << d  << "." << endl;
 }
 if (c > e && e > a && a > d && d > b)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << b << "," << d << "," << a << "," << e << "," << c  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << c << "," << e << "," << a << "," << d << "," << b  << "." << endl;
 }
 if (c > e && e > b && b > a && a > d)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << d << "," << a << "," << b << "," << e << "," << c  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << c << "," << e << "," << b << "," << a << "," << d  << "." << endl;
 }
 if (c > e && e > b && b > d && d > a)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << a << "," << d << "," << b << "," << e << "," << c  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << c << "," << e << "," << b << "," << d << "," << a  << "." << endl;
 }
 if (c > e && e > d && d > a && a > b)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << b << "," << a << "," << d << "," << e << "," << c  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << c << "," << e << "," << d << "," << a << "," << b  << "." << endl;
 }
 if (c > e && e > d && d > b && b > a)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << a << "," << b << "," << d << "," << e << "," << c  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << c << "," << e << "," << d << "," << b << "," << a  << "." << endl;
 }
 if(d > a && a > b && b > c && c > e)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << e << "," << c << "," << b << "," << a << "," << d  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << d << "," << a << "," << b << "," << c << "," << e  << "." << endl;
 }
 if  (d > a && a > b && b > e && e > c)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << c << "," << e << "," << b << "," << a << "," << d  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << d << "," << a << "," << b << "," << e << "," << c  << "." << endl;
 }
 if (d > a && a > c && c > b && b > e)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << e << "," << b << "," << c << "," << a << "," << d  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << d << "," << a << "," << c << "," << b << "," << e  << "." << endl;
 }
 if (d > a && a > c && c > e && e > b)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << b << "," << e << "," << c << "," << a << "," << d  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << d << "," << a << "," << c << "," << e << "," << b  << "." << endl;
 }
 if (d > a && a > e && e > b && b > c)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << c << "," << b << "," << e << "," << a << "," << d  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << d << "," << a << "," << e << "," << b << "," << c  << "." << endl;
 }
 if (d > a && a > e && e > c && c > b)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << b << "," << c << "," << e << "," << a << "," << d  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << d << "," << a << "," << e << "," << c << "," << b  << "." << endl;
 }
 if (d > b && b > a && a > c && c > e)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << e << "," << c << "," << a << "," << b << "," << d  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << d << "," << b << "," << a << "," << c << "," << e  << "." << endl;
 }
 if (d > b && b > a && a > e && e > c)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << c << "," << e << "," << a << "," << b << "," << d  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << d << "," << b << "," << a << "," << e << "," << c  << "." << endl;
 }
 if (d > b && b > c && c > a && a > e)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << e << "," << a << "," << c << "," << b << "," << d  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << d << "," << b << "," << c << "," << a << "," << e  << "." << endl;
 }
 if (d > b && b > c && c > e && e > a)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << a << "," << e << "," << c << "," << b << "," << d  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << d << "," << b << "," << c << "," << e << "," << a  << "." << endl;
 }
 if (d > b && b > e && e > a && a > c)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << c << "," << a << "," << e << "," << b << "," << d  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << d << "," << b << "," << e << "," << a << "," << c  << "." << endl;
 }
 if (d > b && b > e && e > c && c > a)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << a << "," << c << "," << e << "," << b << "," << d  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << d << "," << b << "," << e << "," << c << "," << a  << "." << endl;
 }
 if (d > c && c > a && a > b && b > e)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << e << "," << b << "," << a << "," << c << "," << d  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << d << "," << c << "," << a << "," << b << "," << e  << "." << endl;
 }
 if (d > c && c > a && a > e && e > b)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << b << "," << e << "," << a << "," << c << "," << d  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << d << "," << c << "," << a << "," << e << "," << b  << "." << endl;
 }
 if (d > c && c > b && b > a && a > e)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << e << "," << a << "," << b << "," << c << "," << d  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << d << "," << c << "," << b << "," << a << "," << e  << "." << endl;
 }
 if (d > c && c > b && b > e && e > a)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << a << "," << e << "," << b << "," << c << "," << d  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << d << "," << c << "," << b << "," << e << "," << a  << "." << endl;
 }
 if (d > c && c > e && e > a && a > b)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << b << "," << a << "," << e << "," << c << "," << d  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << d << "," << c << "," << e << "," << a << "," << b  << "." << endl;
 }
 if (d > c && c > e && e > b && b > a)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << a << "," << b << "," << e << "," << c << "," << d  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << d << "," << c << "," << e << "," << b << "," << a  << "." << endl;
 }
 if (d > e && e > a && a > b && b > c)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << c << "," << b << "," << a << "," << e << "," << d  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << d << "," << e << "," << a << "," << b << "," << c  << "." << endl;
 }
 if (d > e && e > a && a > c && c > b)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << b << "," << c << "," << a << "," << e << "," << d  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << d << "," << e << "," << a << "," << c << "," << b  << "." << endl;
 }
 if (d > e && e > b && b > a && a > c)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << c << "," << a << "," << b << "," << e << "," << d  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << d << "," << e << "," << b << "," << a << "," << c  << "." << endl;
 }
 if (d > e && e > b && b > c && c > a)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << a << "," << c << "," << b << "," << e << "," << d  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << d << "," << e << "," << b << "," << c << "," << a  << "." << endl;
 }
 if (d > e && e > c && c > a && a > b)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << b << "," << b << "," << c << "," << e << "," << d  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << d << "," << e << "," << c << "," << a << "," << b  << "." << endl;
 }
 if (d > e && e > c && c > b && b > a)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << a << "," << b << "," << c << "," << e << "," << d  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << d << "," << e << "," << c << "," << b << "," << a  << "." << endl;
 }
 if (e > a && a > b && b > c && c > d)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << d << "," << c << "," << b << "," << a << "," << e  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << e << "," << a << "," << b << "," << c << "," << d  << "." << endl;
 }
 if (e > a && a > b && b > d && d > c)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << c << "," << d << "," << b << "," << a << "," << e  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << e << "," << a << "," << b << "," << d << "," << c  << "." << endl;
 }
 if (e > a && a > c && c > b && b > d)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << d << "," << b << "," << c << "," << a << "," << e  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << e << "," << a << "," << c << "," << b << "," << d  << "." << endl;
 }
 if (e > a && a > c && c > d && d > b)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << b << "," << d << "," << c << "," << a << "," << e  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << e << "," << a << "," << c << "," << d << "," << b  << "." << endl;
 }
 if (e > a && a > d && d > b && b > c)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << c << "," << b << "," << d << "," << a << "," << e  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << e << "," << a << "," << d << "," << b << "," << c  << "." << endl;
 }
 if (e > a && a > d && d > c && c > b)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << b << "," << c << "," << d << "," << a << "," << e  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << e << "," << a << "," << d << "," << c << "," << b  << "." << endl;
 }
 if (e > b && b > a && a > c && c > d)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << d << "," << c << "," << a << "," << b << "," << e  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << e << "," << b << "," << a << "," << c << "," << d  << "." << endl;
 }
 if (e > b && b > a && a > d && d > c)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << c << "," << d << "," << a << "," << b << "," << e  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << e << "," << b << "," << a << "," << d << "," << c  << "." << endl;
 }
 if (e > b && b > c && c > a && a > d)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << d << "," << a << "," << c << "," << b << "," << e  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << e << "," << b << "," << c << "," << a << "," << d  << "." << endl;
 }
 if (e > b && b > c && c > d && d > a)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << a << "," << d << "," << c << "," << b << "," << e  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << e << "," << b << "," << c << "," << d << "," << a  << "." << endl;
 }
 if (e > b && b > d && d > a && a > c)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << c << "," << a << "," << d << "," << b << "," << e  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << e << "," << b << "," << d << "," << a << "," << c  << "." << endl;
 }
 if (e > b && b > d && d > c && c > a)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << a << "," << c << "," << d << "," << b << "," << e  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << e << "," << b << "," << d << "," << c << "," << a  << "." << endl;
 }
 if (e > c && c > a && c > b && b > d)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << d << "," << b << "," << a << "," << c << "," << e  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << e << "," << c << "," << a << "," << b << "," << d  << "." << endl;
 }
 if (e > c && c > a && c > d && d > b)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << b << "," << d << "," << a << "," << c << "," << e  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << e << "," << c << "," << a << "," << d << "," << b  << "." << endl;
 }
 if (e > c && c > b && b > d && d > a)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << a << "," << d << "," << b << "," << c << "," << e  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << e << "," << c << "," << b << "," << d << "," << a  << "." << endl;
 }
 if (e > c && c > b && b > a && a > d)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << d << "," << a << "," << b << "," << c << "," << e  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << e << "," << c << "," << b << "," << a << "," << d  << "." << endl;
 }
 if (e > c && c > d && d > a && a > b)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << a << "," << b << "," << d << "," << c << "," << e  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << e << "," << c << "," << d << "," << a << "," << b  << "." << endl;
 }
 if (e > c && c > d && d > b && b > a)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << a << "," << b << "," << d << "," << c << "," << e  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << e << "," << c << "," << d << "," << b << "," << a  << "." << endl;
 }
 if (e > d && d > a && a > b && b > c)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << c << "," << b << "," << a << "," << d << "," << e  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << e << "," << d << "," << a << "," << b << "," << c  << "." << endl;
 }
 if (e > d && d > a && a > c && c > b)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << b << "," << c << "," << a << "," << d << "," << e  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << e << "," << d << "," << a << "," << c << "," << b  << "." << endl;
 }
 if (e > d && d > b && b > a && a > c)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << c << "," << a << "," << b << "," << d << "," << e  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << e << "," << d << "," << b << "," << a << "," << c  << "." << endl;
 }
 if (e > d && d > b && b > c && c > a)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << a << "," << c << "," << b << "," << d << "," << e  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << e << "," << d << "," << b << "," << c << "," << a  << "." << endl;
 }
 if (e > d && d > c && c > a && a > b)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << b << "," << a << "," << c << "," << d << "," << e  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << e << "," << d << "," << c << "," << a << "," << b  << "." << endl;
 }
 if (e > d && d > c && c > b && b > a)
 {
    cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << a << "," << b << "," << c << "," << d << "," << e  << "." << endl;
    cout << "Urutan 5 Bilangan Tersebut dari yang terbesar Adalah : " << e << "," << d << "," << c << "," << b << "," << a  << "." << endl;
 }

jumlah = a + b + c + d + e;
kali   = a * b * c * d * e;

    cout << "Hasil Penjumlahan 5 Bilangan tersebut adalah " << jumlah << endl;
    cout << "Hasil Perkalian 5 Bilangan tersebut adalah " << kali << endl << endl;
    cout << "========================================================" << endl;


    cout << endl;
    cout << "Apakah Anda ingin menggunakan program ini lagi?" << endl;
    cout << "Inputkan y jika iya" << endl;
    cout << "Inputkan n jika tidak" << endl;
    cout << "(y/n) : "; cin >> redo;
    cout << endl << endl;

    switch (tolower(redo))
    {
    case 'y'  :
        {
            goto awal;
            break;
        }
        case 'n' :
        {
            goto akhir;
            break;
        }
        default :
        {
            cout << "Maunya Gimana to Bos????" << endl;
        }
    }
    cout << "========================================================" << endl << endl;



akhir:
    cout << "Terima Kasih Sudah Menggunakan Program Saya" << endl;
    cout << "Program ini dibuat oleh Muhammad Naufal Abdulmajid - A11.2022.14727" << endl;
    cout << "========================================================";
    return 0;
}
