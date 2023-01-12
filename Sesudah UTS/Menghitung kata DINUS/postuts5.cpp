//judul
    //menghitung kata DINUS
    //Muhammad Naufal Abdulmajid
    //7des 2022
    //d2g

//task
    //kalimat "Aku cah DINUS. DINUS adalah Dian Nuswantoro, DINUS ada di Semarang"
    //hitung kata dinus

#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
//kamus
int konsonan, vokal, i, kata, dinus;
char kalimat[67];
//deskripsi
main ()
{
  //coba gunakan input
        cout << "Kalimat    : ";
        cin.getline(kalimat, 67);
        //cin >> kalimat;
        strupr(kalimat);
        cout << kalimat;

        /* Bagian dari pencarian */
        i = 0;
        kata = 1;
        vokal = 0;
        konsonan = 0;
        dinus = 0;
        while(i<68)
        {
            if(kalimat[i]=='A' || kalimat[i]=='I' || kalimat[i]=='U' || kalimat[i]=='E' || kalimat[i]=='O')
            {
                vokal = vokal + 1;
            }
            else if(kalimat[i]==' ')
            {

                kata = kata + 1;
            }
            else if(kalimat[i]=='Q' || kalimat[i]=='W' || kalimat[i]=='R' || kalimat[i]=='T' || kalimat[i]=='Y' || kalimat[i]=='P' || kalimat[i]=='S' || kalimat[i]=='D' || kalimat[i]=='F' || kalimat[i]=='G' || kalimat[i]=='H' || kalimat[i]=='J' || kalimat[i]=='K' || kalimat[i]=='L' || kalimat[i]=='Z' || kalimat[i]=='X' || kalimat[i]=='C' || kalimat[i]=='V' || kalimat[i]=='B' || kalimat[i]=='N' || kalimat[i]=='M')
            {
                konsonan = konsonan + 1;
            }
            if (kalimat[i]=='D' && kalimat[i + 1]=='I' && kalimat[i + 2]=='N' && kalimat[i + 3]=='U' && kalimat[i + 4]=='S')
            {
                dinus = dinus + 1;
            }

            i = i + 1;
        }

        /* Output Screen */
        cout << "\n\n\tJumlah : ";
        cout << "\nVokal : " << vokal;
        cout << "\nKonsonan : " << konsonan;
        cout << "\nKata : " << kata;
        cout << "\nKata Dinus : " << dinus;

        getch;
}
