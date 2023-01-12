//judul
    //program deteksi penyakit
    //Muhammad Naufal Abdulmajid
    //kost

//task
    //deteksi penyakit dari inputan 3 gejala
    //min 5 macam penyakit
    //repeat

#include <iostream>
using namespace std;
//kamus
char redo;
char batuk, pilek, pusing, mencret, panas, tenggorokan;

//deskripsi
main ()
{
awal:
    cout << "======================================================" << endl;
    cout << "==========Program sederhana deteksi penyakit==========" << endl;
    gejala1:
        cout << "======================================================" << endl;
        cout << "Apakah Anda Batuk?" << endl;
        cout << "Inputkan y jika iya" << endl;
        cout << "Inputkan n jika tidak" << endl;
        cout << "(y/n) : "; cin >> batuk;
        cout << endl;
        switch (tolower(batuk))
        {
        case 'y'  :
            {
                goto gejala2;
                break;
            }
        case 'n' :
            {
                goto gejala2;
                break;
            }
        default :
            {
                cout << "Input Salah!! Mohon Input Ulang" << endl;
                goto gejala1;
            }
        }
    gejala2:
        cout << "======================================================" << endl;
        cout << "Apakah Anda Pilek?" << endl;
        cout << "Inputkan y jika iya" << endl;
        cout << "Inputkan n jika tidak" << endl;
        cout << "(y/n) : "; cin >> pilek;
        cout << endl;
        switch (tolower(pilek))
        {
        case 'y'  :
            {
                goto gejala3;
                break;
            }
        case 'n' :
            {
                goto gejala3;
                break;
            }
        default :
            {
                cout << "Input Salah!! Mohon Input Ulang" << endl;
                goto gejala2;
            }
        }
    gejala3 :
        cout << "======================================================" << endl;
        cout << "Apakah Anda Pusing?" << endl;
        cout << "Inputkan y jika iya" << endl;
        cout << "Inputkan n jika tidak" << endl;
        cout << "(y/n) : "; cin >> pusing;
        cout << endl;
        switch (tolower(pusing))
        {
        case 'y'  :
            {
                goto gejala4;
                break;
            }
        case 'n' :
            {
                goto gejala4;
                break;
            }
        default :
            {
                cout << "Input Salah!! Mohon Input Ulang" << endl;
                goto gejala3;
            }
        }
    gejala4 :
        cout << "======================================================" << endl;
        cout << "Apakah Anda mencret?" << endl;
        cout << "Inputkan y jika iya" << endl;
        cout << "Inputkan n jika tidak" << endl;
        cout << "(y/n) : "; cin >> mencret;
        cout << endl;
        switch (tolower(mencret))
        {
        case 'y'  :
            {
                goto gejala5;
                break;
            }
        case 'n' :
            {
                goto gejala5;
                break;
            }
        default :
            {
                cout << "Input Salah!! Mohon Input Ulang" << endl;
                goto gejala4;
            }
        }
    gejala5 :
        cout << "======================================================" << endl;
        cout << "Apakah tubuh anda terasa panas?" << endl;
        cout << "Inputkan y jika iya" << endl;
        cout << "Inputkan n jika tidak" << endl;
        cout << "(y/n) : "; cin >> panas;
        cout << endl;
        switch (tolower(panas))
        {
        case 'y'  :
            {
                goto gejala6;
                break;
            }
        case 'n' :
            {
                goto gejala6;
                break;
            }
        default :
            {
                cout << "Input Salah!! Mohon Input Ulang" << endl;
                goto gejala5;
            }
        }
    gejala6 :
        cout << "======================================================" << endl;
        cout << "Apakah tenggorokan anda terasa bermasalah?" << endl;
        cout << "Inputkan y jika iya" << endl;
        cout << "Inputkan n jika tidak" << endl;
        cout << "(y/n) : "; cin >> panas;
        cout << endl;
        switch (tolower(panas))
        {
        case 'y'  :
            {
                goto verdict;
                break;
            }
        case 'n' :
            {
                goto verdict;
                break;
            }
        default :
            {
                cout << "Input Salah!! Mohon Input Ulang" << endl;
                goto gejala5;
            }
        }

        verdict :
            cout << "========================================================" << endl;
            cout << "penyakit yang terdeteksi :" << endl;
            if (mencret == 'y')
            {
                cout << "- Diare" << endl;
            }
            if (panas == 'y')
            {
                cout << "- Demam" << endl;
            }
            if (batuk == 'y' && pilek == 'y')
            {
                cout << "- Flu" << endl;
            }
            if (batuk == 'y' && tenggorokan == 'y')
            {
                cout << "- Radang Tenggorokan" << endl;
            }
            if (batuk == 'y' && pilek == 'n' && pusing == 'n' && panas == 'n')
            {
                cout << "- Alergi" << endl;
            }
            if (batuk == 'n' && pilek == 'y' && pusing == 'n' && panas == 'n')
            {
                cout << "- Alergi" << endl;
            }
            if (batuk == 'y' && pilek == 'y' && pusing == 'n' && panas == 'n')
            {
                cout << "- Alergi" << endl;
            }
            if (batuk == 'n' && pilek == 'n' && pusing == 'y' && panas == 'n')
            {
                cout << "- Banyak Masalah Hidup" << endl;
            }
            if (batuk == 'n' && pilek == 'n' && panas == 'n' && tenggorokan == 'y')
            {
                cout << "- Kurang Minum Air" << endl;
            }
            if (batuk == 'n' && pilek == 'n' && pusing == 'n' && mencret == 'n' && panas == 'n' && tenggorokan == 'n')
            {
                cout << "Tidak Terdeteksi Penyakit Apapun" << endl;
            }





ulang:
    cout << endl;
    cout << "========================================================" << endl;
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
            goto ulang;
        }
    }
    cout << "========================================================" << endl << endl;



akhir:
    cout << "Terima Kasih Sudah Menggunakan Program Saya" << endl;
    cout << "Program ini dibuat oleh Muhammad Naufal Abdulmajid - A11.2022.14727" << endl;
    cout << "========================================================";
    return 0;

}
