#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "");
    int m, threes = 0, fours = 0;
    cout << "Введите кол-во лопастей: ";
    cin >> m;

    if (m % 4 == 0) {
        fours = m / 4;
    }
    else if (m % 4 == 3) {
        threes = 1;
        fours = (m - 3) / 4;
    }
    else if (m % 4 == 2) {
        threes = 2;
        fours = (m - 6) / 4;
    }
    else if (m % 4 == 1) {
        if (m >= 9) {
            threes = 3;
            fours = (m - 9) / 4;
        }
    }
    else {
        threes = 0;
        fours = 0;
    }
    cout << "Количество спиннеров с 3 лопастями и с 4 лопастями: " << threes << " " << fours << endl;
}
