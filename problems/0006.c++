// Problem Link : https://codeforces.com/group/u3Ii79X3NY/contest/270254/problem/L
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
    int t; cin >> t;
    while(t--){
    int n, q; cin >> n >> q; 
    int arr[n+1]{}, px[n+1]{}, sx[n+1]{};
    for(int i=1; i<=n; i++){
        cin >> arr[i];
    }

    px[1] = arr[1];
    for(int i=2; i<=n; i++) px[i] = min(arr[i], px[i-1]);

    sx[n] = arr[n];
    for(int i=n-1; i>0; i--){
        sx[i] = min(sx[i+1], arr[i]);
    }

    while(q--){
        int l, r; cin >> l >> r;
        if(l == 1 && r == n){
            cout << n + 1 << "\n";
        }else if(l == 1){
            cout << sx[r+1] << "\n";  
        }else if(r == n){
            cout << px[l-1] << "\n";
        }else{
            cout << min(px[l-1], sx[r+1]) << "\n";
        }
    }

    }

}


void fastIO(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main(void){

    freopen("mex.in", "r", stdin);
    fastIO();
    solve();
    return 0;
}