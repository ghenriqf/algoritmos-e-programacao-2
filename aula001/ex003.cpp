#include <iostream>
using namespace std;

int main() { 

    int matriz[5][5] = {
        {16,25,37,49,53},
        {31,52,10,43,39},
        {17,54,22,14,81},
        {29,43,44,65,90},
        {12,20,89,43,52}
    };

    for (int i = 0; i<5; i++) {
        cout << endl;
        for (int j = 0; j<5; j++) {
            cout << matriz[i][j] << "\t";
        }
    }

    return 0;
}