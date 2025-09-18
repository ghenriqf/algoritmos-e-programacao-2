// 11) A turma C é composta de 60 alunos, e a turma D de 20 alunos. Escreva um
// algoritmo que leia o percentual de alunos reprovados na turma C, o percentual
// de aprovados na turma D, calcule e escreva:
// a) O número de alunos reprovados na turma C.
// b) O número de alunos reprovados na turma D.
// c) A percentagem de alunos reprovados em relação ao total de alunos das duas
// turmas.

#include <iostream>
using namespace std;

int main () {

    int turma1 = 60;
    int turma2 = 20;

    float reprovadosTurma1;
    float reprovadosTurma2;

    cout << "% de reprovados na turma 1: ";
    cin >> reprovadosTurma1;

    cout << "% de reprovados na turma 2: ";
    cin >> reprovadosTurma2;

    reprovadosTurma1 = turma1 * (reprovadosTurma1 / 100);
    reprovadosTurma2 = turma2 * (reprovadosTurma2 / 100);
    int reprovadosTotal = 100 - ((turma1 + turma2) - (reprovadosTurma1 + reprovadosTurma2));

    cout << reprovadosTurma1 << " alunos reprovados na turma 1" << endl;
    cout << reprovadosTurma2 << " alunos reprovados na turma 2" << endl;
    cout << reprovadosTotal << "% alunos reprovados no total" << endl;

    return 0;
}