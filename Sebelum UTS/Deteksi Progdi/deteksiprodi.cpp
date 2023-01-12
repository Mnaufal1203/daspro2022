//Judul : Deteksi Gejala Penyakit
//Muhammad Alif al Husain
#include <iostream>
using namespace std;
//Kamus
string penyakit;
char input,yt;
string awal,akhir;
//Deskripsi
main()
{
    awal :
    cout << "Selamat datang di Dokter Virtual\n";
    cout << "Kode penyakit yang ada di sistem\n";
    cout << "1. FLU\n";
    cout << "2. Kencing manis\n";
    cout << "3. Asam Lambung\n";
    cout << "4. Migrain\n";
    cout << "5. Sakit gigi\n";
    cout << " Pilih Kode Penyakit Tujuan : ";
    cin >> penyakit;

    if(penyakit=="FLU")
    {
        cout << "Input opsi (A) untuk Gejala dan Penangannya\n";
        cout << "Input opsi (B) untuk obat\n";
        cout << "Masukkan opsi pilihan anda :";
        cin >> input;

        switch(toupper(input))
        {
            case 'A' :
                {
                cout << "-Gejala yang muncul ketika anda terkena FLU-\n";
                cout << "- Anda Bisa tertular flu jika tidak sengaja menghirup percikan air liur orang yang terkena FLU\n ";
                cout << " Gejala UMUM\n";
                cout << "- Demam\n";
                cout << "- Hidung Tersumbat\n";
                cout << "- Pilek\n";
                cout << "- Sakit Kepala\n";
                break;
                }

            case 'B' :
                {
                cout << " Pengobatan yang dianjurkan\n";
                cout << "- Menjalani Vaksinasi Influenza\n";
                cout << "- Rajin Cuci Tangan setelah bepergian\n";
                cout << "- Mengkonsumsi obat sesuai anjuran dokter\n";
                cout << "- Pola makan sehat sering makan sayuran hijau\n";
                break;
                }
            default :
                {
                    break;
                }
        }
        cout << "Apakah anda ingin mengulangi Program ?\n";
        cout << "Ketik Y/T :";
        cin >> yt;
        if(yt=='Y' || yt=='y')
        {
            goto awal;
        }
        else if(yt=='T' || yt=='t')
        {
            goto akhir;
        }
        else
        {

        }
        akhir: cout << "Terimakasih sudah berkunjung";
        return 0;
    }
    else if(penyakit=="Kencing manis")
    {
        cout << "Input opsi (A) untuk Gejala dan Penangannya\n";
        cout << "Input opsi (B) untuk obat\n";
        cout << "Masukkan opsi pilihan anda :";
        cin >> input;
        switch(toupper(input))
        {
        case 'A' :
        {
            cout << "-Gejala Umum-\n";
            cout << "- Sering buang air kecil\n";
            cout << "- Mudah lelah\n";
            cout << "- Sering merasa haus\n";
            cout << "- Kesemutan,mati rasa di area tangan dan kaki\n";
            cout << "- gangguan penglihatan\n";
            break;
        }
        case 'B' :
        {
            cout << " Pengobatan yang dianjurkan :\n";
            cout << "- Menerapkan pola hidup sehat\n";
            cout << "- Rutin melakukan aktivitas fisik\n";
            cout << "- Operasi\n";
            cout << "- Pengobatan alternatif\n";
            break;
        }
        default :
        {
            break;
        }
        }
        cout << "Apakah anda ingin mengulangi Program ?\n";
        cout << "Ketik Y/T :";
        cin >> yt;
        if(yt=='Y' || yt=='y')
        {
            goto awal;
        }
        else if(yt=='T' || yt=='t')
        {
            goto akhir;
        }
        else
        {

        }
        cout << "Terimakasih sudah berkunjung";
        return 0;

    }
    else if(penyakit=="Asam lambung")
    {
        cout << "Input opsi (A) untuk Gejala dan Penangannya\n";
        cout << "Input opsi (B) untuk obat\n";
        cout << "Masukkan opsi pilihan anda :";
        cin >> input;
        switch(toupper(input))
        {
        case 'A' :
        {
            cout << " -Gejala Umum-\n";
            cout << "- Masalah tenggorakan,seperti nyeri,saura serak,dan radang tenggorakan\n";
            cout << "- Sakit dada atau perut bagian atas";
            cout << "- Bau mulut\n";
            cout << "- Mual/Muntah\n";
            cout << "- Batuk kering dan persisten\n";
            break;
        }
        case 'B' :
        {
            cout << " Pengobatan yang dianjurkan :\n";
            cout << "- Rutin tidur siang\n";
            cout << "- Jangan mengenakan pakaian ketat atau sabuk ketat\n";
            cout << "- Berhenti merokok";
            cout << "- Mengkonsumsi obat dengan kandungan Omeprazole,Rabeprazole\n";
            break;
        }
        default :
        {
            break;
        }
        cout << "Apakah anda ingin mengulangi Program ?\n";
        cout << "Ketik Y/T :";
        cin >> yt;
        if(yt=='Y' || yt=='y')
        {
            goto awal;
        }
        else if(yt=='T' || yt=='t')
        {
            goto akhir;
        }
        else
        {

        }
        cout << "Terimakasih sudah berkunjung";
        return 0;
    }
    else if(penyakit=="Migrain")
    {
        cout << "Input opsi (A) untuk Gejala dan Penangannya\n";
        cout << "Input opsi (B) untuk obat\n";
        cout << "Masukkan opsi pilihan anda :";
        cin >> input;
        switch(toupper(input))
        {
        case 'A' :
        {
            cout << "-Gejala Umum-\n";
            cout << "- Nyeri kepala hebat disalah satu sisi kepala\n";
            cout << "- Sembelit\n";
            cout << "- Kesemutan di tangan atau kaki\n";
            cout << "- Sensitif terhadap cahay,suara,dan bau\n";
            cout << "- Nyeri yang makin parah ketika bergerak,batuk,atau bersin\n";
            break;
        }
        case 'B' :
        {
            cout << "Pengobatan yang dianjurkan :\n";
            cout << "- Sering melakukan olah tubuh\n";
            cout << "- Pola hidup sehat dengan mengkonsumsi sayuran hijau\n";
            cout << "- Memperhatikan Pola jam tidur\n";
            cout << "- Berhenti merokok\n";
            cout << "- Periksa kesehatan anda secara berkala dipusat Kesehatan\n";
            break;
        }
        default :
            {
                break;
            }
        }
        cout << "Apakah anda ingin mengulangi Program ?\n";
        cout << "Ketik Y/T :";
        cin >> yt;
        if(yt=='Y' || yt=='y')
        {
            goto awal;
        }
        else if(yt=='T' || yt=='t')
        {
            goto akhir;
        }
        else
        {

        }
        akhir: cout << "Terimakasih sudah berkunjung";
        return 0;
    }
    else if(penyakit=="Migrain")
    {
        cout << "Input opsi (A) untuk Gejala dan Penangannya\n";
        cout << "Input opsi (B) untuk obat\n";
        cout << "Masukkan opsi pilihan anda :";
        cin >> input;
        switch(toupper(input))
        {
        case 'A' :
        {
            cout << "-Gejala Umum-\n";
            cout << "- Nyeri kepala hebat disalah satu sisi kepala\n";
            cout << "- Leher menjadi kaku\n";
            cout << "- Sembelit\n";
            cout << "- Kesemutan di tangan atau kaki\n";
            cout << "- Sensitif terhadap cahay,suara,dan bau\n";
            cout << "- Nyeri yang makin parah ketika bergerak,batuk,atau bersin\n";
            break;
        }
        case 'B' :
        {
            cout << "Pengobatan yang dianjurkan :\n";
            cout << "- Sering melakukan olah tubuh\n";
            cout << "- Pola hidup sehat dengan mengkonsumsi sayuran hijau\n";
            cout << "- Memperhatikan Pola jam tidur\n";
            cout << "- Berhenti merokok\n";
            cout << "- Periksa kesehatan anda secara berkala dipusat Kesehatan\n";
            break;
        }
        default :
        {
            break;
        }
        cout << "Apakah anda ingin mengulangi Program ?\n";
        cout << "Ketik Y/T :";
        cin >> yt;
        if(yt=='Y' || yt=='y')
        {
            goto awal;
        }
        else if(yt=='T' || yt=='t')
        {
            goto akhir;
        }
        else
        {

        }
        akhir: cout << "Terimakasih sudah berkunjung";
        return 0;
        }
    }



}
