#include <iostream>

using namespace std;

int main()
{
    // Rumus Fibonacci
    // f(n) = f(n-1) + f(n-2)
    
    int n;
    int fn;
    int fn1;
    int fn2;

    cout << "\nDeret Fibonacci" << endl;
    cout << "Masukkan Nilai (n) : ";
    cin >> n;

    fn1 = 1;
    fn2 = 0;
    fn = fn1 + fn2;
    cout << fn2 << " ";
    cout << fn << " ";
    for (int i = 1; i < n; i++){
        fn = fn1 + fn2;
        fn2 = fn1;
        fn1 = fn;
        cout << fn << " ";
    }

    cout << "\n" << endl;
    return 0;
}