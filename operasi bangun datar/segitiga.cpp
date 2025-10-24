#include <iostream>
using namespace std;

int main()
{
    cout << "Masukkan alas segitiga: ";
    int alas, tinggi;
    cin >> alas;
    cout << "Masukkan tinggi segitiga: ";
    cin >> tinggi;
    cout << "Luas segitiga adalah: " << 0.5 * alas * tinggi << endl;
    return 0;
}