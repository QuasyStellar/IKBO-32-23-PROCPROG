#include <iostream>
using namespace std;

int perestanovka(int arr[], int i, int n) {
    if (i == n) {
        for (int j = 0; j < n; j++) {
            if (arr[j] == j + 1) {
                return 1;
            }
        }
        return 0;
    }

    int sum = 0;
    for (int m = i; m < n; m++) {
        swap(arr[i], arr[m]);
        sum += perestanovka(arr, i + 1, n);
        swap(arr[i], arr[m]);
    }

    return sum;
}

int main() {
    setlocale(LC_ALL, "");
    int n;
    cout << "Введите количество шариков: ";
    cin >> n;

    int* balls = new int[n];

    for (int i = 0; i < n; i++) {
        balls[i] = i + 1;
    }
    int totalPermutations = perestanovka(balls, 0, n);
    cout << "Кол-во возможных перестановок: " << totalPermutations << endl;
}
