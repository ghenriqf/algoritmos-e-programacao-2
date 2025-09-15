#include <iostream>
using namespace std;

void fibonacci(int n) {

    int sucessor = 0;
    int antecessor = 1;
    int atual = 0;

    for (int i = 0; i<n; i++) {

        if (i == 1) {
            cout << 1 << " ";
        }

        cout << atual << " ";

        atual = sucessor + antecessor;
        antecessor = sucessor;
        sucessor = atual;
    }

}

int main () {

    fibonacci(5);

    return 0;
}