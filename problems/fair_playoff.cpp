// https://codeforces.com/problemset/problem/1535/A
#include <bits/stdc++.h>

using namespace std;

void solve() {
    vector <int> skills_first(2);
    vector <int> skills_second(2);
    for(int i = 0; i < 2; i++) {
        cin >> skills_first[i];
    }
    for(int i = 0; i < 2; i++) {
        cin >> skills_second[i];
    }

    if(max(skills_first[0], skills_first[1]) < min(skills_second[0], skills_second[1]) 
        || max(skills_second[0], skills_second[1]) < min(skills_first[0], skills_first[1])) {
        cout << "NO" << endl;
    }else {
        cout << "YES" << endl;
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

