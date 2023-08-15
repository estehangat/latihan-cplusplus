#include <iostream>

using namespace std;

int main()
{
    int a = 7;
    int b = 9;

    bool hasil1, hasil2;

    // Komparasi, Relation Expression
    // 1 = True, 0 = False
    
    // Sebanding
    hasil1 = (a == b);
    // Tidak Sebanding
    hasil2 = (a != b);

    cout << "Sebanding " << hasil1 << endl;
    cout << "Tidak Sebanding " << hasil2 << endl;

    // Kurang Dari
    hasil1 = (a < b);
    // Lebih Dari
    hasil2 = (a > b);

    cout << "Kurang Dari " << hasil1 << endl;
    cout << "Lebih Dari " << hasil2 << endl;

    // Kurang Dari Sama Dengan
    hasil1 = (a <= b);
    // Lebih Dari Sama Dengan
    hasil2 = (a >= b);

    cout << "Kurang Dari Sama Dengan " << hasil1 << endl;
    cout << "Lebih Dari Sama Dengan" << hasil2 << endl;

    cin.get();
    return 0;
}