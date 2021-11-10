// https://training.olinfo.it/#/task/ois_lootboxes/statement 
#include <bits/stdc++.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N;
    int X;
    cin >> N >> X;

    vector <pair<int, int>> boxes(N);
    for(int i = 0; i < N; i++) {
        int p, q;
        cin >> p >> q;
        boxes[i] = {p, q};
    }

    vector <vector <int> > matrix(N+1, vector<int> (X+1, 0));

    for(int i = 0; i < N+1; i++) {
        matrix[i][0] = 0;
    }
    for(int i = 0; i < X+1; i++) {
        matrix[0][i] = 0;
    }

    for(int item = 1; item < N+1; item++) {
        for(int capacity = 1; capacity < X+1; capacity++) {
            int maxValWithoutCurr = matrix[item-1][capacity];
            int maxValWithCurr = 0;

            int weightOfCurr = boxes[item-1].second;
            if(capacity >= weightOfCurr) {
                maxValWithCurr = boxes[item-1].first;

                int remainingCapacity = capacity - weightOfCurr;
                maxValWithCurr += matrix[item-1][remainingCapacity];
            }
            matrix[item][capacity] = max(maxValWithoutCurr, maxValWithCurr);
        }
    }

/*
    // Print array
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < X; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
    */
    cout << matrix[N][X] << "\n";

    return 0;
}

