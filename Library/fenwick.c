//remember to resize fen
vector<int> fen;

void fen_add(int idx, int val) {
    for(;idx<sz(fen); idx += (idx&-idx)) fen[idx] += val;
}

int fen_get(int idx) {
    int sum = 0;
    for(; idx > 0; idx -= (idx&-idx)) sum += fen[i];
    return sum;
}

int fen_g(int l, int r) {
    return fen_get(r) - fen_get(l-1);
} 
