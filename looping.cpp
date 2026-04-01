#include <iostream>
using namespace std;

int angka;
int pilihan;

bool isPrima(int n) {
    if (n <= 1) return false;
    int i = 2;
    while (i < n) {
        if (n % i == 0) return false;
        i++;
    }
    return true;
}

void tampilPrima() {
    if (isPrima(angka))
        cout << "Prima\n";
    else
        cout << "Bukan Prima\n";
}

void inputAngka() {
    cout << "Masukkan angka: ";
    cin >> angka;
}

void menu() {
    cout << "1. Prima\n2. Fibonacci\n0. Keluar\n";
    cout << "Pilih: ";
    cin >> pilihan;
}

int main() {
    while (true) {
        menu();

        switch (pilihan) {
            case 1:
                inputAngka();
                tampilPrima();
                break;
            case 2: break;
            case 0: return 0;
            default: cout << "Tidak valid\n";
        }
    }
}