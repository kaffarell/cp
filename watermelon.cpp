#include <bits/stdc++.h>

using namespace std;

const int MAXW = 100;
int w;

bool is_even(int n) {
    return n % 2 == 0;
}

int main() {
    cin >> w;
    int half = w/2;
    for(int i = half; i < w; i++) {
        if(is_even(i) && is_even(w-i)) {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
}
