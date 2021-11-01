#include <bits/stdc++.h>

using namespace std;


void solve() {
    int n;
    cin >> n;

    vector <int> array(n);
    for(int i = 0; i < n; i++) {
        cin >> array[i];
    }
    
    bool inc = true;
    for(int i = 1; i < n; i++) {
        inc = inc && (array[i] > array[i-1]);
        /*
        if(array[i-1] > array[i]) {
            inc = false;
        }
        */
    }

    if(n % 2 == 0 or !inc) {
        cout << "YES" << endl; 
    }else  {
        cout << "NO" << endl; 
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

