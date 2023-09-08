#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
//определение переменной
    string a;
//запрос ввода пользователя
    cout << "Введите ваше имя: ";
    cin >> a;
//вывод внесенных данных
    cout << "Ваше имя: " << a << endl;
}
