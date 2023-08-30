#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Insert length of the Triangle : ";
    cin >> n;

    cout << "\nPola 1\n" << endl;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }

    cout << "\nPola 2\n" << endl;
    for (int i = 1; i <= n; i++){
        for (int j = n; j >= i; j--){
            cout << "*";
        }
        cout << endl;
    }

    cout << "\nPola 3\n" << endl;
    for (int i = 1; i <= n; i++){
        for(int j = 1; j < i; j++){
            cout << " ";
        }
        for(int k = n; k >= i; k--){
            cout << "*";
        }
        cout << endl;
    }

    cout << "\nPola 4\n" << endl;
    for (int i = 1; i <= n; i++){
        for(int j = n; j > i; j--){
            cout << " ";
        }
        for(int k = 1; k <= i; k++){
            cout << "*";
        }
        cout << endl;
    }
    
    cout << "\nPola 5\n" << endl;
    for (int i = 1; i <= n; i++){
        for(int j = n; j > i; j--){
            cout << " ";
        }
        for(int k = 1; k <= (2*i-1); k++){
            cout << "*";
        }
        cout << endl;
    }
    
    cout << "\nPola 6\n" << endl;
    for (int i = 1; i <= n; i++){
        for(int j = 1; j < i; j++){
            cout << " ";
        }
        for(int k = n; k >= (2*i-n); k--){
            cout << "*";
        }
        cout << endl;
    }

    cout << "\nPola 7\n" << endl;
    for (int i = 1; i <= n; i++){
        for(int j = n; j > i; j--){
            cout << " ";
        }
        for(int k = 1; k <= (2*i-1); k++){
            cout << "*";
        }
        cout << endl;
    }
    
    for (int i = 2; i <= n; i++){
        for(int j = 1; j < i; j++){
            cout << " ";
        }
        for(int k = n; k >= (2*i-n); k--){
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}