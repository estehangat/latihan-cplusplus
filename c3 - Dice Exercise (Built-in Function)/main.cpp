#include <iostream>
#include <cstdlib> // Mengandung fungsi random

using namespace std;

// Latihan Membuat Dadu Acak

int main()
{
    char cont;
    while(true){
        cout << "Wanna throw a dice? (y/n) ";
        cin >> cont;
        
        if (cont == 'y'){
            cout << 1 + (rand() % 6) << endl;
        } else if (cont == 'n'){
            break;
        } else {
            cout << "You type the wrong key, Please try again" << endl;
        }
    }
    
    return 0;
}