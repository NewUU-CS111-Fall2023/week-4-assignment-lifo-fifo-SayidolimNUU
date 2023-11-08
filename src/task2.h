//Why are there two separate questions inside task 2? Which one should be solved?
//Here, I'm trying the second one:

#include <iostream>

using namespace std;

void task2(){
    int n;
    char in;
    cin >> n;
    long long arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> in;
        //Trying to use prime numbers to keep track of pairs:
        switch(in) {
            case '(':
                arr[i] = 2;
                break;
            case ')':
                arr[i] = 3;
                break;
            case '[':
                arr[i] = 5;
                break;
            case ']':
                arr[i] = 7;
                break;
            case '{':
                arr[i] = 11;
                break;
            case '}':
                arr[i] = 13;
                break;
            default:
                arr[i] = 0;
        }
        //Unfinished
    }
}
