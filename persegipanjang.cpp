#include <iostream>
using namespace std;

int main()
{
    int p, l;
    cout << "Input panjang: ";
    cin >> p;
    cout << "Input lebar: ";
    cin >> l;
    cout << "Luas persegi panjang adalah: " << p * l << endl;
    cout << "Keliling persegi panjang adalah: " << (2 * p) + (2 * l) << endl;
    return 0;
}