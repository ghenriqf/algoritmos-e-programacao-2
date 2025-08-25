// 3) Faça um algoritmo para calcular quantas ferraduras são necessárias para
// equipar todos os cavalos comprados para um haras. 

#include <iostream>
using namespace std;

int main () {
    int quantidadeCavalos;

    cout << "Quantos cavalos: ";
    cin >> quantidadeCavalos;

    int ferraduras = quantidadeCavalos * 4;

    cout << "Sao necessarias " << ferraduras << " ferraduras";

    return 0;
}