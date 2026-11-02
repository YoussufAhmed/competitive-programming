// Problem Link : https://codeforces.com/problemset/problem/961/B
//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
using namespace std;
#define ll long long 



long long ceil_div(long long a, long long b) {
    return (a + b - 1) / b;
}

long long ceil_div1(long long a, long long b) {
    if(a % b){
        return a + (b - (a % b)) / b;
    }else{
        return a / b;
    }
}


void solve(void){
    int n, k; cin >> n >> k;

    ll arr[n+1]{};
    ll s[n+1]{};
    ll Actual_p[n+1]{};
    ll p[n+1]{};

    for(int i=1; i<=n; i++){
        cin >> arr[i];
        Actual_p[i] = arr[i] + Actual_p[i-1];
    }

    bool NoZero = true;
    for(int i=1; i<=n; i++){
        cin >> s[i];
        if(s[i] == 0) NoZero = false;
        if(s[i] == 1){
            p[i] = arr[i];
        }
        p[i] += p[i-1];
    }

    if(NoZero){
        cout << Actual_p[n] << "\n";
        return;
    }

    
    ll ans = -1;
    for(int i=1; i<=n; i++){
        if(s[i] == 0){
            int l = i; 
            int r;
            if(i+k-1 <= n)
               r = i + k - 1;
            else
               r = n;

            ll c = Actual_p[r] - Actual_p[l-1] + p[l-1] + (p[n]-p[r]);

            ans = max(ans, c);
        }
    }

    cout << ans << "\n";


}


void fastIO(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main(void){

    fastIO();
    solve();
    return 0;
}