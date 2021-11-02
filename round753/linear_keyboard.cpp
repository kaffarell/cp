// https://codeforces.com/contest/1607/problem/A

#include <bits/stdc++.h>

using namespace std;

void solve() {
    vector<char> keyboard(26);
    for(int i = 0; i < 26; i++) {
        cin >> keyboard[i];
    }

    string s;
    cin >> s;

    int steps = 0;
    for(int i = 1; i < s.length(); i++) {
        int index1 = distance(keyboard.begin(), find(keyboard.begin(), keyboard.end(), s[i])) + 1;
        int index2 = distance(keyboard.begin(), find(keyboard.begin(), keyboard.end(), s[i-1])) + 1;
        steps = steps + abs(index1 - index2);
    }
    cout << steps << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        solve();
    }

    return 0;
}

