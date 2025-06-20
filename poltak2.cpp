#include <iostream>
using namespace std;

// Prototipe fungsi
void cekBilangan(int nilai);
char tanyaUlang();

int main() {
    int nilai;
    char ulang;

    do {
        cout << "Masukkan nilai = ";
        cin >> nilai;

        cekBilangan(nilai); // Panggil fungsi dengan parameter

        ulang = tanyaUlang(); // Fungsi untuk tanya ulang
    } while (ulang == 'Y' || ulang == 'y');

    return 0;
}

// Fungsi untuk mengecek bilangan ganjil/genap
void cekBilangan(int nilai) {
    if (nilai % 2 == 0)
        cout << "---Bilangan Genap---" << endl;
    else
        cout << "---Bilangan Ganjil---" << endl;
}

// Fungsi untuk menanyakan input ulang
char tanyaUlang() {
    char jawab;
    cout << "\nIngin input lagi [Y/T]: ";
    cin >> jawab;
    return jawab;
}
