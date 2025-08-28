#include <iostream>
using namespace std;


#define TAMANHO 20

int main() {

    int arr[TAMANHO];

    for (int i = 0; i< TAMANHO; i++) {
        cout << "Digite o valor para posicao " << i << ": ";
        cin >> arr[i];
    }

    for(int i = 0; i< TAMANHO; i++) {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << " na posicao " << i << endl;
        }
    }

    return 0;
}