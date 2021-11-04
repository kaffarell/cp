// Example problem from the handbook (https://cses.fi/book/book.pdf)

#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> vec(n);
    for(int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    // Find maximum sum of subarrays
    int sum = 0;
    int best = 0;
    for(int i = 0; i < n; i++) {
        sum = max(vec[i], sum + vec[i]);
        best = max(best, sum);
    }
    cout << best << "\n";

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

