#include<iostream>

using namespace std;
int findNN(int n, int k){
    int C[n + 1][k + 1];
    for (int i = 0; i <= n; i++){
        for (int j = 0; j <= min(i, k); j++){
            if (j == 0 || j == i){
                C[i][j] = 1;
                }
            else{
                C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
                }
        }
    }
    return (C[n][k] * C[n][k - 1]) / n;
}


int main() {
    setlocale(LC_ALL, "");
    int n, m;
    cout << "Введите начало и конец интервала: ";
    cin >> m >> n;
    for (int i = m; i<=n; i++){
         for (int j = 0; j<=i; j++){
            cout << findNN(i, j) << " ";
        }
        cout << endl;
    }
}
