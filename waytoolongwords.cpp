#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if(s.length() <= 10) {
            cout << s << endl;;
        }else {
            cout << s[0];
            cout << s.length()-2;
            cout << s.back() << endl;
        }
    }
    
    return 0;
}
