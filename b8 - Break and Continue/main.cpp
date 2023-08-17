#include <iostream>

using namespace std;

int main()
{
    // Continue
    for (int i = 1; i < 11; i++){
        if (i == 7){
            continue; // Akan langsung ke atas lagi, skip code bawahnya
        }
        cout << i << endl;
    }

    cout << endl;

    int i = 1;
    while (i < 11){
        i++;
        if (i == 7){
            continue;
        }
        cout << i << endl;
    }

    cout << endl;

    // Break
    for (int i = 1; i < 11; i++){
        if (i == 7){
            break; // Akan berhenti ketika mencapai kondisi
        }
        cout << i << endl;
    }
    
    cout << endl;

    while (i < 11){
        i++;
        if (i == 7){
            break;
        }
        cout << i << endl;
    }

    return 0;
}