#include <iostream>

using namespace std;

int main()
{

    // Urutan Eksekusi sama seperti matematika pada umumnya.
    // Untuk menghasilkan angka koma, diperlukan salah satu variable float
    // Modulus tidak bisa float

    int a = 7;
    int b = 21;
    int hasil;

    // Operator +, -, *, /, %

    // Penjumlahan
    hasil = a+b;
    cout << "Penjumlahan" << endl;
    cout << a << " + " << b << " = " << hasil << "\n" << endl;

    // Pengurangan
    hasil = a-b;
    cout << "Pengurangan" << endl;
    cout << a << " - " << b << " = " << hasil << "\n" << endl;

    // Perkalian
    hasil = a*b;
    cout << "Perkalian" << endl;
    cout << a << " * " << b << " = " << hasil << "\n" << endl;
    
    // Pembagian
    hasil = b/a;
    cout << "Pembagian" << endl;
    cout << b << " / " << a << " = " << hasil << "\n" << endl;

    // Modulus (Pembagian Sisa)
    hasil = b%a;
    cout << "Modulus" << endl;
    cout << b << " % " << a << " = " << hasil << "\n" << endl;

    return 0;
}