#include <iostream>

using namespace std;

void task3() {
    int n, m, res;
    char ch;
    while (cin >> n >> m >> ch) {
        switch (ch) {
            case '+':
                res += n + m;
                break;
            case '-':
                res += n - m;
                break;
            case '*':
                res += n * m;
                break;
            case '/':
                res += n / m;
                break;
            default:
                cout << "Wrong input";
        }
    }
    cout << res;
}
