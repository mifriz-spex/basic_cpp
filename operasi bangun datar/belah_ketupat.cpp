#include <iostream>
using namespace std;

int main()
{
    cout << "Masukkan diagonal utama belah ketupat: ";
    int diagonal_utama;
    cin >> diagonal_utama;
    cout << "Masukkan diagonal kedua belah ketupat: ";
    int diagonal_kedua;
    cin >> diagonal_kedua;
    cout << "Luas belah ketupat adalah: " << 0.5 * diagonal_utama * diagonal_kedua << endl;
    return 0;
}