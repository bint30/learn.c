#include<iostream>
using namespace std;

int penjualan;
string nama;
string opsi;
int pilih();


int main(){
	
	cout<<"================================"<<endl;
	cout<<"=   MENENTUKAN BONUS PEGAWAI   ="<<endl;
	cout<<"================================"<<endl<<endl;
	cout<<"Input Nama Pegawai     : ";
	cin>>nama;
	cout<<"Input Jumlah Penjualan : ";
	cin>>penjualan;
//	system ("cls");
	return pilih();
	
	
	
}
int pilih(){
	if(penjualan > 2 ){
		cout<<endl;
		cout<<"Nama Pegawai : "<<nama<<endl;
		cout<<"Mendapat Bonus Rp.1.000.000"<<endl;
		
	}
	else if (penjualan = 2){
		cout<<endl;
		cout<<"Nama Pegawai : "<<nama<<endl;
		cout<<"Mendapat Bonus Rp.500.000"<<endl;
	}
	else if(penjualan < 2 ){
		cout<<endl;
		cout<<"Nama pegawai : "<<nama<<endl;
		cout<<"TIDAK MENDAPAT BONUS"<<endl;
	}
		cout<<endl;
    	cout<<"==========================================="<<endl;
    	cout<<"Program Selesai"<<endl;
    	cout<<"==========================================="<<endl;
    	cout<<"Ulang Program? Y/N"<<endl;
		cin>>opsi;
		if(opsi == "y" or opsi =="Y" ){
			system("cls");
			return main();
		}
		else{
			system("cls");
			cout<<"=================================="<<endl;
			cout<<"=     TERIMA KASIH SAUDARA       ="<<endl;
			cout<<"= TELAH MENGGUNAKAN PROGRAM KAMI ="<<endl;
			cout<<"=================================="<<endl;
			return 0;
			
		}
//	
}
