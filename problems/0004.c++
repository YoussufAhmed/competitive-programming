// Problem Link : https://codeforces.com/contest/2272/problem/A

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
        int n, k;
        cin >> n >> k;
        vector<int> num(n); for(int i=0; i<n; i++) cin >> num[i];

        if(k == 1){
            cout << -1 << '\n';
        }else{

        auto x = max_element(num.begin(), num.begin() + n - k + 1) - num.begin();
        auto y = min_element(num.begin() + n - k + 1, num.end()) - num.begin();

        if(num[x] > num[y])
          cout << x+1 << " " << y+1 << "\n";
        else
          cout << -1 << '\n';
        } 
    }
    

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