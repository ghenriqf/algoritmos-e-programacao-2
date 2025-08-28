#include <iostream>
using namespace std;

struct Data {
    int dia, mes, ano;
};

int main () {
    
    Data dataUsuario;

    cout << "INFORME UMA DATA" << endl << "Dia: ";
    cin >> dataUsuario.dia;

    cout << "Mes: ";
    cin >> dataUsuario.mes;

    cout << "Ano: ";
    cin >> dataUsuario.ano;

    
}