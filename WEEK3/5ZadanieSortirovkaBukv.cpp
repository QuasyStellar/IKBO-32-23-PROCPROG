#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	string str;
	cout << "Введите строку: ";    //dfghrtyrjtlkejlkdfjglkjdfgjkhy пример строки
	cin >> str;
	for (int i = 0; i < str.size() - 1; i++) {
		for (int j = str.size() - 1; j > i; j--) {
			if (str[j] < str[j - 1]) {
				swap(str[j], str[j - 1]);
			}
		}
	}
	cout << str;
}
