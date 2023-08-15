#include <iostream>

using namespace std;

int main()
{
    int a;

    cout << "Insert a number : ";
    cin >> a;
    cout << a << endl;

    // If Statement
    if (a > 7) {
        cout << "Messi Fans" << endl;
    } else if (a <= 7) {
        cout << "Ronaldo Fans" << endl;
    }
    
    return 0;
}