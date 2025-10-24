#include <iostream>
using namespace std;

int main()
{
    cout << "Masukkan alas jajar genjang: ";
    int alas_jajar;
    cin >> alas_jajar;
    cout << "Masukkan tinggi jajar genjang: ";
    int tinggi_jajar;
    cin >> tinggi_jajar;
    cout << "Luas jajar genjang adalah: " << alas_jajar * tinggi_jajar << endl;
    return 0;
}