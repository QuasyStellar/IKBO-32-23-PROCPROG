#include <iostream>
#include <string>
#include <cmath>


using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float S, p, n;		//определение переменых
	cout << "Введите сумму займа, процент и кол-во лет в формате 'S p n':";
	cin >> S >> p >> n; //получаем введенные данные
	if ((S > 0) and (n > 0) and (p>0)) {
		cout << "Месячная выплата m =" << (S * (p / 100) * pow((1 + (p / 100)), n)) / (12 * (pow((1 + (p / 100)), n) - 1));
	}
	else {
		cout << "Введены некорректные данные";
	}
}
