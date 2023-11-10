#include <iostream>

using namespace std;


int main() {
    int m, n;
    setlocale(LC_ALL, "");
    cout << "Введите начало интервала и конец: ";
    cin >> m >> n;
    cout << "Совершенные числа в интервале " << m << ", " << n << ":" << endl;
    for (int i = m; i <= n; ++i) {
        int sum = 1;
        for (int su = 2; su <= i / 2; ++su) {
            if (i % su == 0) {
                sum += su;
            }
        }
        if (sum == i && i != 1) {
            cout << i << endl;
        }
    }
}
