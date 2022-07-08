// https://codeforces.com/problemset/problem/231/A
#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    int counter = 0;
    for(int i = 0; i < t; i++) {
        int number_one, number_two, number_three;
        cin >> number_one >> number_two >> number_three;
        if(number_one == 1 && number_two == 1 || number_two == 1 && number_three == 1 || number_one == 1 && number_three == 1) {
            counter++;
        }
    }
    cout << counter << endl;

    return 0;
}

