#include <iostream>
#include <cmath>

using namespace std;

int fun1(int x)
{
    int y;
    y = (1 + (rand() % 6)) + x;
    return y;
}

int fun2(int x)
{
    int y;
    y = x;
    return y;
}

int main()
{
    int input, input1, ans, ans1;
    cout << "Angka asal juga ";
    cin >> input;

    ans = fun1(input);
    cout << "adalah " << ans << endl;

    cout << "Kemudian dikali ";
    cin >> input1;
    ans1 = ans * fun2(input1);
    cout << "adalah " << ans1 << endl;
    
    return 0;
}