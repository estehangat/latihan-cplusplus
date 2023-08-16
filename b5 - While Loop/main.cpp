#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "Insert a number between 1-20 : ";
    cin >> a;

    // While
    while (a <= 20){
        cout << "Are you Messi Fans?" << endl;
        a += 1;
    }

    return 0;
}