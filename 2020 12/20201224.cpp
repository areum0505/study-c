#include <iostream>

using namespace std;

int main() {
    int num, count = 1;
    
    cin >> num;

    while (num / 10 != 0) {
        count++;
        num /= 10;
    }
    cout << count;
}
