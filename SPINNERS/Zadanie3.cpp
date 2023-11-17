#include <iostream>
using namespace std;
int main() {
    setlocale(0, "");
    long long int llnN, llnM;
    cout << "Введите N и M: \n"; cin >> llnN >> llnM;
    if (llnN > 0 and llnM > 0 and llnN <= 75000 and llnM <= 75000) {
        long long int llnRectangles = (llnN * (llnN + 1) / 2) * (llnM * (llnM + 1) / 2);
        cout << llnRectangles << endl;
    }
    else {
        cout << "Ошибка ввода...";
    }
}
