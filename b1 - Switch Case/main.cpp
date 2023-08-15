#include <iostream>

using namespace std;

int main()
{
    int a;

    cout << "Insert a number : ";
    cin >> a;

    switch(a){ // Jika case atas benar, akan eksekusi case berikutnya semua
        case 7:
            cout << "Ronaldo is the G.O.A.T" << endl;
        default:
            cout << "I don't know that" << endl;
    }

    return 0;
}