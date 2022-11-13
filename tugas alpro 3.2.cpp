#include <iostream>
using namespace std;

int main (){

   float Praktikum,Nilai_UTS, Nilai_UAS, Nilai_Akhir;

   cout << "Program menghitung nilai akhir mahasiswa" << endl;


   //Proses input
	cout << "Masukan Nilai praktikum : ";
	cin >> Praktikum;

	cout << "Masukan Nilai UTS : ";
	cin >> Nilai_UTS;

	cout << "Masukan Nilai UAS : ";
	cin >> Nilai_UAS;


	//Hitung sesuai rumus
	Nilai_Akhir = ((Praktikum*0.2)+(Nilai_UTS*0.3)+(Nilai_UAS*0.5));


	//Proses output
	cout<<endl;
	cout<<"Nilai Akhir : "<<Nilai_Akhir<<endl;



return 0;
}
