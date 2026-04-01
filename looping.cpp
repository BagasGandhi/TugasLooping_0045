#include <iostream>
using namespace std;

int angka;
int pilihan;

void menu() {
    cout << "1. Prima\n2. Fibonacci\n0. Keluar\n";
    cout << "Pilih: ";
    cin >> pilihan;
}

int main() {
    while (true) {
        menu();
    }
}