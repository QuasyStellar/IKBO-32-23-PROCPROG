#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>


using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	string str;
	cout << "Введите строку из 30 букв: ";    //dfghrtyrjtlkejlkdfjglkjdfgjkhy пример строки
	cin >> str;
	if (str.size() == 30) {
		sort(str.begin(), str.end());
		cout << str;
	}
	else {
		cout << "Длина строки не 30 символов";
	}
}
