#include <iostream>

int narayana(int n, int k) {
    if (n == 0 && k == 0) {
        return 1;
    }
    if (n == 0 || k == 0 || k == n + 1) {
        return 0;
    }
    return narayana(n - 1, k - 1) + narayana(n - 1, k) + narayana(n - 1, k + 1);
}

int main() {
    int n, k;
    std::cout << "Enter values for n and k: ";
    std::cin >> n >> k;

    std::cout << "Narayana(" << n << ", " << k << ") = " << narayana(n, k) << std::endl;

    return 0;
}
