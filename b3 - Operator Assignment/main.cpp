#include <iostream>

using namespace std;

int main()
{
    int a = 9;

    // Penjumlahan
    a += 3;
    cout << "Penjumlahan " << a << endl;

    // Pengurangan
    a -= 3;
    cout << "Pengurangan " << a << endl;

    // Perkalian
    a *= 3;
    cout << "Perkalian " << a << endl;

    // Pembagian
    a /= 3;
    cout << "Pembagian " << a << endl;

    // Modulus (Sisa Pembagian)
    a %= 3;
    cout << "Sisa " << a << endl;

    return 0;
}