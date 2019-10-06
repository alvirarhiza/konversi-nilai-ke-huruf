#include <iostream>
using namespace std;

int main(){
	float nilai;
	cout<<"masukkan nilai anda = ";
	cin>>nilai;

	if(nilai>90&&nilai<=100){
		cout<<"Selamat Grade anda X";
	}
	else if(nilai>80&&nilai<=90){
		cout<<"Grade anda XY";
	}
	else if(nilai>70&&nilai<=80){
		cout<<"Grade Y";
	}
	else if(nilai>60&&nilai<=70){
		cout<<"Grade anda YZ ";
	}
	else if(nilai>50&&nilai<=60){
		cout<<"Grade anda Z ";
	}
	else if(nilai>40&&nilai<=50){
		cout<<"Grade anda ZH ";
	}
	else if(nilai>20&&nilai<=40){
		cout<<"Grade anda H ";
	}
	else if(nilai>0&&nilai<=20){
		cout<<"Grade anda I ";
	}
	 else {
		cout<< "Tolong Masukkan Nilai Dengan Benar";
	}
	return 0;
}
void petunjuk()
{
cout << "Nama	: Alvira Rhiza Ridwani\n";
cout << "Nim	: 19051397007\n";
cout << "Prodi	: D4 Manajemen Informatika\n";
cout << "-------|Universitas Negeri Surabaya|-------\n";
cout << "==================================================\n";
cout << "\t\tPROGRAM KALKULATOR SEDERHANA\t\t\n";
cout << "'X' = nilai>90&&nilai<=100 \n";
cout << "'XY'= nilai>80&&nilai<=90 \n";
cout << "'Y' = nilai>70&&nilai<=80 \n";
cout << "'YZ'= nilai>60&&nilai<=70 \n";
cout << "'Z' = nilai>50&&nilai<=60 \n";
cout << "'ZH'= nilai>40&&nilai<=50 \n";
cout << "'H' = nilai>20&&nilai<=40 \n";
cout << "'I' = nilai>0&&nilai<=20 \n";
cout << "==================================================\n";
}
