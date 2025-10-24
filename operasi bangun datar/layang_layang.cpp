#include <iostream>
using namespace std;

int main()
{
    cout << "Masukkan panjang diagonal utama layang-layang: ";
    int diagonal_utama_layang;
    cin >> diagonal_utama_layang;
    cout << "Masukkan panjang diagonal kedua layang-layang: ";
    int diagonal_kedua_layang;
    cin >> diagonal_kedua_layang;
    cout << "Luas layang-layang adalah: " << 0.5 * diagonal_utama_layang * diagonal_kedua_layang << endl;
    return 0;
}