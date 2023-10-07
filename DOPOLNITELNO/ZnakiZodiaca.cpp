#include<iostream>
#include <cmath>

using namespace std;

int main()
{
    double y, d, m;
    cout << "вводите числа в формате y m d, не спользуйте незначащие нули в левой части числа" << endl;
    cout << "Введите год рождения: ";
    cin >> y;
    
    if (y > 0 && round(y) == y) {
        if ((y / 4 == 0 && y / 100 != 0) || (y / 400 == 0) || (y == 2000)) {
            cout << "вводи месяц";
            cin >> m;
            if (m > 0 && m < 13 && round(m) == m){
                switch(int(m)){
                    case 1:
                    cout << "вводи день";
                    cin >> d;
                    if (round(d) == d && (d >= 20 && d <= 31)){
                        cout << "водолей 20.01-18.02";
                    }
                    else if (round(d) == d && (d >= 1 && d <= 19)){
                        cout << "козерог 22.12-19.01";
                    }
                    else {
                        cout << "error.uwu";
                    }
                    break;
                    case 2:
                    cout << "вводи день";
                    cin >> d;
                    if (round(d) == d && (d >= 19 && d <= 29)){
                        cout << "рыбы 19.02-20.03";
                    }
                    else if (round(d) == d && (d >= 1 && d <= 18)){
                        cout << "водолей 20.01-18.02";
                    }
                    else {
                        cout << "error.uwu";
                    }
                    break;
                    case 3:
                    cout << "вводи день";
                    cin >> d;
                    if (round(d) == d && (d >= 21 && d <= 31)){
                        cout << "овен 21.03-19.04";
                    }
                    else if (round(d) == d && (d >= 1 && d <= 20)){
                        cout << "рыбы 19.02-20.03";
                    }
                    else {
                        cout << "error.uwu";
                    }
                    break;
                    case 4:
                    cout << "вводи день";
                    cin >> d;
                    if (round(d) == d && (d >= 20 && d <= 30)){
                        cout << "телец 20.04-20.05";
                    }
                    else if (round(d) == d && (d >= 1 && d <= 19)){
                        cout << "овен 21.03-19.04";
                    }
                    else {
                        cout << "error.uwu";
                    }
                    break;
                    case 5:
                    cout << "вводи день";
                    cin >> d;
                    if (round(d) == d && (d >= 21 && d <= 31)){
                        cout << "близнецы 21.05-21.06";
                    }
                    else if (round(d) == d && (d >= 1 && d <= 20)){
                        cout << "телец 20.04-20.05";
                    }
                    else {
                        cout << "error.uwu";
                    }
                    break;
                    case 6:
                    cout << "вводи день";
                    cin >> d;
                    if (round(d) == d && (d >= 22 && d <= 30)){
                        cout << "рак 22.06-22.07";
                    }
                    else if (round(d) == d && (d >= 1 && d <= 21)){
                        cout << "близнецы 21.05-21.06";
                    }
                    else {
                        cout << "error.uwu";
                    }
                    break;
                    case 7:
                    cout << "вводи день";
                    cin >> d;
                    if (round(d) == d && (d >= 23 && d <= 31)){
                        cout << "лев 23.07-22.08";
                    }
                    else if (round(d) == d && (d >= 1 && d <= 22)){
                        cout << "рак 22.06-22.07";
                    }
                    else {
                        cout << "error.uwu";
                    }
                    break;
                    case 8:
                    cout << "вводи день";
                    cin >> d;
                    if (round(d) == d && (d >= 23 && d <= 31)){
                        cout << "дева 23.08-22.09";
                    }
                    else if (round(d) == d && (d >= 1 && d <= 22)){
                        cout << "лев 23.07-22.08";
                    }
                    else {
                        cout << "error.uwu";
                    }
                    break;
                    case 9:
                    cout << "вводи день";
                    cin >> d;
                    if (round(d) == d && (d >= 23 && d <= 30)){
                        cout << "весы 23.09-22.10";
                    }
                    else if (round(d) == d && (d >= 1 && d <= 22)){
                        cout << "дева 23.08-22.09";
                    }
                    else {
                        cout << "error.uwu";
                    }
                    break;
                    case 10:
                    cout << "вводи день";
                    cin >> d;
                    if (round(d) == d && (d >= 23 && d <= 31)){
                        cout << "скорпион 23.10-21.11";
                    }
                    else if (round(d) == d && (d >= 1 && d <= 22)){
                        cout << "весы 23.09-22.10";
                    }
                    else {
                        cout << "error.uwu";
                    }
                    break;
                    case 11:
                    cout << "вводи день";
                    cin >> d;
                    if (round(d) == d && (d >= 22 && d <= 30)){
                        cout << "стрелец 23.11-21.12";
                    }
                    else if (round(d) == d && (d >= 1 && d <= 21)){
                        cout << "скорпион 23.10-21.11";
                    }
                    else {
                        cout << "error.uwu";
                    }
                    break;
                    case 12:
                    cout << "вводи день";
                    cin >> d;
                    if (round(d) == d && (d >= 22 && d <= 31)){
                        cout << "козерог 22.12-19.01";
                    }
                    else if (round(d) == d && (d >= 1 && d <= 21)){
                        cout << "стрелец 23.11-21.12";
                    }
                    else {
                        cout << "error.uwu";
                    }
                    break;
                }
            }
            else {
                cout << "error.uwu";
            }
            return 1;
        }
        else {
            cout << "вводи месяц";
            cin >> m;
            if (m > 0 && m < 13 && round(m) == m){
                switch(int(m)){
                    case 1:
                    cout << "вводи день";
                    cin >> d;
                    if (round(d) == d && (d >= 20 && d <= 31)){
                        cout << "водолей 20.01-18.02";
                    }
                    else if (round(d) == d && (d >= 1 && d <= 19)){
                        cout << "козерог 22.12-19.01";
                    }
                    else {
                        cout << "error.uwu";
                    }
                    break;
                    case 2:
                    cout << "вводи день";
                    cin >> d;
                    if (round(d) == d && (d >= 19 && d <= 29)){
                        cout << "рыбы 19.02-20.03";
                    }
                    else if (round(d) == d && (d >= 1 && d <= 18)){
                        cout << "водолей 20.01-18.02";
                    }
                    else {
                        cout << "error.uwu";
                    }
                    break;
                    case 3:
                    cout << "вводи день";
                    cin >> d;
                    if (round(d) == d && (d >= 21 && d <= 31)){
                        cout << "овен 21.03-19.04";
                    }
                    else if (round(d) == d && (d >= 1 && d <= 20)){
                        cout << "рыбы 19.02-20.03";
                    }
                    else {
                        cout << "error.uwu";
                    }
                    break;
                    case 4:
                    cout << "вводи день";
                    cin >> d;
                    if (round(d) == d && (d >= 20 && d <= 30)){
                        cout << "телец 20.04-20.05";
                    }
                    else if (round(d) == d && (d >= 1 && d <= 19)){
                        cout << "овен 21.03-19.04";
                    }
                    else {
                        cout << "error.uwu";
                    }
                    break;
                    case 5:
                    cout << "вводи день";
                    cin >> d;
                    if (round(d) == d && (d >= 21 && d <= 31)){
                        cout << "близнецы 21.05-21.06";
                    }
                    else if (round(d) == d && (d >= 1 && d <= 20)){
                        cout << "телец 20.04-20.05";
                    }
                    else {
                        cout << "error.uwu";
                    }
                    break;
                    case 6:
                    cout << "вводи день";
                    cin >> d;
                    if (round(d) == d && (d >= 22 && d <= 30)){
                        cout << "рак 22.06-22.07";
                    }
                    else if (round(d) == d && (d >= 1 && d <= 21)){
                        cout << "близнецы 21.05-21.06";
                    }
                    else {
                        cout << "error.uwu";
                    }
                    break;
                    case 7:
                    cout << "вводи день";
                    cin >> d;
                    if (round(d) == d && (d >= 23 && d <= 31)){
                        cout << "лев 23.07-22.08";
                    }
                    else if (round(d) == d && (d >= 1 && d <= 22)){
                        cout << "рак 22.06-22.07";
                    }
                    else {
                        cout << "error.uwu";
                    }
                    break;
                    case 8:
                    cout << "вводи день";
                    cin >> d;
                    if (round(d) == d && (d >= 23 && d <= 31)){
                        cout << "дева 23.08-22.09";
                    }
                    else if (round(d) == d && (d >= 1 && d <= 22)){
                        cout << "лев 23.07-22.08";
                    }
                    else {
                        cout << "error.uwu";
                    }
                    break;
                    case 9:
                    cout << "вводи день";
                    cin >> d;
                    if (round(d) == d && (d >= 23 && d <= 30)){
                        cout << "весы 23.09-22.10";
                    }
                    else if (round(d) == d && (d >= 1 && d <= 22)){
                        cout << "дева 23.08-22.09";
                    }
                    else {
                        cout << "error.uwu";
                    }
                    break;
                    case 10:
                    cout << "вводи день";
                    cin >> d;
                    if (round(d) == d && (d >= 23 && d <= 31)){
                        cout << "скорпион 23.10-21.11";
                    }
                    else if (round(d) == d && (d >= 1 && d <= 22)){
                        cout << "весы 23.09-22.10";
                    }
                    else {
                        cout << "error.uwu";
                    }
                    break;
                    case 11:
                    cout << "вводи день";
                    cin >> d;
                    if (round(d) == d && (d >= 22 && d <= 30)){
                        cout << "стрелец 23.11-21.12";
                    }
                    else if (round(d) == d && (d >= 1 && d <= 21)){
                        cout << "скорпион 23.10-21.11";
                    }
                    else {
                        cout << "error.uwu";
                    }
                    break;
                    case 12:
                    cout << "вводи день";
                    cin >> d;
                    if (round(d) == d && (d >= 22 && d <= 31)){
                        cout << "козерог 22.12-19.01";
                    }
                    else if (round(d) == d && (d >= 1 && d <= 21)){
                        cout << "стрелец 23.11-21.12";
                    }
                    else {
                        cout << "error.uwu";
                    }
                    break;
                }
            }
            else {
                cout << "error.uwu";
            }
            return 1;
        }
    }
    else {
        cout << "error.uwu";
    }
    
    return 0;
}
