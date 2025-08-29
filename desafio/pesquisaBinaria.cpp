#include <iostream>
using namespace std;

bool pesquisaBinaria(int num, int arr[], int tamanho) {
    int inicio = 0;
    int fim = tamanho - 1;

    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;

        if (arr[meio] == num) {
            return true;
        } else if (arr[meio] < num) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }
    return false;
}

int main() {
    int arr[5] = {2, 5, 8, 13, 25};
    int num;
    cout << "Digite um numero: ";
    cin >> num;

    if (pesquisaBinaria(num, arr, 5)) {
        cout << "Encontrado!" << endl;
    } else {
        cout << "Nao encontrado!" << endl;
    }
}
