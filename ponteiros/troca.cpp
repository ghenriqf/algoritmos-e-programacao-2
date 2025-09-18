#include <iostream>
using namespace std;

void troca (int* i, int* j) {
    int temp;
    temp = *i;
    *i = *j;
    *j = temp;
}

int main () {
    int x = 1, y = 2;

    cout << x << " " << y << endl;
    troca(&x,&y);
    cout << x << " " << y;
}