#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    /*
    int counter = 0;
    for(int i = 9; i <= n; i+=10) {
        counter++;
    }

    */
    int counter = n/10;
    if(n % 10 == 9) {
        counter++;
    }
    cout << counter << endl;
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

