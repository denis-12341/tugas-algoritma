#include <iostream>
using namespace std;

// Prototipe fungsi
void garis();

// Fungsi utama
int main() {
    garis(); // cetak garis pertama
    cout << "AMIK BSI - Pondok Labu" << endl;
    garis(); // cetak garis kedua
    return 0;
}

// Definisi fungsi untuk mencetak garis
void garis() {
    for (int i = 0; i < 28; i++) {
        cout << "-";
    }
    cout << endl;
}


