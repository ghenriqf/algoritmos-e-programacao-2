// 5) João recebeu seu salário de R$ 1200,00 e precisa pagar duas contas (C1=R$
// 200,00 e C2=R$120,00) que estão atrasadas. Como as contas estão atrasadas,
// João terá de pagar multa de 2% sobre cada conta. Faça um algoritmo que calcule
// e mostre quanto restará do salário do João.

#include <iostream>
using namespace std;

int main () {
    float salario = 1200;
    float c1 = 200;
    float c2 = 120;
    float multa = 0.02;

    c1 = c1 + (c1 * multa);
    c2 = c2 + (c2 * multa);

    salario = salario - (c1 + c2);

    cout << salario;

    return 0;
}