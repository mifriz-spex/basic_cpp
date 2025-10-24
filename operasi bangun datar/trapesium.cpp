#include <iostream>
using namespace std;

int main()
{
    cout << "Masukkan alas trapesium: ";
    int alas_trapesium;
    cin >> alas_trapesium;
    cout << "Masukkan tinggi trapesium: ";
    int tinggi_trapesium;
    cin >> tinggi_trapesium;
    cout << "Masukkan sisi atas trapesium: ";
    int sisi_atas_trapesium;
    cin >> sisi_atas_trapesium;
    cout << "Masukkan sisi bawah trapesium: ";
    int sisi_bawah_trapesium;
    cin >> sisi_bawah_trapesium;
    cout << "Luas trapesium adalah: " << 0.5 * (sisi_atas_trapesium + sisi_bawah_trapesium) * tinggi_trapesium << endl;
    return 0;
}