#include <iostream>
using namespace std;

int main () {
    int* ponteiro;
    int a = 1;

    ponteiro = &a;

    cout << *ponteiro << endl;
    cout << ponteiro;

}