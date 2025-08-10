#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string team1, team2, name;
    int count1 = 0, count2 = 0;

    for (int i = 0; i < n; ++i) {
        cin >> name;
        if (team1.empty() || name == team1) {
            team1 = name;
            count1++;
        } else {
            team2 = name;
            count2++;
        }
    }

    cout << (count1 > count2 ? team1 : team2) << endl;

    return 0;
}
