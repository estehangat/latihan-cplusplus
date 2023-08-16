#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "Insert a number between 1-20 : ";
    cin >> a;

    // Do While Loop
    do {
        cout << "Ronaldo is the GOAT " << a << endl; // Minimal sekali dieksekusi
        a++;
    } while (a <= 20);
    
    return 0;
}