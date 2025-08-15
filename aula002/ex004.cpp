// 6) A lanchonete Gostosura vende apenas um tipo de sanduíche, cujo recheio
// inclui duas fatias de queijo, uma fatia de presunto e uma rodela de hambúrguer.
// Sabendo que cada fatia de queijo ou presunto pesa 50 gramas, e que a rodela
// de hambúrguer pesa 100 gramas, faça um algoritmo em que o dono forneça a
// quantidade de sanduíches a fazer, e a máquina informe as quantidades (em
// quilos) de queijo, presunto e carne necessários para compra.

#include <iostream>
using namespace std;

int main () {

    int quatHamburguer;

    float queijo = 100;
    float presunto = 50;
    float hamburguer = 100;

    cout << "Quantos hamburguers: ";
    cin >> quatHamburguer;

    
    cout << "Queijo: " <<(quatHamburguer * queijo) / 1000 << "kg" << endl;
    cout << "Presunto: " <<(quatHamburguer * presunto) / 1000 << "kg" << endl;
    cout << "Hamburguer: " <<(quatHamburguer * hamburguer) / 1000 << "kg" << endl;

    return 0;
}