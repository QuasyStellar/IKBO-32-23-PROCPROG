#include <iostream>

using namespace std;

int fib(int k) {
    if (k == 0) {
        return 0;
    }
    else if (k == 1) {
        return 1;
    }
    else {
        return fib(k - 1) + fib(k - 2);
    }
}

int main() {
    setlocale(LC_ALL, "");
    int k;
    cout << "Введите значение k: ";
    cin >> k;
    cout << "k-е число Фибоначчи: " << fib(k-1) << endl;
}
