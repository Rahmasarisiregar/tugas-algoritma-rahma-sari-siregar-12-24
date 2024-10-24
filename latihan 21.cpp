#include <iostream>
#include <string>
using namespace std;

struct BarangElektronik {
    string nama;
    double harga;
    int jumlahJual;
    double totalHarga;
    double diskon;
    double totalBayar;
};

int main() {
    const int MAX_BARANG = 100;
    BarangElektronik barang[MAX_BARANG];
    int jumlahData = 0;
    char lanjutInput = 'Y';
    double totalPendapatan = 0;

    do {
        cout << "PENCATATAN BARANG ELEKTRONIK\n";
        cout << "Nama Barang: ";
        cin >> barang[jumlahData].nama;
        cout << "Harga: ";
        cin >> barang[jumlahData].harga;
        cout << "Jumlah Jual: ";
        cin >> barang[jumlahData].jumlahJual;

        // Hitung Total Harga
        barang[jumlahData].totalHarga = barang[jumlahData].harga * barang[jumlahData].jumlahJual;
        
        // Hitung Diskon (10%)
        barang[jumlahData].diskon = barang[jumlahData].totalHarga * 0.10;
        
        // Hitung Total Bayar
        barang[jumlahData].totalBayar = barang[jumlahData].totalHarga - barang[jumlahData].diskon;
        
        // Tambahkan ke total pendapatan
        totalPendapatan += barang[jumlahData].totalBayar;

        // Tampilkan hasil
        cout << "\n--- Rincian Penjualan ---\n";
        cout << "Nama Barang: " << barang[jumlahData].nama << endl;
        cout << "Total Harga: " << barang[jumlahData].totalHarga << endl;
        cout << "Diskon: " << barang[jumlahData].diskon << endl;
        cout << "Total Bayar: " << barang[jumlahData].totalBayar << endl;

		jumlahData++;

        if (jumlahData >= MAX_BARANG) {
            cout << "Data maksimal yang dapat diinput sudah mencapai 100.\n";
            break;
        }

        // Tanya user apakah ingin input lagi
        cout << "Apakah Mau Input Lagi? (Y/T): ";
        cin >> lanjutInput;

    } while (lanjutInput == 'Y' || lanjutInput == 'y');

    // Tampilkan total pendapatan
    cout << "\nTotal Pendapatan: " << totalPendapatan << endl;
    cout << "Jumlah Data yang Diinput: " << jumlahData << endl;

  	return 0;
}

