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
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i<n; i++) cin >> a[i];
    sort(all(a), greater<int>());
    //for minimum
    int l = k;
    int mnsum = a[k];
    for(int i = n-k+1; i<n; i++) mnsum += a[i];
    cout << mnsum << " ";
    //for maximum
    int mxsum = 0;
    for(int i = 1; i<n && l > 0; i+=2, l--) mxsum += a[i];
    cout << mxsum <<  nl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

