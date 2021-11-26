// https://codeforces.com/contest/1611/problem/B
#include <bits/stdc++.h>

using namespace std;

void solve() {
    int p;
    int m;
    cin >> p >> m;

    int teams = (int) (p+m) / 4;
    if(p > teams && m > teams) {
        cout << teams << "\n";
    }else{
        cout << min(p, m) << "\n";
    }
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

