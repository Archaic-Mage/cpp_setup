/*  _____    __________  _________     ___ ___      _____    .___  _________  
   /  _  \   \______   \ \_   ___ \   /   |   \    /  _  \   |   | \_   ___ \ 
  /  /_\  \   |       _/ /    \  \/  /    ~    \  /  /_\  \  |   | /    \  \/ 
 /    |    \  |    |   \ \     \____ \    Y    / /    |    \ |   | \     \____
 \____|__  /  |____|_  /  \______  /  \___|_  /  \____|__  / |___|  \______  /
         \/          \/          \/         \/           \/                \/ 
               _____       _____      ________  ___________                  
              /     \     /  _  \    /  _____/  \_   _____/                  
             /  \ /  \   /  /_\  \  /   \  ___   |    __)_                   
            /    Y    \ /    |    \ \    \_\  \  |        \                  
            \____|__  / \____|__  /  \______  / /_______  /                  
                    \/          \/          \/          \/     
         
    Author: Archaic_Mage        
    Name: Soham Tripathy    
    Institution: IIT Madras
*/

#include <bits/stdc++.h>
#include "../debug/debug.h"
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")

using namespace std;

#define int long long
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x.size())
#define uid(a, b) uniform_int_distribution<int>(a, b)(rng)
#define v vector
#define F first
#define S second

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

const int MOD = (int)1e9+7;
const char nl = '\n';

int dp[151][11][101][2][61];

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
int simplify(int a, int b) {
    return (a + b ) % MOD;
}

int inv6 = inv(6);
int mul (int a) {
    return (a * inv6) % MOD;
}



void init() {
    for(int n = 0; n<151; n++) {
        for(int w = 0; w<11; w++) {
            for(int x = 0; x<101; x++) {
                for(int v = 0; v<2; v++) {
                    for(int b = 0; b<61; b++) {
                        dp[n][w][x][v][b] = 0;
                    }
                }
            }
        }
    }
    for(int w = 0; w<11; w++) {
        for(int v = 0; v<2; v++) {
            for(int b = 0; b<61; b++) {
                dp[0][w][0][v][b] = 1;
            }
        }
    }
    for(int n = 1; n<151; n++) {
        for(int w = 1; w<11; w++) {
            for(int x = 1; x<101; x++) {
                //v = 0
                for(int b = 1; b<61; b++) {
                    if(b%6 != 1) {
                        dp[n][w][x][0][b] = simplify(dp[n][w][x][0][b], mul(dp[n][w-1][x][0][b-1])); 
                        for (int r = 1; r <= 6; r++) {
                            if(r == 5) continue;
                            int last = (r > n) ? 0 : n-r;
                            if(r%2) {
                                dp[n][w][x][0][b] = simplify(dp[n][w][x][0][b], mul(dp[last][w][x][1][b-1]));
                            }
                            else {
                                dp[n][w][x][0][b] = simplify(dp[n][w][x][0][b], mul(dp[last][w][x][0][b-1]));
                            }
                        }
                    } else {
                        dp[n][w][x][0][b] = simplify(dp[n][w][x][0][b], mul(dp[n][w-1][x][1][b-1])); 
                        for (int r = 1; r <= 6; r++) {
                            if(r == 5) continue;
                            int last = (r > n) ? 0 : n-r;
                            if(r%2) {
                                dp[n][w][x][0][b] = simplify(dp[n][w][x][0][b], mul(dp[last][w][x][0][b-1]));
                            }
                            else {
                                dp[n][w][x][0][b] = simplify(dp[n][w][x][0][b], mul(dp[last][w][x][1][b-1]));
                            }
                        }
                    }
                }
                //v = 1
                for(int b = 1; b<61; b++) {
                    if(b%6 != 1) {
                        dp[n][w][x][1][b] = 0; 
                        for (int r = 1; r <= 6; r++) {
                            if(r == 5) continue;
                            int last = (r > n) ? 0 : n-r;
                            int vlast = (r > x) ? 0 : x-r;
                            if(r%2) {
                                dp[n][w][x][1][b] = simplify(dp[n][w][x][1][b], mul(dp[last][w][vlast][0][b-1]));
                            }
                            else {
                                dp[n][w][x][1][b] = simplify(dp[n][w][x][1][b], mul(dp[last][w][vlast][1][b-1]));
                            }
                        }
                    } else {
                        dp[n][w][x][1][b] = 0; 
                        for (int r = 1; r <= 6; r++) {
                            if(r == 5) continue;
                            int last = (r > n) ? 0 : last;
                            int vlast = (r > x) ? 0 : x-r;
                            if(r%2) {
                                dp[n][w][x][1][b] = simplify(dp[n][w][x][1][b], mul(dp[last][w][vlast][1][b-1]));
                            }
                            else {
                                dp[n][w][x][1][b] = simplify(dp[n][w][x][1][b], mul(dp[last][w][vlast][0][b-1]));
                            }
                        }
                    } 
                }
            }
        }
    }
}

void solve() {
    int n, b, w,x; cin >> n >> b >> w >> x;
    cout << dp[n][w][100-x][1][b] << nl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    init();
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

