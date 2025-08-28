#include <iostream>
using namespace std;

bool pesquisaBinaria(int num,int arr[5]) {
    int tamanho = sizeof(arr); 
    int maior = arr[tamanho];
    int menor = arr[0];
    int meio = (maior + menor) / 2;

    while(true) {
        if (num > meio) {
            menor = meio;
            meio = (maior + menor) / 2;
        } else if (num < meio) {
            maior = meio;
            meio = (menor + maior) / 2;
        } else if (num == meio) {
            return true;    
        }
    }
}

int main () {
    int arr[5] = {2,5,8,13,25};
    int num;
    cout << ":";
    cin >> num;
    cout << (pesquisaBinaria(num,arr));
}