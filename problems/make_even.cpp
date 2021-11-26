// https://codeforces.com/contest/1611/problem/A
#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;

    int moves = 0;
    if(n % 2 == 0) {
        cout << "0" << "\n";
        return;
    }
    string s = std::to_string(n);
    if(((int)s[0]) % 2 == 0) {
        moves++;
    }else {
        int i;
        for(i = 0; i < s.length(); i++) {
            if(((int) s[i]) % 2 == 0) {
                moves += 2;
                break;
            }
        }
        if(i == s.length()) {
            moves = -1;
        }
    }

    cout << moves << "\n";
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

