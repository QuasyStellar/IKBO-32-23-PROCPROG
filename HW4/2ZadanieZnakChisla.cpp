#include <iostream>
#include <string>


using namespace std;


string znakfunc(float x) {
    if (x > 0) {
        return " положительное.";
    }
    else if (x == 0) {
        return " равно нулю.";
    }
    else {
        return " отрицательное.";
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    float num;
    cout << "Введите число для определения его знака: ";
    cin >> num;
    string sign = znakfunc(num);
    cout << "Число " << num << sign << endl;
}
