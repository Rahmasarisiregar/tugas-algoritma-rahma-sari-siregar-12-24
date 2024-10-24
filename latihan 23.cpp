#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    cout << fixed << setprecision(2);
    const int maxpegawai = 20;
    string namapegawai[maxpegawai], golongan[maxpegawai], kode[maxpegawai], jabatan[maxpegawai];
    float gaji[maxpegawai], tunjangan[maxpegawai], pinjaman[maxpegawai], pajak[maxpegawai], totalgajikotor[maxpegawai], totalgajibersih[maxpegawai];
    char lagi;
    int nopepegawai = 0;
    float total_biaya = 0;

    cout << "GAJI PEGAWAI PT. TELKOM\n----------------------------------\n";

    do {
        cout << "Pegawai ke-" << nopepegawai + 1 << endl;
        cout << "Nama Pegawai              : ";
        cin.ignore();
		getline(cin,namapegawai[nopepegawai]); 
        cout << "Golongan                  : ";
        cin >> golongan[nopepegawai];
        cout << "Kode Jabatan              : ";
        cin >> kode[nopepegawai];

        if (golongan[nopepegawai] == "Ia") {
            gaji[nopepegawai] = 500000;
        } else if (golongan[nopepegawai] == "IIa") {
            gaji[nopepegawai] = 750000;
        } else if (golongan[nopepegawai] == "IIIa") {
            gaji[nopepegawai] = 1000000;
        } else if (golongan[nopepegawai] == "Ib") {
            gaji[nopepegawai] = 1500000;
        } else if (golongan[nopepegawai] == "IIb") {
            gaji[nopepegawai] = 1750000;
        } else if (golongan[nopepegawai] == "IIIb") {
            gaji[nopepegawai] = 2500000;
        } else {
            cout << "Golongan tidak dikenal!" << endl;
            continue;
        }

        // Mengatur jabatan dan tunjangan berdasarkan kode
        if (kode[nopepegawai] == "Dir") {
            jabatan[nopepegawai] = "Direktur";
            tunjangan[nopepegawai] = 4500000;
        } else if (kode[nopepegawai] == "Sek") {
            jabatan[nopepegawai] = "Sekretaris";
            tunjangan[nopepegawai] = 3000000;
        } else if (kode[nopepegawai] == "Wak") {
            jabatan[nopepegawai] = "Wakil Direktur";
            tunjangan[nopepegawai] = 3750000;
        } else if (kode[nopepegawai] == "Stf") {
            jabatan[nopepegawai] = "Staf Administrasi";
            tunjangan[nopepegawai] = 2000000;
        } else {
            cout << "Kode jabatan tidak dikenal!" << endl;
            continue;
        }

        cout << "Pinjaman : "; 
        cin >> pinjaman[nopepegawai];

        pajak[nopepegawai] = gaji[nopepegawai] * 0.05;
        totalgajikotor[nopepegawai] = gaji[nopepegawai] + tunjangan[nopepegawai];
        totalgajibersih[nopepegawai] = totalgajikotor[nopepegawai] - pinjaman[nopepegawai] - pajak[nopepegawai];

        // Output detail gaji pegawai
        cout << left;
        cout << setw(20) << "Jabatan: " << jabatan[nopepegawai] << endl;
        cout << setw(20) << "Gaji: " << gaji[nopepegawai] << endl;
        cout << setw(20) << "Tunjangan: " << tunjangan[nopepegawai] << endl;
        cout << setw(20) << "Pinjaman: " << pinjaman[nopepegawai] << endl;
        cout << setw(20) << "Pajak: " << pajak[nopepegawai] << endl;
        cout << setw(20) << "Total Kotor: " << totalgajikotor[nopepegawai] << endl;
        cout << setw(20) << "Total Bersih: " << totalgajibersih[nopepegawai] << endl;
        cout << "--------------------------------------------------------\n";
        
        total_biaya += totalgajibersih[nopepegawai];

        nopepegawai++;
        
        cout << "Lanjut? [Y/T]: "; 
        cin >> lagi;
        cout << endl;

    } while ((lagi == 'Y' || lagi == 'y' && nopepegawai < maxpegawai));
    
    cout << left;
    cout << setw(5) << "No"
         << setw(15) << "Nama"
         << setw(10) << "Golongan"
         << setw(15) << "Jabatan"
         << setw(15) << "Gaji"
         << setw(15) << "Tunjangan"
         << setw(15) << "Pinjaman"
         << setw(15) << "Pajak"
         << setw(15) << "Gaji Kotor"
         << setw(15) << "Gaji Bersih" << endl;

    cout << "------------------------------------------------------------------------------------------------------------------------------" << endl;

    for (int i = 0; i < nopepegawai; i++) {
        cout << setw(5) << i + 1
             << setw(15) << namapegawai[i]
             << setw(10) << golongan[i]
             << setw(15) << jabatan[i]
             << setw(15) << gaji[i]
             << setw(15) << tunjangan[i]
             << setw(15) << pinjaman[i]
             << setw(15) << pajak[i]
             << setw(15) << totalgajikotor[i]
             << setw(15) << totalgajibersih[i] << endl;
    }

    cout << endl;
    cout << "Total biaya yang dibayar perusahaan ke semua pegawai:                                                               Rp " << total_biaya << endl;
    cout << endl;

    return 0;
}
