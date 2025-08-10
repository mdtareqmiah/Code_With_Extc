#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int h = a;
    int br = a;

    while (br >= b) {
        int x = br / b;
        h += x;
        br = br % b + x;
    }

    cout << h << endl;

    return 0;
}
