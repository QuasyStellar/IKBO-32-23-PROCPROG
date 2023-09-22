#include <iostream>
#include <string>


using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float n;		//определение переменых
	cout << "Введите произвольное число N: "; //запрос ввода пользователя
	cin >> n;
	n = round(n);
	if (n>=0){ // исключаем вывод не натуральных чисел
	for (int i = n; i <= n + 9; i++) { cout << i << endl; } //цикл с выводом чисел
	}
	else {
		for (int i = 1; i <= 10; i++) { cout << i << endl; // вывод первых 10 чисел, если N отрицательное}
	}
}
