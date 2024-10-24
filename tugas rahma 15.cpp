#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	char namapegawai[30],jabatan[30];
	float gaji,pajak=0.15,pinjaman,gajibersih;
	
	cout<<"GAJI KARYAWAN STMIK PELITA NUSANTARA" <<endl;
	cout<<"-------------------------------------" <<endl;
	cout<<"nama pegawai:";
	gets(namapegawai);
	cout<<"jabatan:";
	cin>>jabatan;
	cout<<"gaji:";
	pajak=0.15*gaji;
	cout<<"pajak:"<<pajak <<endl;
	cout<<"pinjaman:";
	cin>>pinjaman;
	gajibersih=gaji-(pinjaman+pajak);
	cout<<"gaji bersih:" <<gajibersih <<endl;
	
	
	return 0;
	
}

