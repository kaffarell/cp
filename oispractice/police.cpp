#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N;
    int K;
    cin >> N >> K;
    vector<int> V;

    for (int i=0; i<N; i++){
        int tmp;
        cin >> tmp;
        V.push_back(tmp);
    }

    int i=0;
    int counter=0;
    while (true){
        if (i == K-1){
            cout << counter;
            return 0;
        }else if (counter == N-1){
            cout << -1;
            return 0;
        }else{
            i = V[i]-1;
            counter++;
        }
    }

    return 0;
}

