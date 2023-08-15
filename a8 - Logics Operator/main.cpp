#include <iostream>

using namespace std;

int main()
{
    int a = 7;
    int b = 9;
    bool hasil;

    // Operator : not, and, or

    // Not (!)
    hasil = !(a == 7);
    cout << "Apakah a adalah angka 7? " << hasil << "\n" << endl;

    // And (& / &&) True jika keduanya True, sisanya False
    cout << "AND\n";
    hasil = (a == 7) and (b == 9); // True True
    cout << hasil << endl; // 1
    
    hasil = (a == 7) and (b == 1); // True False
    cout << hasil << endl; // 0
    
    hasil = (a == 1) and (b == 9); // False True
    cout << hasil << endl; // 0
    
    hasil = (a == 1) and (b == 1); // False False
    cout << hasil << endl; // 0
 
    // Or (| / ||) True jika ada True, sisanya False
    cout << "\nOR\n";
    hasil = (a == 7) or (b == 9); // True True
    cout << hasil << endl; // 1
    
    hasil = (a == 7) or (b == 1); // True False
    cout << hasil << endl; // 1
    
    hasil = (a == 1) or (b == 9); // False True
    cout << hasil << endl; // 1
    
    hasil = (a == 1) or (b == 1); // False False
    cout << hasil << endl; // 0

    return 0;
}