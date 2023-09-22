#include <iostream>
#include <fstream>
#include <string>
#include <cmath>


using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	ofstream file;
	string str, ans, enter;
	file.open("textfile.txt");
	cout << "Введите текст для записи в файл: ";
	getline(cin, enter);
	file << enter;
	file.close();
	ifstream files("textfile.txt");
	if (files.is_open()) {
		while (getline(files, str)) {
			ans = "";
			for (int i = 0; i < str.size(); i++) {
				if (isdigit(str[i])) {
					ans += str[i];
				}
			}
			cout << ans << endl;
		}
		files.close();
	}
	else {
		cout << "Файл не был открыт из-за ошибки";
	}
}
