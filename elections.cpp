#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, c;
    int result_a, result_b, result_c;
    cin >> a >> b >> c;

    // First candidate
    result_a = (max(b, c) + 1) - a;
    result_a = result_a < 0 ? 0 : result_a;
    // Second candidate
    result_b = (max(a, c) + 1) - b;
    result_b = result_b < 0 ? 0 : result_b;
    // Third candidate
	result_c = (max(a, b) + 1) - c;
    result_c = result_c < 0 ? 0 : result_c;
    cout << result_a << " " << result_b << " " << result_c << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        //cout << "Case #" << i << ": ";

        solve();
    }
}
