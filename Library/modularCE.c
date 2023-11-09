//power modular
int powmod(int a, int b, int p=MOD){
    a %= p;
    if (a == 0) return 0;
    int product = 1;
    while(b > 0){
        if (b&1){    // you can also use b % 2 == 1
            product *= a;
            product %= p;
            --b;
        }
        a *= a;
        a %= p;
        b /= 2;    // you can also use b >> 1
    }
    return product;
}

//modular inverse
int inv(int a, int p=MOD){
    return powmod(a, p-2, p);
}

vector<int> fact;

//computes and fills the factorial array
void get_fact(int n, int p=MOD) {
    fact.resize(n+1,1);
    for(int i = 2; i<=n; i++) {
        fact[i] = i * fact[i-1];
        fact[i] %= p;
    }
}

//modular combinatorics
int nCk(int n, int k, int p=MOD){
    return ((fact[n] * inv(fact[k], p) % p) * inv(fact[n-k], p)) % p;
}
