#include <iostream>
#include <string>
#include <cmath>


using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float x, y, b;		//определение переменых
	cout << "Введите произвольные x, y, b в формате 'x y b': "; //запрос ввода пользователя
	cin >> x >> y >> b;
	if ((b - y > 0) && (b - x >= 0)) {   //иселючаем логарифм нуля и корень из отрицательного числа
		cout << "Z =" << log(b - y) * sqrt(b - x);
	}
	else if(b - y <= 0){
		cout << "Невозможно вычислить, т.к логарифм 0";
	}
	else{
		cout << "Невозможно вычислить, т.к корень из отрицательного числа";
	}
