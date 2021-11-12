#include <bits/stdc++.h>

int distance_to_all(const vector<int> K, int index) {
    int diff = 0;
    for(int i = 0; i < K.size(); i++) {
        diff += abs(K[i] - index);
    }
    return diff;
}

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    cin >> N >> M;
    vector<int> K;

    for (int i=0; i<N; i++){
        int tmp;
        cin >> tmp;
        K.push_back(tmp);
    }

    vector<int> solutions;
    for(int i = 0; i < 6; i++) {
        int best_solution = 0;
        best_solution += M;

        solutions.push_back(best_solution);
    }

    // Get biggest value in solutions
    int max = 0;
    for(int i = 0; i < solutions.size(); i++) {
        if(solutions[i] > max) {
            max = solutions[i];
        }
    }
    cout << max << endl;

    cout << *max_element(solutions.begin(), solutions.end()) << endl;

    return 0;
}

