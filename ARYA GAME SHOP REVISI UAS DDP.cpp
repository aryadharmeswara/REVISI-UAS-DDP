/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main ()
{
    int kode,ID,jumlah,harga,total,bayar,kembalian;
    cout << "=====================================" << endl;
    cout << "=           ARYA Game Shop          =" << endl;
    cout << "=====================================" << endl;
    cout << "1.Mobile Legends" << endl;
    cout << "2.PUBG Mobile" << endl;
    cout << "3.Free Fire" << endl;
    cout << "4.Call of Duty Mobile" << endl;
    cout << "5.Valorant" << endl;
    cout << "Masukan Pilihan :" << endl;
    cin >> kode;
    cout << "....................................." << endl;
switch (kode) {
    case 1:
        cout << "Mobile Legends" << endl;
        cout << endl;
        cout << "1.Diamond A = Rp. 22000  (diskon 5 % ) = 53  Diamonds + 6  bonus" << endl;
        cout << "2.Diamond B = Rp. 33000  (diskon 5 % ) = 77  Diamonds + 8  bonus" << endl;
        cout << "3.Diamond C = Rp. 66000  (diskon 5 % ) = 154 Diamonds + 16 bonus" << endl;
        cout << "4.Diamond D = Rp. 110000 (diskon 5 % ) = 256 Diamonds + 40 bonus" << endl;
        cout << "5.Diamond E = Rp. 140000 (diskon 5 % ) = 367 Diamonds + 41 bonus" << endl;
        cout << "................................."   << endl;
        cout << "\n" << "Masukan Pilihan Anda : ";
        cin >> kode;
        cout << "Contoh ID Game : 5432176" << endl;
        cout << "Masukan ID Game Mobile Legends : ";
        cin >> ID;
        if(kode == 1){
            cout << "\n" << "Diamond A" << endl;
            cout << "Rp. 22000 (diskon 5 % ) = 53 Diamonds + 6 bonus" << endl;
            cout << endl;
            harga=22000 -(22000*5/100);
                total=harga;
            cout << "Total harga : Rp. " << total << endl;
            cout << "Bayar : Rp. ";
            cin >> bayar;
                kembalian=bayar-total;
            cout << "Kembali : Rp. " << kembalian << endl;
            cout << "Diamond : 53 Diamonds + 6 bonus" << endl;
        }
        else if(kode == 2){
            cout << "\n" << "Diamond B" << endl;
            cout << "Rp. 33000 (diskon 5 % ) = 77 Diamonds + 8 bonus" << endl;
            cout << endl;
                harga=33000 -(33000*5/100);
                total=harga;
            cout << "Total harga : Rp. " << total << endl;
            cout << "Bayar : Rp. ";
            cin >> bayar;
                kembalian=bayar-total;
            cout << "Kembali : Rp. " << kembalian << endl;
            cout << "Diamond : 77 Diamonds + 8 bonus" << endl;
        }
        else if(kode == 3){
            cout << "\n" << "Diamond C" << endl;
            cout << "Rp. 66000 (diskon 5 % ) = 154 Diamonds + 16 bonus" << endl;
            cout << endl;
                harga=66000 -(66000*5/100);
                total=harga;
            cout << "Total harga : Rp. " << total << endl;
            cout << "Bayar : Rp. ";
            cin >> bayar;
                kembalian=bayar-total;
            cout << "Kembali : Rp. " << kembalian << endl;
            cout << "Diamond : 154 Diamonds + 16 bonus" << endl;
        }
        else if(kode == 4){
            cout << "\n" << "Diamond D" << endl;
            cout << "Rp. 110000 (diskon 5 % ) = 256 Diamonds + 40 bonus" << endl;
            cout << endl;
                harga=110000 -(110000*5/100);
                total=harga;
            cout << "Total harga : Rp. " << total << endl;
            cout << "Bayar : Rp. ";
            cin >> bayar;
                kembalian=bayar-total;
            cout << "Kembali : Rp. " << kembalian << endl;
            cout << "Diamond : 256 Diamonds + 40 bonus" << endl;
        }
        else if(kode == 5){
            cout << "\n" << "Diamond E" << endl;
            cout << "Rp. 140000 (diskon 5 % ) = 367 Diamonds + 41 bonus" << endl;
            cout << endl;
                harga=140000 -(140000*5/100);
                total=harga;
            cout << "Total harga : Rp. " << total << endl;
            cout << "Bayar : Rp. ";
            cin >> bayar;
                kembalian=bayar-total;
            cout << "Kembali : Rp. " << kembalian << endl;
            cout << "Diamond : 367 Diamonds + 41 bonus" << endl;
        }
        if(bayar<harga) {
            cout << "..................................." << endl;
            cout << "Uang Tidak Cukup" << endl;
            cout << "Gagal Membeli" << endl;
            cout << "..................................." << endl;
        }
            cout << "ID Game Mobile Legends : " << ID << endl;
            cout << "-----------------------------------" << endl;
            cout << "Terimakasih sudah berbelanja! Semoga harimu menyenangkan" << endl;
        break;
    case 2:
        cout << "PUBG Mobile" << endl;
        cout << endl;
        cout << "1.UC A = Rp. 36000  (diskon 5 % ) = 180  UC + 6   UC" << endl;
        cout << "2.UC B = Rp. 50000  (diskon 5 % ) = 250  UC + 13  UC" << endl;
        cout << "3.UC C = Rp. 100000 (diskon 5 % ) = 500  UC + 25  UC" << endl;
        cout << "4.UC D = Rp. 250000 (diskon 5 % ) = 1250 UC + 125 UC" << endl;
        cout << "5.UC E = Rp. 500000 (diskon 5 % ) = 2500 UC + 375 UC" << endl;
        cout << "................................."   << endl;
        cout << "\n" << "Masukan Pilihan Anda : ";
        cin >> kode;
        cout << "Contoh ID Game : 5432176" << endl;
        cout << "Masukan ID Game PUBG Mobile : ";
        cin >> ID;
        if(kode == 1){
            cout << "\n" << "UC A" << endl;
            cout << "Rp. 36000 (diskon 5 % ) = 180 UC + 6 UC" << endl;
            cout << endl;
            harga=36000 -(36000*5/100);
                total=harga;
            cout << "Total harga : Rp. " << total << endl;
            cout << "Bayar : Rp. ";
            cin >> bayar;
                kembalian=bayar-total;
            cout << "Kembali : Rp. " << kembalian << endl;
            cout << "UC : 180 UC + 6 UC" << endl;
        }
        else if(kode == 2){
            cout << "\n" << "UC B" << endl;
            cout << "Rp. 50000 (diskon 5 % ) = 250 UC + 13 UC" << endl;
            cout << endl;
                harga=50000 -(50000*5/100);
                total=harga;
            cout << "Total harga : Rp. " << total << endl;
            cout << "Bayar : Rp. ";
            cin >> bayar;
                kembalian=bayar-total;
            cout << "Kembali : Rp. " << kembalian << endl;
            cout << "UC : 250 UC + 13 UC" << endl;
        }
        else if(kode == 3){
            cout << "\n" << "UC C" << endl;
            cout << "Rp. 100000 (diskon 5 % ) = 500 UC + 25 UC" << endl;
            cout << endl;
                harga=100000 -(100000*5/100);
                total=harga;
            cout << "Total harga : Rp. " << total << endl;
            cout << "Bayar : Rp. ";
            cin >> bayar;
                kembalian=bayar-total;
            cout << "Kembali : Rp. " << kembalian << endl;
            cout << "UC : 500 UC + 25 UC" << endl;
        }
        else if(kode == 4){
            cout << "\n" << "UC D" << endl;
            cout << "Rp. 250000 (diskon 5 % ) = 1250 UC + 125 UC" << endl;
            cout << endl;
                harga=250000 -(250000*5/100);
                total=harga;
            cout << "Total harga : Rp. " << total << endl;
            cout << "Bayar : Rp. ";
            cin >> bayar;
                kembalian=bayar-total;
            cout << "Kembali : Rp. " << kembalian << endl;
            cout << "UC : 1250 UC + 125 UC" << endl;
        }
        else if(kode == 5){
            cout << "\n" << "UC E" << endl;
            cout << "Rp. 500000 (diskon 5 % ) = 2500 UC + 375 UC" << endl;
            cout << endl;
                harga=500000 -(500000*5/100);
                total=harga;
            cout << "Total harga : Rp. " << total << endl;
            cout << "Bayar : Rp. ";
            cin >> bayar;
                kembalian=bayar-total;
            cout << "Kembali : Rp. " << kembalian << endl;
            cout << "UC : 2500 UC + 375 UC" << endl;
        }
        if(bayar<harga) {
            cout << "..................................." << endl;
            cout << "Uang Tidak Cukup" << endl;
            cout << "Gagal Membeli" << endl;
            cout << "..................................." << endl;
        }
            cout << "ID Game PUBG Moile : " << ID << endl;
            cout << "-----------------------------------" << endl;
            cout << "Terimakasih sudah berbelanja! Semoga harimu menyenangkan" << endl;
        break;
    case 3:
        cout << "Free Fire" << endl;
        cout << endl;
        cout << "1.Diamond A = Rp. 15000  (diskon 5 % ) = 70   Diamonds" << endl;
        cout << "2.Diamond B = Rp. 30000  (diskon 5 % ) = 140  Diamonds" << endl;
        cout << "3.Diamond C = Rp. 71000  (diskon 5 % ) = 355  Diamonds" << endl;
        cout << "4.Diamond D = Rp. 150000 (diskon 5 % ) = 720  Diamonds" << endl;
        cout << "5.Diamond E = Rp. 280000 (diskon 5 % ) = 1450 Diamonds" << endl;
        cout << "................................." << endl;
        cout << "\n" << "Masukan Pilihan Anda : ";
        cin >> kode;
        cout << "Contoh ID Game : 5432176" << endl;
        cout << "Masukan ID Game Free Fire : ";
        cin >> ID;
        if(kode == 1){
            cout << "\n" << "Diamond A" << endl;
            cout << "Rp. 15000 (diskon 5 % ) = 70  Diamonds" << endl;
            cout << endl;
            harga=15000 -(15000*5/100);
                total=harga;
            cout << "Total harga : Rp. " << total << endl;
            cout << "Bayar : Rp. ";
            cin >> bayar;
                kembalian=bayar-total;
            cout << "Kembali : Rp. " << kembalian << endl;
            cout << "Diamond : 70  Diamonds" << endl;
        }
        else if(kode == 2){
            cout << "\n" << "Diamond B" << endl;
            cout << "Rp. 30000 (diskon 5 % ) = 140 Diamonds" << endl;
            cout << endl;
                harga=30000 -(30000*5/100);
                total=harga;
            cout << "Total harga : Rp. " << total << endl;
            cout << "Bayar : Rp. ";
            cin >> bayar;
                kembalian=bayar-total;
            cout << "Kembali : Rp. " << kembalian << endl;
            cout << "Diamond : 140 Diamonds" << endl;
        }
        else if(kode == 3){
            cout << "\n" << "Diamond C" << endl;
            cout << "Rp. 71000 (diskon 5 % ) = 355 Diamonds" << endl;
            cout << endl;
                harga=71000 -(71000*5/100);
                total=harga;
            cout << "Total harga : Rp. " << total << endl;
            cout << "Bayar : Rp. ";
            cin >> bayar;
                kembalian=bayar-total;
            cout << "Kembali : Rp. " << kembalian << endl;
            cout << "Diamond : 355 Diamonds" << endl;
        }
        else if(kode == 4){
            cout << "\n" << "Diamond D" << endl;
            cout << "Rp. 150000 (diskon 5 % ) = 720 Diamonds" << endl;
            cout << endl;
                harga=150000 -(150000*5/100);
                total=harga;
            cout << "Total harga : Rp. " << total << endl;
            cout << "Bayar : Rp. ";
            cin >> bayar;
                kembalian=bayar-total;
            cout << "Kembali : Rp. " << kembalian << endl;
            cout << "Diamond : 720 Diamonds" << endl;
        }
        else if(kode == 5){
            cout << "\n" << "Diamond E" << endl;
            cout << "Rp. 280000 (diskon 5 % ) = 1450 Diamonds" << endl;
            cout << endl;
                harga=280000 -(280000*5/100);
                total=harga;
            cout << "Total harga : Rp. " << total << endl;
            cout << "Bayar : Rp. ";
            cin >> bayar;
                kembalian=bayar-total;
            cout << "Kembali : Rp. " << kembalian << endl;
            cout << "Diamond : 1450 Diamonds" << endl;
        }
        if(bayar<harga) {
            cout << "..................................." << endl;
            cout << "Uang Tidak Cukup" << endl;
            cout << "Gagal Membeli" << endl;
            cout << "..................................." << endl;
        }
            cout << "ID Game Free Fire : " << ID << endl;
            cout << "-----------------------------------" << endl;
            cout << "Terimakasih sudah berbelanja! Semoga harimu menyenangkan" << endl;
        break;
    case 4:
        cout << "Call of Duty Mobile" << endl;
        cout << endl;
        cout << "1.CP A = Rp. 20000  (diskon 5 % ) = 127  CP" << endl;
        cout << "2.CP B = Rp. 50000  (diskon 5 % ) = 317  CP" << endl;
        cout << "3.CP C = Rp. 100000 (diskon 5 % ) = 634  CP" << endl;
        cout << "4.CP D = Rp. 200000 (diskon 5 % ) = 1373 CP" << endl;
        cout << "5.CP E = Rp. 300000 (diskon 5 % ) = 2059 CP" << endl;
        cout << "................................."   << endl;
        cout << "\n" << "Masukan Pilihan Anda : ";
        cin >> kode;
        cout << "Contoh ID Game : 5432176" << endl;
        cout << "Masukan ID Game Call of Duty Mobile : ";
        cin >> ID;
        if(kode == 1){
            cout << "\n" << "CP A" << endl;
            cout << "Rp. 20000 (diskon 5 % ) = 127 CP" << endl;
            cout << endl;
            harga=20000 -(20000*5/100);
                total=harga;
            cout << "Total harga : Rp. " << total << endl;
            cout << "Bayar : Rp. ";
            cin >> bayar;
                kembalian=bayar-total;
            cout << "Kembali : Rp. " << kembalian << endl;
            cout << "CP : 127 CP" << endl;
        }
        else if(kode == 2){
            cout << "\n" << "CP B" << endl;
            cout << "Rp. 50000 (diskon 5 % ) = 317 CP" << endl;
            cout << endl;
                harga=50000 -(50000*5/100);
                total=harga;
            cout << "Total harga : Rp. " << total << endl;
            cout << "Bayar : Rp. ";
            cin >> bayar;
                kembalian=bayar-total;
            cout << "Kembali : Rp. " << kembalian << endl;
            cout << "CP : 317 CP" << endl;
        }
        else if(kode == 3){
            cout << "\n" << "CP C" << endl;
            cout << "Rp. 100000 (diskon 5 % ) = 634 CP" << endl;
            cout << endl;
                harga=100000 -(100000*5/100);
                total=harga;
            cout << "Total harga : Rp. " << total << endl;
            cout << "Bayar : Rp. ";
            cin >> bayar;
                kembalian=bayar-total;
            cout << "Kembali : Rp. " << kembalian << endl;
            cout << "CP : 634 CP" << endl;
        }
        else if(kode == 4){
            cout << "\n" << "CP D" << endl;
            cout << "Rp. 200000 (diskon 5 % ) = 1373 CP" << endl;
            cout << endl;
                harga=200000 -(200000*5/100);
                total=harga;
            cout << "Total harga : Rp. " << total << endl;
            cout << "Bayar : Rp. ";
            cin >> bayar;
                kembalian=bayar-total;
            cout << "Kembali : Rp. " << kembalian << endl;
            cout << "CP : 1373 CP" << endl;
        }
        else if(kode == 5){
            cout << "\n" << "CP E" << endl;
            cout << "Rp. 300000 (diskon 5 % ) = 2059 CP" << endl;
            cout << endl;
                harga=300000 -(300000*5/100);
                total=harga;
            cout << "Total harga : Rp. " << total << endl;
            cout << "Bayar : Rp. ";
            cin >> bayar;
                kembalian=bayar-total;
            cout << "Kembali : Rp. " << kembalian << endl;
            cout << "CP : 2059 CP" << endl;
        }
        if(bayar<harga) {
            cout << "..................................." << endl;
            cout << "Uang Tidak Cukup" << endl;
            cout << "Gagal Membeli" << endl;
            cout << "..................................." << endl;
        }
            cout << "ID Game Call of Duty Mobile : " << ID << endl;
            cout << "-----------------------------------" << endl;
            cout << "Terimakasih sudah berbelanja! Semoga harimu menyenangkan" << endl;
        break;
    case 5:
        cout << "Valorant" << endl;
        cout << endl;
        cout << "1.Points A = Rp. 15000  (diskon 5 % ) = 125  Points" << endl;
        cout << "2.Points B = Rp. 50000  (diskon 5 % ) = 420  Points" << endl;
        cout << "3.Points C = Rp. 80000  (diskon 5 % ) = 700  Points" << endl;
        cout << "4.Points D = Rp. 150000 (diskon 5 % ) = 1375 Points" << endl;
        cout << "5.Points E = Rp. 250000 (diskon 5 % ) = 2400 Points" << endl;
        cout << "................................."   << endl;
        cout << "\n" << "Masukan Pilihan Anda : ";
        cin >> kode;
        cout << "Contoh ID Game : 5432176" << endl;
        cout << "Masukan ID Game Valorant : ";
        cin >> ID;
        if(kode == 1){
            cout << "\n" << "Points A" << endl;
            cout << "Rp. 15000 (diskon 5 % ) = 125 Points" << endl;
            cout << endl;
            harga=15000 -(15000*5/100);
                total=harga;
            cout << "Total harga : Rp. " << total << endl;
            cout << "Bayar : Rp. ";
            cin >> bayar;
                kembalian=bayar-total;
            cout << "Kembali : Rp. " << kembalian << endl;
            cout << "Points : 125 Points" << endl;
        }
        else if(kode == 2){
            cout << "\n" << "Points B" << endl;
            cout << "Rp. 50000 (diskon 5 % ) = 420 Points" << endl;
            cout << endl;
                harga=50000 -(50000*5/100);
                total=harga;
            cout << "Total harga : Rp. " << total << endl;
            cout << "Bayar : Rp. ";
            cin >> bayar;
                kembalian=bayar-total;
            cout << "Kembali : Rp. " << kembalian << endl;
            cout << "Points : 420 Points" << endl;
        }
        else if(kode == 3){
            cout << "\n" << "Points C" << endl;
            cout << "Rp. 80000 (diskon 5 % ) = 700 Points" << endl;
            cout << endl;
                harga=80000 -(80000*5/100);
                total=harga;
            cout << "Total harga : Rp. " << total << endl;
            cout << "Bayar : Rp. ";
            cin >> bayar;
                kembalian=bayar-total;
            cout << "Kembali : Rp. " << kembalian << endl;
            cout << "Points : 700 Points" << endl;
        }
        else if(kode == 4){
            cout << "\n" << "Points D" << endl;
            cout << "Rp. 150000 (diskon 5 % ) = 1375 Points" << endl;
            cout << endl;
                harga=150000 -(150000*5/100);
                total=harga;
            cout << "Total harga : Rp. " << total << endl;
            cout << "Bayar : Rp. ";
            cin >> bayar;
                kembalian=bayar-total;
            cout << "Kembali : Rp. " << kembalian << endl;
            cout << "Points : 1375 Points" << endl;
        }
        else if(kode == 5){
            cout << "\n" << "Points E" << endl;
            cout << "Rp. 250000 (diskon 5 % ) = 2400 Points" << endl;
            cout << endl;
                harga=250000 -(250000*5/100);
                total=harga;
            cout << "Total harga : Rp. " << total << endl;
            cout << "Bayar : Rp. ";
            cin >> bayar;
                kembalian=bayar-total;
            cout << "Kembali : Rp. " << kembalian << endl;
            cout << "Points : 2400 Points" << endl;
        }
        if(bayar<harga) {
            cout << "..................................." << endl;
            cout << "Uang Tidak Cukup" << endl;
            cout << "Gagal Membeli" << endl;
            cout << "..................................." << endl;
        }
            cout << "ID Game Valorant : " << ID << endl;
            cout << "-----------------------------------" << endl;
            cout << "Terimakasih sudah berbelanja! Semoga harimu menyenangkan" << endl;
        break;
    }
    return 0;
}
