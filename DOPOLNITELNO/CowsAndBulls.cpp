#include <iostream>
#include <ctime>

using namespace std;

int generate() {
    int number;
    do {
        number = rand() % 9000 + 1000;
    } while (!((number / 1000 != (number / 100) % 10) && ((number / 1000) != (number / 10) % 10) && ((number / 1000) != number % 10) && ((number / 100) % 10 != (number / 10) % 10) && ((number / 100) % 10 != number % 10) && ((number / 10) % 10 != number % 10)));
    return number;
}

bool isval(int num) {
    int digits[10] = { 0 };
    for (int i = 0; i < 4; ++i) {
        int digit = num % 10;
        if (digits[digit]== 1)
            return false;
        digits[digit] += 1;
        num /= 10;
    }
    return true;
}

int main() {
    setlocale(LC_ALL, "");
    srand(time(0));
    int secretNumber = generate();
    int attempts = 0;
    int userGuess = 0;
    cout << "Компьютер задумал четырехзначное число без повторяющихся цифр." << endl;
    while (true and userGuess != 1234) {
        do {
            cout << "Введите вашу догадку: ";
            cin >> userGuess;

            if (!isval(userGuess)) {
                cout << "Пожалуйста, введите корректное четырехзначное число без повторяющихся цифр." << endl;
            }

        } while (!isval(userGuess));

        int bulls = 0, cows = 0, secret, guess;
        secret = secretNumber;
        guess = userGuess;
        for (int i = 0; i < 4; ++i) {
            int secretDigit = (secret % 10);
            int guessDigit = (guess % 10);

            if (secretDigit == guessDigit) {
                bulls++;
            }
            else if (guessDigit == secretNumber % 10 or guessDigit == (secretNumber/10) % 10 or guessDigit == secretNumber/100 % 10 or guessDigit == secretNumber/1000 % 10) {
                cows++;
            }

            secret /= 10;
            guess /= 10;
        }
        if (bulls == 4) {
            cout << "Поздравляем! Вы угадали число " << secretNumber << " за " << attempts << " попыток." << endl;
            break;
        }
        else {
            cout << "Результат: " << bulls << " угаданы и на нужном месте " << cows << " угаданы, но не на том месте" << endl;
            attempts++;
        }
    }
    cout << secretNumber;
}
