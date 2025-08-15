// 8) O sistema de avaliação de determinada disciplina, é composto por três provas.
// A primeira prova tem peso 2, a segunda tem peso 4 e a terceira prova tem peso
// 6. Faça um programa que solicita as notas para o aluno, calcula e exibe a média
// final deste aluno.


#include <iostream>
using namespace std;

int main () {

    float n1, n2, n3, media;

    cout << "Nota 1: ";
    cin >> n1;
    cout << "Nota 2: ";
    cin >> n2;
    cout << "Nota 3: ";
    cin >> n3;

    n1 *= 2;
    n2 *= 4;
    n3 *= 6;

    media = (n1 + n2 + n3) / 12;
    cout << "Media: " << media;

    return 0;
}