#include <iostream>
#include <limits>

using namespace std;

int main()
{
    // Bilangan Bulat
    unsigned int a = 9; // 32 Bit
    long b = 7; // 64 Bit
    short c = 7; // 16 Bit

    // Bilangan Decimal
    float d = 4.0;
    double e = 2.5;

    // Character
    char f = 'p';

    // Boolean
    bool g = true;

    cout << "Nilai a adalah " << a;
    cout << "\nBesar dari a adalah " << sizeof(a) << " byte" << endl;
    cout << "Angka maksimum adalah " << numeric_limits<unsigned int>::max() << endl;
    cout << "Angka minimum adalah " << numeric_limits<unsigned int>::min() << endl;
    
    return 0; // Output : Nilai a adalah 9, Besar dari a adalah 4 byte
}