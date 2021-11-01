// https://codeforces.com/problemset/problem/1567/A

#include <bits/stdc++.h>

using namespace std;

void solve() {
    // Amount of columns
    int n;
    cin >> n;

    string s;
    cin >> s;

    string result;

    for(int i = 0; i < s.size(); i++) {
        if(s[i] == 'U') {
            result.push_back('D');
        }else if(s[i] == 'D'){
            result.push_back('U');
        }else if(s[i] == 'R') {
            result.push_back('R');
        }else if(s[i] == 'L') {
            result.push_back('L');
        }
    }
    cout << result << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        solve();
    }
}
