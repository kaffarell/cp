// https://codeforces.com/contest/1607/problem/B

#include <bits/stdc++.h>
#define ll long long

using namespace std;

void solve() {
    ll start;
    ll jumps;
    cin >> start >> jumps;


    /*
    ll curr_coord = start;
    for(ll i = 1; i < jumps+1; i++) {
        if(curr_coord % 2 == 0) {
            curr_coord = curr_coord - i;
        }else {
            curr_coord = curr_coord + i;
        }
    }
    cout << curr_coord << endl;
    */

    ll result;


    if(jumps % 4 == 0) {
        result = 0;
    }else if (jumps % 4 == 1) {
        result = jumps;
    }else if(jumps % 4 == 2) {
        result = -1;
    }else if (jumps % 4 == 3) {
        result = - jumps - 1;
    }
    if( start % 2 == 0) {
        cout << start - result << endl;
    }else {
        cout << start + result << endl;
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

