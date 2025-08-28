#include <iostream>
using namespace std;

struct Horario {
    int hora, min, seg;

    Horario(int h, int m, int s) {
        hora = h;
        min = m;
        seg = s;
    }
};

void somaHoras (Horario hor1, Horario hor2) {
    if (hor1.hora > 23 || hor2.hora > 23) {
        cout << "Erro, valor da hora invalido!";
        return;
    } else if (hor1.min > 59 || hor2.min > 59){
        cout << "Erro, valor da hora invalido!";
        return;
    } else if (hor1.seg > 59 || hor2.seg > 59) {
        cout << "Erro, valor da hora invalido!";
        return;
    }
    int somaHor, somaSeg, somaMin, dias =0;

    somaHor = hor1.hora + hor2.hora;
    somaMin = hor1.min + hor2.min;
    somaSeg = hor1.seg + hor2.seg;

    if (somaSeg >= 60) {
        somaMin+= 1;
        somaSeg-= 60;
    }
    if (somaMin >= 60) {
        somaMin-= 60;
        somaHor+= 1;
    }
    if (somaHor >= 23) {
        dias+=1;
        somaHor -= 24;
    }

    if (dias == 0) {
        if (somaMin < 10) {
            cout << somaHor << ':' << '0' << somaMin << ':' << somaSeg;
        } else {
            cout << somaHor << ':' << somaMin << ':' << somaSeg;
        }
    } else {
        if (somaMin < 10) {
            cout << dias << ':' << somaHor << ':' << '0' << somaMin << ':' << somaSeg;
        } else {
            cout << dias << ':' << somaHor << ':' << somaMin << ':' << somaSeg;
        }
    }
}

int main () {

    Horario hor1(23,45,35);
    Horario hor2(23,20,40);

    somaHoras(hor1,hor2);


    return 0;
}