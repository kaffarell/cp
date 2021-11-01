#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
    cin >> n;

    vector <int> array;
    for(int i = 0; i < n; i++) {
        int input;
        cin >> input;
        array.push_back(input);
    }

    int moves = 0;

    int pi = 0;
    for(int i = 0; i < array.size(); i++) {
        if(array[i] > pi+1) {
            int diff = array[i] - (pi+1);
            moves += diff;
            pi += diff;
        }
        pi++;
    }

    cout << moves << endl;
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

