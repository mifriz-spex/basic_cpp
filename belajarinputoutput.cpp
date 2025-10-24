#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a, b; // deklarasi variabel a dan b
    double c; // deklarasi bilangan pecahan
    string nama;
    cout << "Input nama anda: ";
    getline(cin, nama);
    cout << "Nama anda adalah: " << nama << endl;
    cout << "Input bilangan pertama : ";
    cin >> a;
    cout << "Anda barusan mengetik: " << a << endl;
    cout << "Input bilangan pecahan: ";
    cin >> c;
    cout << "Anda mengetik: " << c << endl;
    return 0;
}