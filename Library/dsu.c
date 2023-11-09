vector<int> id(1e6, -1);
//rank initially set to one for all nodes
vector<int> rank(1e6, 1);

int find(int idx) {
    int i = idx;
    while(i != id[i]) {
        id[i] = id[id[i]]; //setting the id (like the uplifting)
        i = id[i];
    }
    return i;
}

void combine(int a, int b) {
    int i = find(a);
    int j = find(b);
    if(i != j) {
        if(rank[i] < rank[j]) swap(i, j);
        rank[j] = i; rank[i] += rank[j];
    }
}
