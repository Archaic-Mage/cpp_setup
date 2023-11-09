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

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

const int MOD = (int)1e9+7;
const char nl = '\n';

void solve() {
    int n; cin >> n;
    cout << n << nl;
    dbg("hello");
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

