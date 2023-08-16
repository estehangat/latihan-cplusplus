#include <iostream>

using namespace std;

int main()
{
    cout << "\nLoop 1\n";
    for (int i = 1; i <= 2; i++){
        cout << i << endl;
    }

    cout << "\nLoop 2\n";
    for (int i = 1; i <= 10; i += 2){
        cout << i << endl;
    }

    cout << "\nLoop 3\n";
    for (int i = 1; i >= -5; i--){
        cout << i << endl;
    }

    cout << "\nLoop 4\n";
    int user = 0;
    for (int i = 1; i <= 10; i++){
        user += i;
        cout << i << " atau " << user << endl;
    }

    cout << "\nLoop 5\n";
    int total = 0;
    for (int i = 1; i <= 10; total += i, i++){ // Akan dieksekusi setelah statement
        cout << i << " atau " << total << endl;
    }

    cout << "\nLoop 6\n";
    int num = 0;
    for (int i = 1; i <= 10; i++, num += i){ // Akan dieksekusi setelah statement
        cout << i << " atau " << num << endl;
    }

    return 0;
}