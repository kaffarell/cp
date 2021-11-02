// https://codeforces.com/contest/1607/problem/B
// -10 -9 -8 -7 -6 -5 -4 -3 -2 -1 0 1 2 3 4 5 6 7 8 9 10

#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve() {
    ll start;
    ll jumps;
    cin >> start >> jumps;


    ll curr_coord = start;
    for(ll i = 1; i < jumps+1; i++) {
        if(curr_coord % 2 == 0) {
            curr_coord = curr_coord - i;
        }else {
            curr_coord = curr_coord + i;
        }
    }
    cout << curr_coord << endl;
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

