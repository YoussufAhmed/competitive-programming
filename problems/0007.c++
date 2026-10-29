// Problem Link : https://codeforces.com/problemset/problem/368/B
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
    int n, m;
    cin >> n >> m;
    int arr[n+1]{}; 
    int appeared[100005]{}; 

    for(int i=1; i<=n; i++){
        cin >> arr[i];
    }

    int sufx[n+1]{};
    
    for(int i=n; i>=1; i--){
        if(appeared[arr[i]] == 0){
            sufx[i] =  1;
            appeared[arr[i]]++;
        }
    }

    for(int i=n-1; i>=1; i--) sufx[i] += sufx[i+1];
    while(m--){
        int x; cin >> x;
        cout << sufx[x] << "\n";
    }

}
    


void fastIO(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main(void){

    //freopen("mex.in", "r", stdin);
    fastIO();
    solve();
    return 0;
}