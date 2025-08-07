#include <iostream>
using namespace std;

#define TAMANHO 5

int main() {

    int arr[TAMANHO];

    for (int i = 0; i<TAMANHO; i++) {
        cout << "arr[" << i << "]" << " = ";
        cin >> arr[i];
    }

    for (int i = TAMANHO-1; i>-1; i--) {
        cout << arr[i] << " ";
    }

    return 0;
}