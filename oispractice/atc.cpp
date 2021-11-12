#include <bits/stdc++.h>
#include <assert.h>

using namespace std;

// constraints
#define MAXN 200

// input data
int N, i;
char grid[MAXN][MAXN + 1];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    assert(1 == scanf("%d", &N));
    for(i=0; i<N; i++)
        assert(1 == scanf("%s", grid[i]));




    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++){
            cout << grid[i][j] << " ";
        }
        cout << "\n";
    }



    return 0;
}
