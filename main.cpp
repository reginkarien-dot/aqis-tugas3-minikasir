
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    int pilihan, jumlah;
    int total = 0;
    int harga = 0;
    int uang, kembalian;

    string namaMenu;
    
    cout << "====================================\n";
    cout << "       SELAMAT DATANG DI KASIR      \n";
    cout << "          WARUNG MAKAN              \n";
    cout << "====================================\n";

    cout << "\n             DAFTAR MENU            \n";
    cout << "------------------------------------\n";
    cout << " 1. Pecel          Rp 10.000\n";
    cout << " 2. Minum Teh      Rp  3.000\n";
    cout << " 3. Kopi           Rp  5.000\n";
    cout << " 4. Nasi Goreng    Rp 15.000\n";
    cout << " 5. Mie Goreng     Rp 12.000\n";
    cout << "------------------------------------\n";

    while (true) {
        cout << "\nPilih menu (1-5)";
        cout << " atau 0 untuk selesai: ";
        cin >> pilihan;

        if (pilihan == 0) {
            break;
        }

        switch (pilihan) {
            case 1:
                namaMenu = "Pecel";
                harga = 10000;
                break;

            case 2:
                namaMenu = "Minum Teh";
                harga = 3000;
                break;

            case 3:
                namaMenu = "Kopi";
                harga = 5000;
                break;

            case 4:
                namaMenu = "Nasi Goreng";
                harga = 15000;
                break;

            case 5:
                namaMenu = "Mie Goreng";
                harga = 12000;
                break;

            default:
                cout << "Pilihan tidak tersedia!\n";
                continue;
        }

        cout << "Menu dipilih : " << namaMenu << endl;
        cout << "Harga        : Rp " << harga << endl;
        cout << "Jumlah       : ";
        cin >> jumlah;

        if (jumlah <= 0) {
            cout << "Jumlah tidak valid!\n";
            continue;
        }

        int subtotal = harga * jumlah;
        total += subtotal;

        cout << "Subtotal     : Rp " << subtotal << endl;
        cout << "Pesanan berhasil ditambahkan!\n";
    }

    cout << "\n====================================\n";
    cout << "           STRUK PEMBAYARAN         \n";
    cout << "====================================\n";
    cout << "Total Belanja : Rp " << total << endl;
    cout << "------------------------------------\n";

    if (total > 0) {
        cout << "Uang Bayar    : Rp ";
        cin >> uang;

        if (uang < total) {
            cout << "Uang kurang! Transaksi belum selesai.\n";
        } else {
            kembalian = uang - total;

            cout << "Kembalian     : Rp " << kembalian << endl;
            cout << "====================================\n";
            cout << "    TERIMA KASIH TELAH BERBELANJA   \n";
            cout << "====================================\n";
        }
    } else {
        cout << "Tidak ada pesanan.\n";
    }

    return 0;
}
