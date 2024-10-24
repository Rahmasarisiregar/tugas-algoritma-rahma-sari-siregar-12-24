#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	cout <<fixed << setprecision (0);
	const int maxmahasiswa = 360 ;
	float bayarawal[maxmahasiswa],jumlahcicilan[maxmahasiswa],besarcicilan[maxmahasiswa],bayaran[maxmahasiswa],uangkuliah[maxmahasiswa],terbayar[maxmahasiswa],sisauangkuliah[maxmahasiswa];
	string nama[maxmahasiswa],npm[maxmahasiswa],kode[maxmahasiswa],jurusan[maxmahasiswa]; 
	char lagi;
	int nomahasiswa =0;
	float totalkuliah =0;
	
	
	cout <<"-----------PEMBAYARAN UANG KULIAH MAHASISWA PENUSA-----------" <<endl;
	cout <<"-------------------------------------------------------------" <<endl;
	cout <<endl;
	
	do{
		
		cout<<"Mahasiswa Ke-  "<<nomahasiswa +1 <<endl;
		cout<<"Nama Mahasiswa               :";
		cin >>nama[nomahasiswa];
		cout<<"NPM                          :";
		cin >>npm[nomahasiswa];
		cout<<"Kode                         :";
		cin >>kode[nomahasiswa];
		
		if(kode [nomahasiswa] == "SI"){
			jurusan	 [nomahasiswa] = "Sistem Informasi";
			bayarawal [nomahasiswa] = 2100000 ;
			jumlahcicilan [nomahasiswa] = 7 ;
			besarcicilan [nomahasiswa] = 300000;
		}
		else if(kode [nomahasiswa] == "TI"){
			jurusan  [nomahasiswa] = "Teknik Informatika";
			bayarawal [nomahasiswa] = 2500000 ;
			jumlahcicilan [nomahasiswa] = 7 ;
			besarcicilan [nomahasiswa] = 300000;
		}
		else if(kode [nomahasiswa] == "KA"){
			jurusan  [nomahasiswa] = "Komputer Akuntansi";
			bayarawal [nomahasiswa] = 1700000 ;
			jumlahcicilan [nomahasiswa] = 6 ;
			besarcicilan [nomahasiswa] = 200000;
		}
		else if(kode [nomahasiswa] == "MI"){
			jurusan  [nomahasiswa] = "Manajemen Informatika";
			bayarawal [nomahasiswa] = 1500000 ;
			jumlahcicilan [nomahasiswa] = 6 ;
			besarcicilan [nomahasiswa] = 250000;
		}
		
		
		cout<<"Jurusan                      :"<<jurusan[nomahasiswa]<<endl;
		cout<<"Pembayaran Awal              :Rp"<<bayarawal[nomahasiswa]<<endl;
		cout<<"Jumlah Cicilan               :"<<jumlahcicilan[nomahasiswa]<<endl;
		cout<<"Besar Cicilan                :Rp"<<besarcicilan[nomahasiswa]<<endl;
		cout<<"Pembayaran Ke                :";
		cin >>bayaran[nomahasiswa];
		
		
		uangkuliah [nomahasiswa]= bayarawal [nomahasiswa] + (jumlahcicilan [nomahasiswa] * besarcicilan [nomahasiswa]);
		terbayar [nomahasiswa] = bayarawal [nomahasiswa] + (bayaran [nomahasiswa] * besarcicilan [nomahasiswa]);
		sisauangkuliah [nomahasiswa] = uangkuliah [nomahasiswa] - terbayar [nomahasiswa];
		
		totalkuliah += sisauangkuliah [nomahasiswa];
		
		
		cout<<"Uang Kuliah                  :Rp"<<uangkuliah[nomahasiswa]<<endl;
		cout<<"Uang Kuliah Terbayar                            :Rp"<<terbayar[nomahasiswa]<<endl;
		cout<<"Sisa Uang Kuliah yang Harus Di Bayar            :Rp"<<sisauangkuliah[nomahasiswa]<<endl;
		
					
		
		nomahasiswa++;
		
		cout<< endl;
		
		cout<< "Masih Ingin Menghitung Uang Kuliah Mahasiswa? [Y/T] :" ;
		cin >>lagi;
		cout<<endl;
		
	} while (lagi == 'Y' || lagi == 'y');
	
	cout<<left;
	cout<<  setw(5) << "No"
         << setw(8) << "Nama"
         << setw(5) << "Kode"
         << setw(23) << "Jurusan"
         << setw(10) << "UKT"
         << setw(15) << "Awal Bayar"
         << setw(8) << "Cicilan"
         << setw(15) << "Besar Cicilan"
         << setw(12) << "Cicilan ke"
         << setw(10) << "Terbayar" 
		 << setw(20) << "Sisa Harus Di Bayar"<< endl;
		 
	cout<< "------------------------------------------------------------------------------------------------------------------------------" << endl;
	
	
	for (int i = 0; i < nomahasiswa; i++){
		cout<<  setw(5) << i + 1
         << setw(8) << nama[i]
         << setw(5) << kode[i]
         << setw(23) << jurusan[i]
         << setw(10) << uangkuliah[i]
         << setw(15) << bayarawal[i]
         << setw(8) << jumlahcicilan[i]
         << setw(15) << besarcicilan[i]
         << setw(12) << bayaran[i]
         << setw(10) << terbayar[i] 
		 << setw(20) << sisauangkuliah[i] << endl;
		
	}
	cout<<"Total Uang Yang Harus Di Bayar Oleh Mahasiswa                                                                    :Rp" <<totalkuliah <<endl;
	return 0;
}
