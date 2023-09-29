#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	ofstream file;
	float str;
	float sum, enter;
	file.open("textfile.txt");
	cout << "Введите числа для записи в файл: "<< endl
		;
	for (int i = 0; i < 10; i++) {
		cin >> enter;
		if (cin.fail()) {
			cout << "Ошибка ввода. Было введено не число" << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			i--;
			continue;
		}
		file << enter << endl;
	}
	file.close();
	ifstream files("textfile.txt");
	if (files.is_open()) {
		sum = 0;
		while (files >> str) {
			sum += str;
		}
		cout <<"Сумма чисел = " << sum << endl;
		files.close();
	}
	else {
		cout << "Файл не был открыт из-за ошибки";
	}
}
