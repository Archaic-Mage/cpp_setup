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

#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
#include <bits/stdc++.h>

using namespace std;

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}
 
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ", "; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? ", " : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}

#ifdef DEBUG
#define dbg(x...) cerr <<__func__<<":"<<__LINE__<<" [" << #x << "] = ["; _print(x); cerr << endl;
#else
#define dbg(x...)
#endif

#define int long long
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x.size())
#define uid(a, b) uniform_int_distribution<int>(a, b)(rng)

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

const int MOD = (int)1e9+7;
const char nl = '\n';

void solve() {
    return;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}
