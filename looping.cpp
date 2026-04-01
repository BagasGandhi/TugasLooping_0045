#include <iostream>
using namespace std;

int angka;
int pilihan;

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
            case 1: break;
            case 2: break;
            case 0: return 0;
            default: cout << "Tidak valid\n";
        }
    }
}