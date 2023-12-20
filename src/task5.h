#include <iostream>

using namespace std;

void task5(){
    int n;
    cin >> n;
    int res = 1;
    res = res << n;
    cout << --res;
}
