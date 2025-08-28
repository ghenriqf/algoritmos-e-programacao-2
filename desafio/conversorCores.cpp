#include <iostream>
#include <algorithm>
using namespace std;


void conversor (float r, float g, float b, float &h, float &s, float &v) {

    r = r / 255.0f;
    g = g / 255.0f;
    b = b / 255.0f;

    float maximo = max({r,g,b});
    float minimo = min({r,g,b});
    float delta = maximo - minimo;

    if (delta == 0) {
        h = 0;
    }
    else if (maximo == r){
        h = 60 * ((g - b)/ delta);
    }
    else if (maximo == r){
        h = 60 * ((b - r)/ delta + 2);
    }
    else if (maximo == r){
        h = 60 * ((r - g)/ delta + 4);
    }

    if (maximo == 0) {
        s = 0;
    } else {
        s = delta / maximo;
    }
    
    v = maximo;
    
}


int main () {

    float h,s,v;

    conversor(66,28,10,h,s,v);
    cout << h << endl << s  << endl << v;
}