#include <bits/stdc++.h>

using namespace std;

vector<int> id_vector;

void inizia(int N, int ids[]) {
    // Move all elements from array to vector
    for(int i = 0; i < N; i++) {
        id_vector.push_back(ids[i]);
    }
    
}

void supera(int id) {
    vector<int>::iterator it = find(id_vector.begin(), id_vector.end(), id);
    int index = it - id_vector.begin();
    
    // Switch positions
    if(index >= 1) {
        int cache = id_vector[index-1];
        id_vector[index-1] = id_vector[index];
        id_vector[index] = cache;
    }
}

void squalifica(int id) {
    vector<int>::iterator it = find(id_vector.begin(), id_vector.end(), id);
    id_vector.erase(it);
}

int partecipante(int pos) {
    return id_vector[pos-1];
}



static FILE *fr, *fw;

// Declaring variables
static int N;
static int Q;
static int* ids;
static char* types;
static int* params;
static int* answers;

// Functions ad-hoc for this grader
void make_calls(int& Q, char types[], int params[], int answers[]) {
    int cnt = 0;
	for (int i = 0; i < Q; i++) {
		if (types[i] == 's') {
			supera(params[i]);
		}
		else if (types[i] == 'x') {
			squalifica(params[i]);
		}
		else if (types[i] == 'p') {
			answers[cnt++] = partecipante(params[i]);
		}
	}
    Q = cnt;
}


int main() {
	fr = stdin;
	fw = stdout;

	// Reading input
	fscanf(fr, " %d %d", &N, &Q);
	ids = (int*)malloc((N) * sizeof(int));
	for (int i0 = 0; i0 < N; i0++) {
		fscanf(fr, " %d", &ids[i0]);
	}
	types = (char*)malloc((Q) * sizeof(char));
	params = (int*)malloc((Q) * sizeof(int));
	for (int i0 = 0; i0 < Q; i0++) {
		fscanf(fr, " %c %d", &types[i0], &params[i0]);
	}

	// Calling functions
	inizia(N, ids);
	answers = (int*)malloc((Q) * sizeof(int));
	make_calls(Q, types, params, answers);

	// Writing output
	for (int i0 = 0; i0 < Q; i0++) {
		fprintf(fw, "%d ", answers[i0]);
	}
	fprintf(fw, "\n");

	fclose(fr);
	fclose(fw);
	return 0;
}


