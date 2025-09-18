#include <iostream>
using namespace std;

void converterHora(int min, int* h, int* m) {

    if (min >= 60) {
        *h = min / 60;
        *m = min - (*h * 60);
    } else {
        *h = 0;
        *m = min;
    }
}

int main () {
    int minutos = 60;
    int horas, minutosConvertido;

    converterHora(minutos, &horas, &minutosConvertido);
    cout << horas << ":" << minutosConvertido;
}