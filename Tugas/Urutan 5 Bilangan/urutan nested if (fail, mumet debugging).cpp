//judul
    //urutan 5 bilangan
    //Muhammad Naufal Abdulmajid
    //9 Okt 2022

#include <iostream>
using namespace std;
//kamus
int a, b, c, d, e;
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

	if (a > b)
    {
        if (b > c)
        {
            if (c > d)
            {
                if (d > e)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << e << "," << d << "," << c << "," << b << "," << a  << "." << endl;
                }
                else if (e > d)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << d << "," << e << "," << c << "," << b << "," << a  << "." << endl;
                }
            }
            else if (d > c)
            {
                if (c > e)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << e << "," << c << "," << d << "," << b << "," << a  << "." << endl;
                }
                else if (e > c)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << c << "," << e << "," << d << "," << b << "," << a  << "." << endl;
                }
            }
        }
        else if (c > b)
        {
            if (b > d)
            {
                if (d > e)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << e << "," << d << "," << b << "," << c << "," << a  << "." << endl;
                }
                else if (e > d)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << d << "," << e << "," << b << "," << c << "," << a  << "." << endl;
                }
            }
            else if (d > b)
            {
                if (b > e)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << e << "," << b << "," << d << "," << c << "," << a  << "." << endl;
                }
                else if (e > b)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << b << "," << e << "," << d << "," << c << "," << a  << "." << endl;
                }
            }
        }
        else if (d > b)
        {
            if (b > c)
            {
                if (c > e)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << e << "," << c << "," << b << "," << d << "," << a  << "." << endl;
                }
                else if (e > c)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << c << "," << e << "," << b << "," << d << "," << a  << "." << endl;
                }
            }
            else if (c > b)
            {
                if (b > e)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << e << "," << b << "," << c << "," << d << "," << a  << "." << endl;
                }
                else if (e > b)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << b << "," << e << "," << c << "," << d << "," << a  << "." << endl;
                }
            }
        }
        else if (e > b)
        {
            if (b > c)
            {
                if (c > d)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << d << "," << c << "," << b << "," << e << "," << a  << "." << endl;
                }
                else if (d > c)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << c << "," << d << "," << b << "," << e << "," << a  << "." << endl;
                }
            }
            else if (c > b)
            {
                if (b > d)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << d << "," << b << "," << c << "," << e << "," << a  << "." << endl;
                }
                else if (d > b)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << b << "," << d << "," << c << "," << e << "," << a  << "." << endl;
                }
            }
        }
    }
    else if (b > a)
    {
        if (a > c)
        {
            if (c > d)
            {
                if (d > e)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << e << "," << d << "," << c << "," << a << "," << b  << "." << endl;
                }
                else if (e > d)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << d << "," << e << "," << c << "," << a << "," << b  << "." << endl;
                }
            }
            else if (d > c)
            {
                if (c > e)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << e << "," << c << "," << d << "," << a << "," << b  << "." << endl;
                }
                else if (e > c)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << c << "," << e << "," << d << "," << a << "," << b  << "." << endl;
                }
            }
        }
        else if (c > a)
        {
            if (a > d)
            {
                if (d > e)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << e << "," << d << "," << a << "," << c << "," << b  << "." << endl;
                }
                else if (e > d)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << d << "," << e << "," << a << "," << c << "," << b  << "." << endl;
                }
            }
            else if (d > a)
            {
                if (a > e)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << e << "," << a << "," << d << "," << c << "," << b  << "." << endl;
                }
                else if (e > a)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << a << "," << e << "," << d << "," << c << "," << b  << "." << endl;
                }
            }
        }
        else if (d > a)
        {
            if (a > c)
            {
                if (c > e)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << e << "," << c << "," << a << "," << d << "," << b  << "." << endl;
                }
                else if (e > c)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << c << "," << e << "," << a << "," << d << "," << b  << "." << endl;
                }
            }
            else if (c > a)
            {
                if (a > e)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << e << "," << a << "," << c << "," << d << "," << b  << "." << endl;
                }
                else if (e > a)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << a << "," << e << "," << c << "," << d << "," << b  << "." << endl;
                }
            }
        }
        else if (e > a)
        {
            if (a > c)
            {
                if (c > d)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << d << "," << c << "," << a << "," << e << "," << b  << "." << endl;
                }
                else if (d > c)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << c << "," << d << "," << a << "," << e << "," << b  << "." << endl;
                }
            }
            else if (c > a)
            {
                if (a > d)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << d << "," << a << "," << c << "," << e << "," << b  << "." << endl;
                }
                else if (d > a)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << a << "," << d << "," << c << "," << e << "," << b  << "." << endl;
                }
            }
        }
    }
    else if (c > a)
    {
        if (a > b)
        {
            if (b > d)
            {
                if (d > e)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << e << "," << d << "," << b << "," << a << "," << c  << "." << endl;
                }
                else if (e > d)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << d << "," << e << "," << b << "," << a << "," << c  << "." << endl;
                }
            }
            else if (d > b)
            {
                if (b > e)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << e << "," << b << "," << d << "," << a << "," << c  << "." << endl;
                }
                else if (e > b)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << b << "," << e << "," << d << "," << a << "," << c  << "." << endl;
                }
            }
        }
        else if (b > a)
        {
            if (a > d)
            {
                if (d > e)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << e << "," << d << "," << a << "," << b << "," << c  << "." << endl;
                }
                else if (e > d)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << d << "," << e << "," << a << "," << b << "," << c  << "." << endl;
                }
            }
            else if (d > a)
            {
                if (a > e)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << e << "," << a << "," << d << "," << b << "," << c  << "." << endl;
                }
                else if (e > a)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << a << "," << e << "," << d << "," << b << "," << c  << "." << endl;
                }
            }
        }
        else if (d > a)
        {
            if (a > b)
            {
                if (b > e)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << e << "," << b << "," << a << "," << d << "," << c  << "." << endl;
                }
                else if (e > b)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << b << "," << e << "," << a << "," << d << "," << c  << "." << endl;
                }
            }
            else if (b > a)
            {
                if (a > e)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << e << "," << a << "," << b << "," << d << "," << c  << "." << endl;
                }
                else if (e > a)
                {
                 cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << a << "," << e << "," << b << "," << d << "," << c  << "." << endl;
                }
            }
        }
        else if (e > a)
        {
            if (a > b)
            {
                if (b > d)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << d << "," << b << "," << a << "," << e << "," << c  << "." << endl;
                }
                else if (d > b)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << b << "," << d << "," << a << "," << e << "," << c  << "." << endl;
                }
            }
            else if (b > a)
            {
                if (a > d)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << a << "," << d << "," << b << "," << e << "," << c  << "." << endl;
                }
                else if (d > a)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << d << "," << e << "," << b << "," << e << "," << c  << "." << endl;
                }
            }
        }
    }
    else if (d > a)
    {
        if (a > b)
        {
            if (b > c)
            {
                if (d > e)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << e << "," << c << "," << b << "," << a << "," << d  << "." << endl;
                }
                else if (e > c)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << c << "," << e << "," << b << "," << a << "," << d  << "." << endl;
                }
            }
            else if (c > b)
            {
                if (b > e)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << e << "," << b << "," << c << "," << a << "," << d  << "." << endl;
                }
                else if (e > b)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << b << "," << e << "," << c << "," << a << "," << d  << "." << endl;
                }
            }
        }
        else if (b > a)
        {
            if (a > c)
            {
                if (c > e)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << e << "," << c << "," << a << "," << b << "," << d  << "." << endl;
                }
                else if (e > c)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << c << "," << e << "," << a << "," << b << "," << d  << "." << endl;
                }
            }
            else if (c > a)
            {
                if (a > e)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << e << "," << a << "," << c << "," << b << "," << d  << "." << endl;
                }
                else if (a > e)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << a << "," << e << "," << c << "," << b << "," << d  << "." << endl;
                }
            }
        }
        else if (c > a)
        {
            if (a > b)
            {
                if (b > e)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << e << "," << b << "," << a << "," << c << "," << d  << "." << endl;
                }
                else if (e > b)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << b << "," << e << "," << a << "," << c << "," << d  << "." << endl;
                }
            }
            else if (b > a)
            {
                if (a > e)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << e << "," << a << "," << b << "," << c << "," << d  << "." << endl;
                }
                else if (e > a)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << a << "," << e << "," << b << "," << c << "," << d  << "." << endl;
                }
            }
        }
        else if (e > a)
        {
            if (a > b)
            {
                if (b > c)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << c << "," << b << "," << a << "," << e << "," << d  << "." << endl;
                }
                else if (c > b)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << b << "," << c << "," << a << "," << e << "," << d  << "." << endl;
                }
            }
            else if (b > a)
            {
                if (a > c)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << c << "," << a << "," << b << "," << e << "," << d  << "." << endl;
                }
                else if (c > a)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << a << "," << c << "," << b << "," << e << "," << d  << "." << endl;
                }
            }
        }
    }
    else if (e > a)
    {
        if (a > b)
        {
            if (b > c)
            {
                if (c > d)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << d << "," << c << "," << b << "," << a << "," << e  << "." << endl;
                }
                else if (d > c)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << c << "," << d << "," << b << "," << a << "," << e  << "." << endl;
                }
            }
            else if (c > b)
            {
                if (b > d)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << d << "," << b << "," << c << "," << a << "," << e  << "." << endl;
                }
                else if (d > b)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << b << "," << d << "," << c << "," << a << "," << e  << "." << endl;
                }
            }
        }
        else if (b > a)
        {
            if (a > c)
            {
                if (c > d)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << d << "," << c << "," << a << "," << b << "," << e  << "." << endl;
                }
                else if (d > c)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << c << "," << d << "," << a << "," << b << "," << e  << "." << endl;
                }
            }
            else if (c > a)
            {
                if (a > d)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << d << "," << a << "," << c << "," << b << "," << e  << "." << endl;
                }
                else if (d > a)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << a << "," << d << "," << c << "," << b << "," << e  << "." << endl;
                }
            }
        }
        else if (c > a)
        {
            if (a > b)
            {
                if (b > d)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << d << "," << b << "," << a << "," << c << "," << e  << "." << endl;
                }
                else if (d > b)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << b << "," << d << "," << a << "," << c << "," << e  << "." << endl;
                }
            }
            else if (b > a)
            {
                if (a > d)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << d << "," << a << "," << b << "," << c << "," << e  << "." << endl;
                }
                else if (d > a)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << a << "," << d << "," << b << "," << c << "," << e  << "." << endl;
                }
            }
        }
        else if (d > a)
        {
            if (a > b)
            {
                if (b > c)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << c << "," << b << "," << a << "," << d << "," << e  << "." << endl;
                }
                else if (c > b)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << b << "," << c << "," << a << "," << d << "," << e  << "." << endl;
                }
            }
            else if (b > a)
            {
                if (a > c)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << c << "," << a << "," << b << "," << d << "," << e  << "." << endl;
                }
                else if (c > a)
                {
                cout << "Urutan 5 Bilangan Tersebut dari yang terkecil Adalah : " << a << "," << c << "," << b << "," << d << "," << e  << "." << endl;
                }
            }
        }
    }
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




akhir:
    cout << "Terima Kasih Sudah Menggunakan Program Saya" << endl;
    cout << "Program ini dibuat oleh Muhammad Naufal Abdulmajid - A.11.2022.14727" << endl << endl;
    return 0;
}
