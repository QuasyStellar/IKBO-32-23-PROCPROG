#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "");
    int m, n;
    cout << "Введите значение m и n: ";
    cin >> m >> n;

    int x = 0;
    int y = 0;

    for (int x1 = 0; x1 < n; x1++) {
        x += n - x1;
    }
    for (int y1 = 0; y1 < m; y1++) {
        y += m - y1;
    }

    cout << "Результат: " << x * y << endl;
}
