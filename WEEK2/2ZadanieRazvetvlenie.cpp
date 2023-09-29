#include <iostream>
#include <string>
#include <cmath>


using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float x, a;		//определение переменых
	cout << "Введите произвольные x и a в формате 'x a': "; //запрос ввода пользователя
	cin >> x >> a;
	if (abs(x) < 1 && x != 0) {
		cout << "Какой-то w =" << a * log(abs(x));
	}
	else if (x != 0 && not(a < pow(x, 2))) {			//исключаем получение корня из отрицательного числа 
		cout << "Какой-то w =" << sqrt(a - pow(x, 2));
	}
	else if ((a < pow(x, 2))){
		cout << "Корень из отрицательного числа";
	}
	else {
		cout << "Невозможно вычислить";
	}
}
