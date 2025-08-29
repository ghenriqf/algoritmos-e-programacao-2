#include <iostream>
using namespace std;

struct Data {
    int dia, mes, ano;
};

bool anoBissexto(int ano) {
    if (ano % 400 == 0) {
        return true;
    }
    else if (ano % 4 == 0 && ano % 100 != 0) {
        return true;
    } else {
        return false;
    }
}

void validarData (int dia, int mes, int ano) {

    if (mes > 12 || mes < 1) {
        cout << "Data invalida";
    } else if (dia < 31 && mes != 4 && mes != 2 && mes != 6 && mes != 9) {
        cout << "Data invalida";
    } else if (mes == 2 && anoBissexto(ano) && dia == 29) {
        cout << "Data valida";
    } else if (dia > 31) {
        cout << "Data invalida";
    } else {
        cout << "Data valida";
    }
}

int main () {

    Data dataUsuario;

    cout << "INFORME UMA DATA" << endl << "Dia: ";
    cin >> dataUsuario.dia;

    cout << "Mes: ";
    cin >> dataUsuario.mes;

    cout << "Ano: ";
    cin >> dataUsuario.ano;
    
    validarData(dataUsuario.dia,dataUsuario.mes,dataUsuario.ano);

}