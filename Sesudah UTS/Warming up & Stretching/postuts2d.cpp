//judul
    //stretching & warming up
    //Muhammad Naufal Abdulmajid
    //16 November 2022
    //d2g

//task
    //input A, Be, Ce
    //urutkan dari mana yang terbesar

#include <iostream>
using namespace std;
//kamus
int A, Be, Ce;

//deskripsi
main ()
{
cout << "Inputkan A : "; cin >> A;
cout << "Inputkan Be : "; cin >> Be;
cout << "Inputkan Ce : "; cin >> Ce;

if (A > Be && A > Ce)
{
    if (Be > Ce)
    {
        cout << "Angka Terbesar Adalah : " << A << endl;
        cout << "Urutan dari yang terbesar adalah : " << A << Be << Ce<< endl;
    }
    else if (Ce > Be)
    {
        cout << "Angka Terbesar Adalah : " << A << endl;
        cout << "Urutan dari yang terbesar adalah : " << A << Ce << Be << endl;
    }
}
else if (Be > A && Be > Ce)
{
    if (A > Ce)
    {
        cout << "Angka Terbesar Adalah : " << Be << endl;
        cout << "Urutan dari yang terbesar adalah : " << Be << A << Ce << endl;
    }
    else if (Ce > A)
    {
        cout << "Angka Terbesar Adalah : " << Be << endl;
        cout << "Urutan dari yang terbesar adalah : " << Be << Ce << A << endl;
    }
}
if (Ce > A && Ce > Be)
{
    if (A > Be)
    {
        cout << "Angka Terbesar Adalah : " << Ce << endl;
        cout << "Urutan dari yang terbesar adalah : " << Ce << A << Be << endl;
    }
    else if (Be > A)
    {
        cout << "Angka Terbesar Adalah : " << Ce << endl;
        cout << "Urutan dari yang terbesar adalah : " << Ce << Be << A << endl;
    }
}
}
