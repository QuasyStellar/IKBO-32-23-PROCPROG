#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "");
	int n, m, ans = 0;
	cout << "Введите числа n и m 'n m': ";
	cin >> n >> m;
	for (int st = 0; st < n; st++) {
		for (int st2 = st; st2 < n; st2++) {
			for (int str = 0; str < m; str++) {
				for (int str1 = str; str1< m; str1++) {
					ans++;
				}
			}
		}
	}
	cout << "Кол-во прямоугольников: "<< ans << endl;
}
