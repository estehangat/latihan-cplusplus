#include <iostream>

using namespace std;

int main()
{
    // Increment, Decrement, Preincrement, Postincrement

    int a = 7;
    int b = 7;
    int d = 7;
    
    // Decrement
    cout << "Normal " << d << endl;
    cout << "Decrement " << d-- << endl; // Diprint dahulu baru ditambah
    cout << "Decrement " << --d << endl; // Ditambah dahulu baru diprint
    cout << "Decrement's " << d << "\n" << endl;
    
    // Postincrement
    cout << "\nNormal " << a << endl;
    cout << "Postincrement " << a++ << endl; // Diprint dahulu baru ditambah
    cout << "Postincrement's " << a << "\n" << endl;
    
    // Preincrement
    cout << "\nNormal " << b << endl;
    cout << "Preincrement " << ++b << endl; // Ditambah dahulu baru diprint
    cout << "Preincrement's " << b << "\n" << endl;
   
    return 0;
}