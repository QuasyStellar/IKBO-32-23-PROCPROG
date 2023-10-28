#include <iostream>
#include <cmath>
using namespace std;

int inds(int n) {
	if (n > 36) {
		return 8 - (n - 37) / 2;
	}
	else {
		return (n - 1) / 4;
	}
}

int main() {
    setlocale(LC_ALL, "");
	int kupe[9];
	int N, m, result = 0, temp = 0;
	cout << "Введите кол-во свободных мест: ";
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> m;
		kupe[inds(m)] += 1;
	}
	for (int i = 0; i < 9; i++) {
		if (kupe[i] == 6) {
			temp += 1;
			if (result > temp){
				result = temp;
			}
		}
		else {
			temp = 0;
		}
	}
	cout << "Макс. число идущих подряд свободных купе: "<<result << endl;
}
