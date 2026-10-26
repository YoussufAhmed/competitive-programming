// Problem Link :

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
    int n; cin >> n;
    int arr[n+1]{}; for(int i=1; i<=n; i++) cin >> arr[i];
    int prefix[n+2]{}; 
    int q; cin >> q;
    while(q--){
        int l, r; cin >> l >> r;
        prefix[l] -=1;
        prefix[r+1] +=1;
    }
    for(int i=1; i<=n; i++) prefix[i]+=prefix[i-1];
    int counter=0;
    for(int i=1; i<=n; i++) if(prefix[i]==0) counter++;
    cout << counter << "\n";
    for(int i=1; i<=n; i++) if(prefix[i]==0) cout << arr[i] << " "; cout << "\n";
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