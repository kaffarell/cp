// https://training.olinfo.it/#/task/ois_himalaya/statement

#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    int M;
    int V;
    cin >> N >> M >> V;

    vector <int> mountains(N);
    for(int i = 0; i < N; i++) {
        cin >> mountains[i];
    }

    for(int i = 0; i < N; i++) {
        float kinetic_energy = 0.5 * M * pow(V, 2);
        int j = i;
        for(j = i; j < N-1; j++) {
            if(mountains[j] > mountains[j+1]) {
                kinetic_energy += M * 10 * (mountains[j] - mountains[j+1]);
            }else if (mountains[j] < mountains[j+1]) {
                kinetic_energy -= M * 10 * (mountains[j+1] - mountains[j]);
            }
            if(kinetic_energy < 0) {
                break;
            }
        }
        cout << j << " "; 
         
    }
    return 0;
}

