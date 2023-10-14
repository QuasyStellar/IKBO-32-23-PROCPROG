#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	string str, enter;
	ofstream file;
	cout << "Введите текст для записи в файл: ";
	file.open("textfile.txt");
	getline(cin, enter);
	file << enter;
	file.close();
	ifstream files("textfile.txt");
	if (files.is_open()) {
		while (getline(files, str)) {
			cout << str << endl;
		}
		files.close();
	}
	else {
		cout << "Файл не был открыт из-за ошибки";
	}
}
