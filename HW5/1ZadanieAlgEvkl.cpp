#include <iostream>

using namespace std;

int NODVich(int num1, int num2) {
    while (num1 != num2) {
        if (num1 > num2) {
            num1 -= num2;
        }
        else {
            num2 -= num1;
        }
    }
    return num1;
}

int NODdel(int num1, int num2) {
    while (num2 != 0){
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    return num1;
}

int main() {
    setlocale(LC_ALL, "");
    int num1, num2;
    cout << "Введите два числа для нахождения НОД (num1 num2): ";
    cin >> num1 >> num2;
    cout << "Наибольший общий делитель (метод деления): " << NODdel(num1, num2) << "\nНаибольший общий делитель(метод вычитания): " << NODVich(num1, num2);
}
