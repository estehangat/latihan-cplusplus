#include <iostream>

using namespace std;

int main()
{
    float a,b,hasil;
    char aritmatika;

    cout << "\nC A L C U L A T O R" << endl;

    // Input dari user
    cout << "Insert a number \t\t\t: ";
    cin >> a;

    cout << "Choose an operation (+, -, *, /) \t: ";
    cin >> aritmatika;

    cout << "Insert a number \t\t\t: ";
    cin >> b;

    cout << "\n";
    cout << a << " " << aritmatika << " " << b;

    if (aritmatika == '+'){
        hasil = a + b;
    } else if (aritmatika == '-'){
        hasil = a - b;
    } else if (aritmatika == '*'){
        hasil = a * b;
    } else if (aritmatika == '/'){
        hasil = a / b;
    } else {
        cout << "You type the wrong character, please try again" << endl;
    }

    cout << " = " << hasil;
    cout << "\n" << endl;

    return 0;
}