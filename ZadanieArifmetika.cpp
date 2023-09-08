#include <iostream>
#include <string>


using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
//определение переменных
    float a, b;
//запрос ввода пользователя
    cout << "Введите 2 числа с клавиатуры в формате 'a b': ";
    cin >> a >> b;
//арифметические действия
    cout << "Сложение" << endl;
    cout << a + b << endl;
    cout << "Вычитание" << endl;
    cout << a - b << endl;
    cout << "Умножение" << endl;
    cout << a * b << endl;
    cout << "Деление" << endl;
//проверка деления на ноль
    if (b != 0) { cout << a / b << endl; }
    else { cout << "На ноль не делим!" << endl; }
}
