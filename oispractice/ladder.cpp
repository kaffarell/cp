#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    vector<int> C;
    C.push_back(0);

    for(int i = 0; i < N; i++) {
        int input;
        cin >> input;
        C.push_back(input);
    }

    int max = 0;
    for(int i = 1; i < N+1; i++) {
        if(C[i] > C[i-1]){
            int diff = C[i] - C[i-1];
            if(diff > max) {
                max = diff;
            }
        }
    }
    cout << max << endl;
    

    return 0;
}

