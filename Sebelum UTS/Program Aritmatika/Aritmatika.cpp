//judul
//program sederhana aritmatika
//Muhammad Naufal Abdulmajid
//25 september 2022
//di rumah

#include <iostream>
using namespace std;

//kamus
int kali;
int bagi;
int kurang;
int jumlah;
int angka1, angka2;

//deskripsi
main ()
{
cout << "Program Aritmatika Sederhana" << endl;
cout << "---------------------------------------------------------------------------------" << endl;
cout << "Masukkan Nilai Bilangan Pertama : ";
cin  >> angka1;
cout << "Masukkan Nilai Bilangan Pertama : ";
cin  >>	angka2;
cout << "---------------------------------------------------------------------------------" << endl;
cout << "Perkalian" << endl << endl;

kali = angka1 * angka2;
cout << "Hasil dari " << angka1 << " dikali " << angka2 << " adalah " << kali << endl;
	if ((kali % 2 == 0)&(kali > 0 ))
				{
				cout << "yang merupakan bilangan Genap Positif" << endl;
		  		}
	else if (!(kali % 2 == 0)&(kali > 0 ))
		  		{
                cout << "yang merupakan bilangan Ganjil Positif" << endl;
		  		}
	else if ((kali % 2 == 0)&(kali < 0 ))
		 		{
				cout << "yang merupakan bilangan Genap Negatif" << endl;
		  		}
	else if (!(kali % 2 == 0)&(kali < 0))
		  		{
				cout << "yang merupakan bilangan Ganjil Negatif" << endl;
		  		}
	else
				{
				cout << "yang bukan merupakan bilangan Genap maupun Ganjil" << endl;
				}
cout << "---------------------------------------------------------------------------------" << endl;
cout << "Pembagian (dibulatkan kebawah)" << endl << endl;

	if (angka2 == 0)
                {
                cout << "TIDAK BISA MEMBAGI DENGAN NOL." << endl;
                }
    else
		{
		bagi = angka1 / angka2;
        cout << "Hasil dari " << angka1 << " dibagi " << angka2 << " adalah " << bagi << endl;
		if      ((bagi % 2 == 0)&(bagi > 0 ))
				{
				cout << "yang merupakan bilangan Genap Positif" << endl;
		  		}
        else if (!(bagi % 2 == 0)&(bagi > 0 ))
		  		{
                cout << "yang merupakan bilangan Ganjil Positif" << endl;
		  		}
        else if ((bagi % 2 == 0)&(bagi < 0 ))
		 		{
				cout << "yang merupakan bilangan Genap Negatif" << endl;
		  		}
        else if (!(bagi % 2 == 0)&(bagi < 0))
		  		{
				cout << "yang merupakan bilangan Ganjil Negatif" << endl;
		  		}
        else
				{
				cout << "yang bukan merupakan bilangan Genap maupun Ganjil" << endl;
				}
		}
cout <<  "---------------------------------------------------------------------------------" << endl;
cout << "Pengurangan" << endl << endl;

kurang = angka1 - angka2;
cout << "Hasil dari " << angka1 << " dikurangi " << angka2 << " adalah " << kurang << endl;
	if ((kurang % 2 == 0)&(kurang > 0 ))
				{
				cout << "yang merupakan bilangan Genap Positif" << endl;
		  		}
	else if (!(kurang % 2 == 0)&(kurang > 0 ))
		  		{
                cout << "yang merupakan bilangan Ganjil Positif" << endl;
		  		}
	else if ((kurang % 2 == 0)&(kurang < 0 ))
		 		{
				cout << "yang merupakan bilangan Genap Negatif" << endl;
		  		}
	else if (!(kurang % 2 == 0)&(kurang < 0))
		  		{
				cout << "yang merupakan bilangan Ganjil Negatif" << endl;
		  		}
	else
				{
				cout << "yang bukan merupakan bilangan Genap maupun Ganjil" << endl;
				}
cout <<  "---------------------------------------------------------------------------------" << endl;
cout << "Penjumlahan" << endl << endl;

jumlah = angka1 + angka2;
cout << "Hasil dari " << angka1 << " ditambah " << angka2 << " adalah " << jumlah << endl;
	if ((jumlah % 2 == 0)&(jumlah > 0 ))
				{
				cout << "yang merupakan bilangan Genap Positif" << endl;
		  		}
	else if (!(jumlah % 2 == 0)&(jumlah > 0 ))
		  		{
                cout << "yang merupakan bilangan Ganjil Positif" << endl;
		  		}
	else if ((jumlah % 2 == 0)&(jumlah < 0 ))
		 		{
				cout << "yang merupakan bilangan Genap Negatif" << endl;
		  		}
	else if (!(jumlah % 2 == 0)&(jumlah < 0))
		  		{
				cout << "yang merupakan bilangan Ganjil Negatif" << endl;
		  		}
	else
				{
				cout << "yang bukan merupakan bilangan Genap maupun Ganjil" << endl;
				}
cout <<  "---------------------------------------------------------------------------------" << endl;

}
