#include <iostream>
#include <string>
using namespace std;

int main()
{
 string nama, barang1, barang2;
 int q1, q2, p1, p2, total1, total2;
 //q=quantity p=price
 int uang, sisa, total;
 
 
 cout<<"selamat datang, silahkan isi data berikut"<<endl;
 cout<<"masukan nama anda :";
 getline (cin, nama);
 
 cout<<"masukan nama barang 1 : ";
 getline (cin, barang1);
 
 cout<<"masukan harga barang 1 : ";
 cin>>p1;
 
 cout<<"masukan jumlah barang 1 : ";
 cin>>q1;
 
 total1= p1*q1;
 
 cout<<endl;
 cout<<"masukan nama barang 2 : ";
 cin>>barang2;
 
 cout<<"masukan harga barang 2 : ";
 cin>>p2;
 
 cout<<"masukan jumlah barang 2 : ";
 cin>>q2;
 
 cout<<endl<<"masukkan jumlah uang anda : Rp.";
 cin>>uang;
 
 total2=p2*q2;
 
 cout<<endl<<"-------struk-------"<<endl;
 cout<<"nama : "<<nama<<endl;
 cout<<"barang 1 : "<<barang1<<endl;
 cout<<"harga : RP."<<p1<<endl;
 cout<<"jumlah : "<<q1<<endl;
 cout<<"total : Rp."<<total1<<endl;
 cout<<"barang 2 : "<<barang2<<endl;
 cout<<"harga : RP."<<p2<<endl;
 cout<<"jumlah : "<<q2<<endl;
 cout<<"total : Rp."<<total2<<endl;
 cout<<endl;
 cout<<"total seluruh belanjaan : Rp."<<total1+total2;
 
 total=total1+total2;
 sisa=uang-total;
 cout<<endl;
 cout<<endl<<"Sisa uang anda :Rp."<<sisa;
 
return 0;

}
