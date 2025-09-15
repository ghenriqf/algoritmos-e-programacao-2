#include <iostream>
using namespace std;

int fibonacci (int n) {
    if (n == 0 ) return 0;
    if (n == 1 ) return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main () {
    int num;

    cout << "informe o valor: ";
    cin >> num;

    for (int i = 0; i<num; i++) {
        if (i == 1) cout << 1;

        cout << fibonacci(i);
    }

    return 0;
}