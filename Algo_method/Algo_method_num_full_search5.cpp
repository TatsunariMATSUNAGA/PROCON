#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<numeric>
using namespace std;

int main() {
    int N ;
    cin >> N ;
    for (int i = 1 ; i <= N ; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            cout << "FizzBuzz" << endl;
        }
        else if (i % 3 == 0 && i % 5 != 0) {
            cout << "Fizz" << endl;
        }
        else if (i % 3 != 0 && i % 5 == 0){
            cout << "Buzz" << endl;
        }
        else {
            cout << i << endl;
        }
    }
    return 0;
}