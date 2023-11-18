#include <iostream>

using namespace std;

int hanoi(int n, int from, int to, int temp) {
    if (n == 1) {
        cout << from << " => " << to << " | ";
        return 1;
    }
    else {
        int moves = 0;
        moves += hanoi(n - 1, from, temp, to);
        cout << from << " => " << to << " | ";
        moves += hanoi(n - 1, temp, to, from);
        return moves + 1;
    }
}

int main() {
    int n;
    setlocale(LC_ALL, "");
    cout << "Введите количество колец: ";
    cin >> n;
    int total_moves = hanoi(n, 1, 3, 2);
    cout << endl;
    cout << "Общее количество перемещений: " << total_moves << endl;
}
