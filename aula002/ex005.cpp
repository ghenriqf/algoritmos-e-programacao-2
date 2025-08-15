// 7) Faça um programa que calcula os gastos com combustível em uma viagem.
// O programa deve solicitar ao usuário a distância a ser percorrida em Km, o
// consumo do carro em Km/litro e o preço do litro do combustível. Como resposta
// o programa deverá informar qual o valor em R$ a ser gasto com combustível na
// viagem.

#include <iostream>
using namespace std;

int main () {

    float distancia, consumoCarro, precoLitro;

    cout << "Distancia em km: ";
    cin >> distancia;
    cout << "Consumo do carro km/l: ";
    cin >> consumoCarro;
    cout << "Preco do cobustivel por litro: ";
    cin >> precoLitro;

    float custo = (distancia/consumoCarro) * precoLitro;
    cout << "Custo da viagem: " << custo;

    return 0;
}