//judul
    //program input khs
    //Muhammad Naufal Abdulmajid
    //kost

//task
    //input nama
    //input NIM
    //input mata kuliah
    //input jumlah SKS
    //input persentase tugas/uts/uas
    //input nilai tugas/uts/uas
    //output jumlah nilai
    //output nilai dalam huruf
    //output IPS
    //repeat


#include <iostream>
#include <string.h>
using namespace std;
//kamus
string nama;                                                                        //nama mahasiswa
char   fak;                                                                         //fakultas
int    prodi;                                                                       //prodi
int    tahun, lastdigit;                                                            //tahun masuk ke Udinus, 5 digit terakhir NIM
string matkul1, matkul2, matkul3, matkul4, matkul5, matkul6, matkul7;               //Nama Mata Kuliah
int    sks1, sks2, sks3, sks4, sks5, sks6, sks7;                                    //jumlah SKS
float  pertgs1, pertgs2, pertgs3, pertgs4, pertgs5, pertgs6, pertgs7;               //persentase untuk nilai tugas
float  peruts1, peruts2, peruts3, peruts4, peruts5, peruts6, peruts7;               //persentase untuk nilai UTS
float  peruas1, peruas2, peruas3, peruas4, peruas5, peruas6, peruas7;               //persentase untuk nilai UAS
int    totalper1, totalper2, totalper3, totalper4, totalper5, totalper6, totalper7; //total persentase untuk mengecek sudah 100% atau belum
int    tgs1, tgs2, tgs3, tgs4, tgs5, tgs6, tgs7;                                    //nilai tugas
int    uts1, uts2, uts3, uts4, uts5, uts6, uts7;                                    //nilai UTS
int    uas1, uas2, uas3, uas4, uas5, uas6, uas7;                                    //nilai UAS
float  jumlah1, jumlah2, jumlah3, jumlah4, jumlah5, jumlah6, jumlah7;               //Nilai Akhir
char   huruf1, huruf2, huruf3, huruf4, huruf5, huruf6, huruf7;                      //Nilai Akhir dalam bentuk huruf (A/B/C/D/E)
int    poin1, poin2, poin3, poin4, poin5, poin6, poin7;                             //poin untuk menghitung IP, valuenya tergantung nilai akhir
int    totalsks;                                                                    //jumlah total sks dari ketujuh mata kuliah untuk menghitung IP
int    poinxsks;                                                                    //poin dikalikan dengan jumlah sks
float  ips;                                                                         //indeks prestasi/IP
char   redo;                                                                        //untuk fungsi pengulangan
//deskripsi
main()
{
awal:
    cout << "Inputkan Nama : "; getline(cin, nama);
    fakcheck:
        cout << "Inputkan Digit Pertama NIM (a/b/c/d/e): "; cin >> fak;
        switch (tolower(fak))
        {
        case 'a' :
            {
                goto fasilkom;
                break;
            }
        case 'b' :
            {
                goto feb;
                break;
            }
        case 'c' :
            {
                goto fsisanya;
                break;
            }
        case 'd' :
            {
                goto fsisanya;
                break;
            }
        case 'e' :
            {
                goto fsisanya;
                break;
            }
        default  :
            {
                cout << "Input Salah!" << endl;
                cout << "Silahkan Input Ulang" << endl << endl;
                goto fakcheck;
            }
        }
    fasilkom:
        cout << "Inputkan 2 Digit Setelah Digit Pertama NIM (11/12/14/15/16/17/22) : "; cin >> prodi;
        if (prodi == 11 || prodi == 12 || prodi == 14 || prodi == 15 || prodi == 16 || prodi == 17 || prodi == 22)
        {
            goto tahunmasuk;
        }
        else
        {
            cout << "Input Salah!" << endl;
            cout << "Silahkan Input Ulang" << endl << endl;
            goto fasilkom;
        }
    feb:
        cout << "Inputkan 2 Digit Setelah Digit Pertama NIM (11/12) : "; cin >> prodi;
        if (prodi == 11 || prodi == 12)
        {
            goto tahunmasuk;
        }
        else
        {
            cout << "Input Salah!" << endl;
            cout << "Silahkan Input Ulang" << endl << endl;
            goto feb;
        }
    fsisanya:
        cout << "Inputkan 2 Digit Setelah Digit Pertama NIM (11/12/13) : "; cin >> prodi;
        if (prodi == 11 || prodi == 12 || prodi == 13)
        {
            goto tahunmasuk;
        }
        else
        {
            cout << "Input Salah!" << endl;
            cout << "Silahkan Input Ulang" << endl << endl;
            goto fsisanya;
        }

    tahunmasuk:
    cout << "Inputkan Tahun Masuk : "; cin >> tahun;
    cout << "Inputkan 5 Digit Terakhir NIM : "; cin >> lastdigit;

    proses1:
        cout << endl << endl;
        cout << "================================================================" << endl;
        cout << "Inputkan Nama Mata Kuliah : "; cin >> matkul1;
        cout << "Inputkan Jumlah SKS : "; cin >> sks1;
        per1 :
            cout << "================================================================" << endl;
            cout << "Inputkan Persentase Nilai Tugas : "; cin >> pertgs1;
            cout << "Inputkan Persentase Nilai UTS : "; cin >> peruts1;
            cout << "Inputkan Persentase Nilai UAS : "; cin >> peruas1;
            totalper1 = pertgs1 + peruts1 + peruas1;
            if (totalper1 == 100)
            {
                goto nilai1;
            }
            else
            {
                cout << "================================================================" << endl;
                cout << "Jumlah Persentase Nilai Tidak Sama Dengan 100%!" << endl;
                cout << "Silahkan Input Ulang" << endl << endl;
                goto per1;
            }
        nilai1:
            cektgs1:
                cout << "================================================================" << endl;
                cout << "Inputkan Nilai Tugas (0-100) : "; cin >> tgs1;
                if (tgs1 < 0)
                {
                    cout << "================================================================" << endl;
                    cout << "Nilai Tidak Boleh Kurang Dari 0!" << endl;
                    cout << "Silahkan Input Ulang" << endl << endl;
                    goto cektgs1;
                }
                else if (tgs1 > 100)
                {
                    cout << "================================================================" << endl;
                    cout << "Nilai Tidak Boleh Lebih Dari 100!" << endl;
                    cout << "Silahkan Input Ulang" << endl << endl;
                    goto cektgs1;
                }
                else
                {
                    goto cekuts1;
                }
            cekuts1:
                cout << "================================================================" << endl;
                cout << "Inputkan Nilai UTS (0-100) : "; cin >> uts1;
                if (uts1 < 0)
                {
                    cout << "================================================================" << endl;
                    cout << "Nilai Tidak Boleh Kurang Dari 0!" << endl;
                    cout << "Silahkan Input Ulang" << endl << endl;
                    goto cekuts1;
                }
                else if (uts1 > 100)
                {
                    cout << "================================================================" << endl;
                    cout << "Nilai Tidak Boleh Lebih Dari 100!" << endl;
                    cout << "Silahkan Input Ulang" << endl << endl;
                    goto cekuts1;
                }
                else
                {
                    goto cekuas1;
                }
            cekuas1:
                cout << "================================================================" << endl;
                cout << "Inputkan Nilai UAS (0-100) : "; cin >> uas1;
                if (uas1 < 0)
                {
                    cout << "================================================================" << endl;
                    cout << "Nilai Tidak Boleh Kurang Dari 0!" << endl;
                    cout << "Silahkan Input Ulang" << endl << endl;
                    goto cekuas1;
                }
                else if (uas1 > 100)
                {
                    cout << "================================================================" << endl;
                    cout << "Nilai Tidak Boleh Lebih Dari 100!" << endl;
                    cout << "Silahkan Input Ulang" << endl << endl;
                    goto cekuas1;
                }
                else
                {
                    goto proses2;
                }
    proses2:
        cout << endl << endl;
        cout << "================================================================" << endl;
        cout << "Inputkan Nama Mata Kuliah : "; cin >> matkul2;
        cout << "Inputkan Jumlah SKS : "; cin >> sks2;
        per2 :
            cout << "================================================================" << endl;
            cout << "Inputkan Persentase Nilai Tugas : "; cin >> pertgs2;
            cout << "Inputkan Persentase Nilai UTS : "; cin >> peruts2;
            cout << "Inputkan Persentase Nilai UAS : "; cin >> peruas2;
            totalper2 = pertgs2 + peruts2 + peruas2;
            if (totalper2 == 100)
            {
                goto nilai2;
            }
            else
            {
                cout << "================================================================" << endl;
                cout << "Jumlah Persentase Nilai Tidak Sama Dengan 100%!" << endl;
                cout << "Silahkan Input Ulang" << endl << endl;
                goto per2;
            }
        nilai2:
            cektgs2:
                cout << "================================================================" << endl;
                cout << "Inputkan Nilai Tugas (0-100) : "; cin >> tgs2;
                if (tgs2 < 0)
                {
                    cout << "================================================================" << endl;
                    cout << "Nilai Tidak Boleh Kurang Dari 0!" << endl;
                    cout << "Silahkan Input Ulang" << endl << endl;
                    goto cektgs2;
                }
                else if (tgs2 > 100)
                {
                    cout << "================================================================" << endl;
                    cout << "Nilai Tidak Boleh Lebih Dari 100!" << endl;
                    cout << "Silahkan Input Ulang" << endl << endl;
                    goto cektgs2;
                }
                else
                {
                    goto cekuts2;
                }
            cekuts2:
                cout << "================================================================" << endl;
                cout << "Inputkan Nilai UTS (0-100) : "; cin >> uts2;
                if (uts2 < 0)
                {
                    cout << "================================================================" << endl;
                    cout << "Nilai Tidak Boleh Kurang Dari 0!" << endl;
                    cout << "Silahkan Input Ulang" << endl << endl;
                    goto cekuts2;
                }
                else if (uts2 > 100)
                {
                    cout << "================================================================" << endl;
                    cout << "Nilai Tidak Boleh Lebih Dari 100!" << endl;
                    cout << "Silahkan Input Ulang" << endl << endl;
                    goto cekuts2;
                }
                else
                {
                    goto cekuas2;
                }
            cekuas2:
                cout << "================================================================" << endl;
                cout << "Inputkan Nilai UAS (0-100) : "; cin >> uas2;
                if (uas2 < 0)
                {
                    cout << "================================================================" << endl;
                    cout << "Nilai Tidak Boleh Kurang Dari 0!" << endl;
                    cout << "Silahkan Input Ulang" << endl << endl;
                    goto cekuas2;
                }
                else if (uas2 > 100)
                {
                    cout << "================================================================" << endl;
                    cout << "Nilai Tidak Boleh Lebih Dari 100!" << endl;
                    cout << "Silahkan Input Ulang" << endl << endl;
                    goto cekuas2;
                }
                else
                {
                    goto proses3;
                }
    proses3:
        cout << endl << endl;
        cout << "================================================================" << endl;
        cout << "Inputkan Nama Mata Kuliah : "; cin >> matkul3;
        cout << "Inputkan Jumlah SKS : "; cin >> sks3;
        per3 :
            cout << "================================================================" << endl;
            cout << "Inputkan Persentase Nilai Tugas : "; cin >> pertgs3;
            cout << "Inputkan Persentase Nilai UTS : "; cin >> peruts3;
            cout << "Inputkan Persentase Nilai UAS : "; cin >> peruas3;
            totalper3 = pertgs3 + peruts3 + peruas3;
            if (totalper3 == 100)
            {
                goto nilai3;
            }
            else
            {
                cout << "================================================================" << endl;
                cout << "Jumlah Persentase Nilai Tidak Sama Dengan 100%!" << endl;
                cout << "Silahkan Input Ulang" << endl << endl;
                goto per3;
            }
        nilai3:
            cektgs3:
                cout << "================================================================" << endl;
                cout << "Inputkan Nilai Tugas (0-100) : "; cin >> tgs3;
                if (tgs3 < 0)
                {
                    cout << "================================================================" << endl;
                    cout << "Nilai Tidak Boleh Kurang Dari 0!" << endl;
                    cout << "Silahkan Input Ulang" << endl << endl;
                    goto cektgs3;
                }
                else if (tgs3 > 100)
                {
                    cout << "================================================================" << endl;
                    cout << "Nilai Tidak Boleh Lebih Dari 100!" << endl;
                    cout << "Silahkan Input Ulang" << endl << endl;
                    goto cektgs3;
                }
                else
                {
                    goto cekuts3;
                }
            cekuts3:
                cout << "================================================================" << endl;
                cout << "Inputkan Nilai UTS (0-100) : "; cin >> uts3;
                if (uts3 < 0)
                {
                    cout << "================================================================" << endl;
                    cout << "Nilai Tidak Boleh Kurang Dari 0!" << endl;
                    cout << "Silahkan Input Ulang" << endl << endl;
                    goto cekuts3;
                }
                else if (uts3 > 100)
                {
                    cout << "================================================================" << endl;
                    cout << "Nilai Tidak Boleh Lebih Dari 100!" << endl;
                    cout << "Silahkan Input Ulang" << endl << endl;
                    goto cekuts3;
                }
                else
                {
                    goto cekuas3;
                }
            cekuas3:
                cout << "================================================================" << endl;
                cout << "Inputkan Nilai UAS (0-100) : "; cin >> uas3;
                if (uas3 < 0)
                {
                    cout << "================================================================" << endl;
                    cout << "Nilai Tidak Boleh Kurang Dari 0!" << endl;
                    cout << "Silahkan Input Ulang" << endl << endl;
                    goto cekuas3;
                }
                else if (uas3 > 100)
                {
                    cout << "================================================================" << endl;
                    cout << "Nilai Tidak Boleh Lebih Dari 100!" << endl;
                    cout << "Silahkan Input Ulang" << endl << endl;
                    goto cekuas3;
                }
                else
                {
                    goto proses4;
                }
    proses4:
        cout << endl << endl;
        cout << "================================================================" << endl;
        cout << "Inputkan Nama Mata Kuliah : "; cin >> matkul4;
        cout << "Inputkan Jumlah SKS : "; cin >> sks4;
        per4 :
            cout << "================================================================" << endl;
            cout << "Inputkan Persentase Nilai Tugas : "; cin >> pertgs4;
            cout << "Inputkan Persentase Nilai UTS : "; cin >> peruts4;
            cout << "Inputkan Persentase Nilai UAS : "; cin >> peruas4;
            totalper4 = pertgs4 + peruts4 + peruas4;
            if (totalper4 == 100)
            {
                goto nilai4;
            }
            else
            {
                cout << "================================================================" << endl;
                cout << "Jumlah Persentase Nilai Tidak Sama Dengan 100%!" << endl;
                cout << "Silahkan Input Ulang" << endl << endl;
                goto per4;
            }
        nilai4:
            cektgs4:
                cout << "================================================================" << endl;
                cout << "Inputkan Nilai Tugas (0-100) : "; cin >> tgs4;
                if (tgs4 < 0)
                {
                    cout << "================================================================" << endl;
                    cout << "Nilai Tidak Boleh Kurang Dari 0!" << endl;
                    cout << "Silahkan Input Ulang" << endl << endl;
                    goto cektgs4;
                }
                else if (tgs4 > 100)
                {
                    cout << "================================================================" << endl;
                    cout << "Nilai Tidak Boleh Lebih Dari 100!" << endl;
                    cout << "Silahkan Input Ulang" << endl << endl;
                    goto cektgs4;
                }
                else
                {
                    goto cekuts4;
                }
            cekuts4:
                cout << "================================================================" << endl;
                cout << "Inputkan Nilai UTS (0-100) : "; cin >> uts4;
                if (uts4 < 0)
                {
                    cout << "================================================================" << endl;
                    cout << "Nilai Tidak Boleh Kurang Dari 0!" << endl;
                    cout << "Silahkan Input Ulang" << endl << endl;
                    goto cekuts4;
                }
                else if (uts4 > 100)
                {
                    cout << "================================================================" << endl;
                    cout << "Nilai Tidak Boleh Lebih Dari 100!" << endl;
                    cout << "Silahkan Input Ulang" << endl << endl;
                    goto cekuts4;
                }
                else
                {
                    goto cekuas4;
                }
            cekuas4:
                cout << "================================================================" << endl;
                cout << "Inputkan Nilai UAS (0-100) : "; cin >> uas4;
                if (uas4 < 0)
                {
                    cout << "================================================================" << endl;
                    cout << "Nilai Tidak Boleh Kurang Dari 0!" << endl;
                    cout << "Silahkan Input Ulang" << endl << endl;
                    goto cekuas4;
                }
                else if (uas4 > 100)
                {
                    cout << "================================================================" << endl;
                    cout << "Nilai Tidak Boleh Lebih Dari 100!" << endl;
                    cout << "Silahkan Input Ulang" << endl << endl;
                    goto cekuas4;
                }
                else
                {
                    goto proses5;
                }
    proses5:
        cout << endl << endl;
        cout << "================================================================" << endl;
        cout << "Inputkan Nama Mata Kuliah : "; cin >> matkul5;
        cout << "Inputkan Jumlah SKS : "; cin >> sks5;
        per5 :
            cout << "================================================================" << endl;
            cout << "Inputkan Persentase Nilai Tugas : "; cin >> pertgs5;
            cout << "Inputkan Persentase Nilai UTS : "; cin >> peruts5;
            cout << "Inputkan Persentase Nilai UAS : "; cin >> peruas5;
            totalper5 = pertgs5 + peruts5 + peruas5;
            if (totalper5 == 100)
            {
                goto nilai5;
            }
            else
            {
                cout << "================================================================" << endl;
                cout << "Jumlah Persentase Nilai Tidak Sama Dengan 100%!" << endl;
                cout << "Silahkan Input Ulang" << endl << endl;
                goto per5;
            }
        nilai5:
            cektgs5:
                cout << "================================================================" << endl;
                cout << "Inputkan Nilai Tugas (0-100) : "; cin >> tgs5;
                if (tgs5 < 0)
                {
                    cout << "================================================================" << endl;
                    cout << "Nilai Tidak Boleh Kurang Dari 0!" << endl;
                    cout << "Silahkan Input Ulang" << endl << endl;
                    goto cektgs5;
                }
                else if (tgs5 > 100)
                {
                    cout << "================================================================" << endl;
                    cout << "Nilai Tidak Boleh Lebih Dari 100!" << endl;
                    cout << "Silahkan Input Ulang" << endl << endl;
                    goto cektgs5;
                }
                else
                {
                    goto cekuts5;
                }
            cekuts5:
                cout << "================================================================" << endl;
                cout << "Inputkan Nilai UTS (0-100) : "; cin >> uts5;
                if (uts5 < 0)
                {
                    cout << "================================================================" << endl;
                    cout << "Nilai Tidak Boleh Kurang Dari 0!" << endl;
                    cout << "Silahkan Input Ulang" << endl << endl;
                    goto cekuts5;
                }
                else if (uts5 > 100)
                {
                    cout << "================================================================" << endl;
                    cout << "Nilai Tidak Boleh Lebih Dari 100!" << endl;
                    cout << "Silahkan Input Ulang" << endl << endl;
                    goto cekuts5;
                }
                else
                {
                    goto cekuas5;
                }
            cekuas5:
                cout << "================================================================" << endl;
                cout << "Inputkan Nilai UAS (0-100) : "; cin >> uas5;
                if (uas5 < 0)
                {
                    cout << "================================================================" << endl;
                    cout << "Nilai Tidak Boleh Kurang Dari 0!" << endl;
                    cout << "Silahkan Input Ulang" << endl << endl;
                    goto cekuas5;
                }
                else if (uas5 > 100)
                {
                    cout << "================================================================" << endl;
                    cout << "Nilai Tidak Boleh Lebih Dari 100!" << endl;
                    cout << "Silahkan Input Ulang" << endl << endl;
                    goto cekuas5;
                }
                else
                {
                    goto proses6;
                }
    proses6:
        cout << endl << endl;
        cout << "================================================================" << endl;
        cout << "Inputkan Nama Mata Kuliah : "; cin >> matkul6;
        cout << "Inputkan Jumlah SKS : "; cin >> sks6;
        per6 :
            cout << "================================================================" << endl;
            cout << "Inputkan Persentase Nilai Tugas : "; cin >> pertgs6;
            cout << "Inputkan Persentase Nilai UTS : "; cin >> peruts6;
            cout << "Inputkan Persentase Nilai UAS : "; cin >> peruas6;
            totalper6 = pertgs6 + peruts6 + peruas6;
            if (totalper6 == 100)
            {
                goto nilai6;
            }
            else
            {
                cout << "================================================================" << endl;
                cout << "Jumlah Persentase Nilai Tidak Sama Dengan 100%!" << endl;
                cout << "Silahkan Input Ulang" << endl << endl;
                goto per6;
            }
        nilai6:
            cektgs6:
                cout << "================================================================" << endl;
                cout << "Inputkan Nilai Tugas (0-100) : "; cin >> tgs6;
                if (tgs6 < 0)
                {
                    cout << "================================================================" << endl;
                    cout << "Nilai Tidak Boleh Kurang Dari 0!" << endl;
                    cout << "Silahkan Input Ulang" << endl << endl;
                    goto cektgs6;
                }
                else if (tgs6 > 100)
                {
                    cout << "================================================================" << endl;
                    cout << "Nilai Tidak Boleh Lebih Dari 100!" << endl;
                    cout << "Silahkan Input Ulang" << endl << endl;
                    goto cektgs6;
                }
                else
                {
                    goto cekuts6;
                }
            cekuts6:
                cout << "================================================================" << endl;
                cout << "Inputkan Nilai UTS (0-100) : "; cin >> uts6;
                if (uts6 < 0)
                {
                    cout << "================================================================" << endl;
                    cout << "Nilai Tidak Boleh Kurang Dari 0!" << endl;
                    cout << "Silahkan Input Ulang" << endl << endl;
                    goto cekuts6;
                }
                else if (uts6 > 100)
                {
                    cout << "================================================================" << endl;
                    cout << "Nilai Tidak Boleh Lebih Dari 100!" << endl;
                    cout << "Silahkan Input Ulang" << endl << endl;
                    goto cekuts6;
                }
                else
                {
                    goto cekuas6;
                }
            cekuas6:
                cout << "================================================================" << endl;
                cout << "Inputkan Nilai UAS (0-100) : "; cin >> uas6;
                if (uas6 < 0)
                {
                    cout << "================================================================" << endl;
                    cout << "Nilai Tidak Boleh Kurang Dari 0!" << endl;
                    cout << "Silahkan Input Ulang" << endl << endl;
                    goto cekuas6;
                }
                else if (uas6 > 100)
                {
                    cout << "================================================================" << endl;
                    cout << "Nilai Tidak Boleh Lebih Dari 100!" << endl;
                    cout << "Silahkan Input Ulang" << endl << endl;
                    goto cekuas6;
                }
                else
                {
                    goto proses7;
                }
    proses7:
        cout << endl << endl;
        cout << "================================================================" << endl;
        cout << "Inputkan Nama Mata Kuliah : "; cin >> matkul7;
        cout << "Inputkan Jumlah SKS : "; cin >> sks7;
        per7 :
            cout << "================================================================" << endl;
            cout << "Inputkan Persentase Nilai Tugas : "; cin >> pertgs7;
            cout << "Inputkan Persentase Nilai UTS : "; cin >> peruts7;
            cout << "Inputkan Persentase Nilai UAS : "; cin >> peruas7;
            totalper7 = pertgs7 + peruts7 + peruas7;
            if (totalper7 == 100)
            {
                goto nilai7;
            }
            else
            {
                cout << "================================================================" << endl;
                cout << "Jumlah Persentase Nilai Tidak Sama Dengan 100%!" << endl;
                cout << "Silahkan Input Ulang" << endl << endl;
                goto per7;
            }
        nilai7:
            cektgs7:
                cout << "================================================================" << endl;
                cout << "Inputkan Nilai Tugas (0-100) : "; cin >> tgs7;
                if (tgs7 < 0)
                {
                    cout << "================================================================" << endl;
                    cout << "Nilai Tidak Boleh Kurang Dari 0!" << endl;
                    cout << "Silahkan Input Ulang" << endl << endl;
                    goto cektgs7;
                }
                else if (tgs7 > 100)
                {
                    cout << "================================================================" << endl;
                    cout << "Nilai Tidak Boleh Lebih Dari 100!" << endl;
                    cout << "Silahkan Input Ulang" << endl << endl;
                    goto cektgs7;
                }
                else
                {
                    goto cekuts7;
                }
            cekuts7:
                cout << "================================================================" << endl;
                cout << "Inputkan Nilai UTS (0-100) : "; cin >> uts7;
                if (uts7 < 0)
                {
                    cout << "================================================================" << endl;
                    cout << "Nilai Tidak Boleh Kurang Dari 0!" << endl;
                    cout << "Silahkan Input Ulang" << endl << endl;
                    goto cekuts7;
                }
                else if (uts7 > 100)
                {
                    cout << "================================================================" << endl;
                    cout << "Nilai Tidak Boleh Lebih Dari 100!" << endl;
                    cout << "Silahkan Input Ulang" << endl << endl;
                    goto cekuts7;
                }
                else
                {
                    goto cekuas7;
                }
            cekuas7:
                cout << "================================================================" << endl;
                cout << "Inputkan Nilai UAS (0-100) : "; cin >> uas7;
                if (uas7 < 0)
                {
                    cout << "================================================================" << endl;
                    cout << "Nilai Tidak Boleh Kurang Dari 0!" << endl;
                    cout << "Silahkan Input Ulang" << endl << endl;
                    goto cekuas7;
                }
                else if (uas7 > 100)
                {
                    cout << "================================================================" << endl;
                    cout << "Nilai Tidak Boleh Lebih Dari 100!" << endl;
                    cout << "Silahkan Input Ulang" << endl << endl;
                    goto cekuas7;
                }
                else
                {
                    goto preview;
                }

        preview:
            cout << endl << endl << endl;
            cout << "================Sistem Penilaian================" << endl;
            cout << "==========Universitas Dian Nuswantoro===========" << endl;
            cout << "Nama : " << nama << endl;
            cout << "NIM : " << fak << prodi << "." << tahun << "." << lastdigit << endl;
            switch (tolower(fak))
            {
            case 'a' :
                {
                   cout << "Fakultas : Fakultas Ilmu Komputer" << endl;
                   if (prodi == 11)
                   {
                        cout << "Prodi : Teknik Informatka S1";
                   }
                   else if (prodi == 12)
                   {
                        cout << "Prodi : Sistem Informasi S1";
                   }
                   else if (prodi == 14)
                   {
                        cout << "Prodi : Desain Komunikasi Visual S1";
                   }
                   else if (prodi == 15)
                   {
                        cout << "Prodi : Ilmu Komunikasi S1";
                   }
                   else if (prodi == 16)
                   {
                        cout << "Prodi : Film dan Televisi S.Tr";
                   }
                   else if (prodi == 17)
                   {
                        cout << "Prodi : Animasi S.Tr";
                   }
                   else
                   {
                        cout << "Prodi : Teknik Informatika D3";
                   }
                   break;
                }
            case 'b' :
                {
                   cout << "Fakultas : Fakultas Ekonomi dan Bisnis" << endl;
                   if (prodi == 11)
                   {
                        cout << "Prodi : Manajemen S1";
                   }
                   else
                   {
                        cout << "Prodi : Akuntansi S1";
                   }
                   break;
                }
            case 'c' :
                {
                   cout << "Fakultas : Fakultas Ilmu Budaya" << endl;
                   if (prodi == 11)
                   {
                        cout << "Prodi : Bahasa Inggris S1";
                   }
                   else if (prodi == 12)
                   {
                        cout << "Prodi : Bahasa Jepang S1";
                   }
                   else
                   {
                        cout << "Prodi : Pengelolaan Perhotelan S.Tr";
                   }
                   break;
                }
            case 'd' :
                {
                   cout << "Fakultas : Fakultas Kesehatan" << endl;
                   if (prodi == 11)
                   {
                        cout << "Prodi : Kesehatan Masyarakat S1";
                   }
                   else if (prodi == 12)
                   {
                        cout << "Prodi : Kesehatan Lingkungan S1";
                   }
                   else
                   {
                        cout << "Prodi : Rekam Medis dan Informasi Kesehatan D3";
                   }
                   break;
                }
            default :
                {
                   cout << "Fakultas : Fakultas Teknik" << endl;
                   if (prodi == 11)
                   {
                        cout << "Prodi : Teknik Elektro S1";
                   }
                   else if (prodi == 12)
                   {
                        cout << "Prodi : Teknik Industri S1";
                   }
                   else
                   {
                        cout << "Prodi : Teknik Biomedis S1";
                   }
                   break;
                }
             }
             cout << endl;
             cout << "================================================" << endl;
            jumlah1 = ((pertgs1/100) * tgs2) + ((peruts2/100) * uts2) + ((peruas2/100) * uas2);
            jumlah3 = ((pertgs3/100) * tgs3) + ((peruts3/100) * uts3) + ((peruas1/100) * uas3);
            jumlah4 = ((pertgs4/100) * tgs4) + ((peruts4/100) * uts4) + ((peruas3/100) * uas4);
            jumlah5 = ((pertgs5/100) * tgs5) + ((peruts5/100) * uts5) + ((peruas1/100) * uas5);
            jumlah6 = ((pertgs6/100) * tgs6) + ((peruts6/100) * uts6) + ((peruas1/100) * uas6);
            jumlah7 = ((pertgs7/100) * tgs7) + ((peruts7/100) * uts7) + ((peruas1/100) * uas7);

            if (jumlah1 >= 85 && jumlah1 <= 100)
            {
                huruf1 = 'A';
                poin1  = 4;
            }
            else if (jumlah1 >= 70 && jumlah1 < 85)
            {
                huruf1 = 'B';
                poin1  = 3;
            }
            else if (jumlah1 >= 60 && jumlah1 < 70)
            {
                huruf1 = 'C';
                poin1  = 2;
            }
            else if (jumlah1 >= 50 && jumlah1 < 60)
            {
                huruf1 = 'D';
                poin1  = 1;
            }
            else if (jumlah1 < 50)
            {
                huruf1 = 'E';
                poin1  = 0;
            }

            if (jumlah2 >= 85 && jumlah2 <= 100)
            {
                huruf2 = 'A';
                poin2  = 4;
            }
            else if (jumlah2 >= 70 && jumlah2 < 85)
            {
                huruf2 = 'B';
                poin2  = 3;
            }
            else if (jumlah2 >= 60 && jumlah2 < 70)
            {
                huruf2 = 'C';
                poin2  = 2;
            }
            else if (jumlah2 >= 50 && jumlah2 < 60)
            {
                huruf2 = 'D';
                poin2  = 1;
            }
            else if (jumlah2 < 50)
            {
                huruf2 = 'E';
                poin2  = 0;
            }

            if (jumlah3 >= 85 && jumlah3 <= 100)
            {
                huruf3 = 'A';
                poin3  = 4;
            }
            else if (jumlah3 >= 70 && jumlah3 < 85)
            {
                huruf3 = 'B';
                poin3  = 3;
            }
            else if (jumlah3 >= 60 && jumlah3 < 70)
            {
                huruf3 = 'C';
                poin3  = 2;
            }
            else if (jumlah3 >= 50 && jumlah3 < 60)
            {
                huruf3 = 'D';
                poin3  = 1;
            }
            else if (jumlah3 < 50)
            {
                huruf3 = 'E';
                poin3  = 0;
            }

            if (jumlah4 >= 85 && jumlah4 <= 100)
            {
                huruf4 = 'A';
                poin4  = 4;
            }
            else if (jumlah4 >= 70 && jumlah4 < 85)
            {
                huruf4 = 'B';
                poin4  = 3;
            }
            else if (jumlah4 >= 60 && jumlah4 < 70)
            {
                huruf4 = 'C';
                poin4  = 2;
            }
            else if (jumlah4 >= 50 && jumlah4 < 60)
            {
                huruf4 = 'D';
                poin4  = 1;
            }
            else if (jumlah4 < 50)
            {
                huruf4 = 'E';
                poin4  = 0;
            }

            if (jumlah5 >= 85 && jumlah5 <= 100)
            {
                huruf5 = 'A';
                poin5  = 4;
            }
            else if (jumlah5 >= 70 && jumlah5 < 85)
            {
                huruf5 = 'B';
                poin5  = 3;
            }
            else if (jumlah5 >= 60 && jumlah5 < 70)
            {
                huruf5 = 'C';
                poin5  = 2;
            }
            else if (jumlah5 >= 50 && jumlah5 < 60)
            {
                huruf5 = 'D';
                poin5  = 1;
            }
            else if (jumlah5 < 50)
            {
                huruf5 = 'E';
                poin5  = 0;
            }

            if (jumlah6 >= 85 && jumlah6 <= 100)
            {
                huruf6 = 'A';
                poin6  = 4;
            }
            else if (jumlah6 >= 70 && jumlah6 < 85)
            {
                huruf6 = 'B';
                poin6  = 3;
            }
            else if (jumlah6 >= 60 && jumlah6 < 70)
            {
                huruf6 = 'C';
                poin6  = 2;
            }
            else if (jumlah6 >= 50 && jumlah6 < 60)
            {
                huruf6 = 'D';
                poin6  = 1;
            }
            else if (jumlah6 < 50)
            {
                huruf6 = 'E';
                poin6  = 0;
            }

            if (jumlah7 >= 85 && jumlah7 <= 100)
            {
                huruf7 = 'A';
                poin7  = 4;
            }
            else if (jumlah7 >= 70 && jumlah7 < 85)
            {
                huruf7 = 'B';
                poin7  = 3;
            }
            else if (jumlah7 >= 60 && jumlah7 < 70)
            {
                huruf7 = 'C';
                poin7  = 2;
            }
            else if (jumlah7 >= 50 && jumlah7 < 60)
            {
                huruf7 = 'D';
                poin7  = 1;
            }
            else if (jumlah7 < 50)
            {
                huruf7 = 'E';
                poin7  = 0;
            }
            cout << matkul1 << " : " << "Nilai Tugas=" << tgs1 << " Persentase Tugas=" << pertgs1 << "% "<< "Nilai UTS=" << uts1 << " Persentase UTS=" << peruts1 << "% "<< "Nilai UAS=" << uas1 << " Persentase UAS =" << peruas1 << "% " << endl;
            cout << " Nilai Akhir : " << jumlah1 << " " << huruf1 << endl;
            cout << "Jumlah SKS : " << sks1 << endl;
            cout << matkul2 << " : " << "Nilai Tugas=" << tgs2 << " Persentase Tugas=" << pertgs2 << "% "<< "Nilai UTS=" << uts2 << " Persentase UTS=" << peruts2 << "% "<< "Nilai UAS=" << uas2 << " Persentase UAS =" << peruas2 << "% " << endl;
            cout << " Nilai Akhir : " << jumlah2 << " " << huruf2 << endl;
            cout << "Jumlah SKS : " << sks2 << endl;
            cout << matkul3 << " : " << "Nilai Tugas=" << tgs3 << " Persentase Tugas=" << pertgs3 << "% "<< "Nilai UTS=" << uts3 << " Persentase UTS=" << peruts3 << "% "<< "Nilai UAS=" << uas3 << " Persentase UAS =" << peruas3 << "% " << endl;
            cout << " Nilai Akhir : " << jumlah3 << " " << huruf3 << endl;
            cout << "Jumlah SKS : " << sks3 << endl;
            cout << matkul4 << " : " << "Nilai Tugas=" << tgs4 << " Persentase Tugas=" << pertgs4 << "% "<< "Nilai UTS=" << uts4 << " Persentase UTS=" << peruts4 << "% "<< "Nilai UAS=" << uas4 << " Persentase UAS =" << peruas4 << "% " << endl;
            cout << " Nilai Akhir : " << jumlah4 << " " << huruf4 << endl;
            cout << "Jumlah SKS : " << sks4 << endl;
            cout << matkul5 << " : " << "Nilai Tugas=" << tgs5 << " Persentase Tugas=" << pertgs5 << "% "<< "Nilai UTS=" << uts5 << " Persentase UTS=" << peruts5 << "% "<< "Nilai UAS=" << uas5 << " Persentase UAS =" << peruas5 << "% " << endl;
            cout << " Nilai Akhir : " << jumlah5 << " " << huruf5 << endl;
            cout << "Jumlah SKS : " << sks5 << endl;
            cout << matkul6 << " : " << "Nilai Tugas=" << tgs6 << " Persentase Tugas=" << pertgs6 << "% "<< "Nilai UTS=" << uts6 << " Persentase UTS=" << peruts6 << "% "<< "Nilai UAS=" << uas6 << " Persentase UAS =" << peruas6 << "% " << endl;
            cout << " Nilai Akhir : " << jumlah6 << " " << huruf6 << endl;
            cout << "Jumlah SKS : " << sks6 << endl;
            cout << matkul7 << " : " << "Nilai Tugas=" << tgs7 << " Persentase Tugas=" << pertgs7 << "% "<< "Nilai UTS=" << uts7 << " Persentase UTS=" << peruts7 << "% "<< "Nilai UAS=" << uas7 << " Persentase UAS =" << peruas7 << "% " << endl;
            cout << " Nilai Akhir : " << jumlah7 << " " << huruf7 << endl;
            cout << "Jumlah SKS : " << sks7 << endl;
            cout << "================================================" << endl;
            poinxsks = (poin1 * sks1) + (poin2 * sks2) + (poin3 * sks3) + (poin4 * sks4) + (poin5 * sks5) + (poin6 * sks6) + (poin7 * sks7);
            totalsks = sks1 + sks2 + sks3 + sks4 + sks5 + sks6 + sks7;
            ips      = poinxsks / totalsks;
            cout << "Nilai Indeks Prestasinya Adalah : " << ips << endl;
            cout << "================================================" << endl;



ulang:
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
