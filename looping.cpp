#include <iostream>
using namespace std;

int angka;
int pilihan;

bool isPrima(int n) {
    if (n <= 1) return false;
    int i = 2;
    while (i * i <= n) {
        if (n % i == 0) return false;
        i++;
    }
    return true;
}

bool isFibonacci(int n) {
    int a = 0, b = 1, c = 0;
    while (c <= n) {
        if (c == n) return true;
        c = a + b;
        a = b;
        b = c;
    }
    return false;
}

void tampilPrima() {
    if (isPrima(angka))
        cout << angka << " adalah bilangan prima\n";
    else
        cout << angka << " bukan bilangan prima\n";
}

void inputAngka() {
    cout << "Masukkan angka: ";
    cin >> angka;
}

void tampilFibonacci() {
    if (isFibonacci(angka))
        cout << angka << " adalah bilangan Fibonacci\n";
    else
        cout << angka << " bukan bilangan Fibonacci\n";
}

void menu() {
    cout << "\n=== MENU ===\n";
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

            case 2:
                inputAngka();
                tampilFibonacci();
                break;

            case 0: return 0;
            default: cout << "Tidak valid\n";
        }
    }
}