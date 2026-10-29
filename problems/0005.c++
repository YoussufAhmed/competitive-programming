// Problem Link : https://codeforces.com/group/E23MsQv91X/contest/309967/problem/A
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
    int arr[n+1]{}, px[n+1]{}, sx[n+1]{};
    for(int i=1; i<=n; i++){
        cin >> arr[i];
        px[i] = max(arr[i], px[i-1]);
    }


    // Edge case: Restriction of access beyond borders "boundary".
    if(n == 1) {cout << "both\n"; return;}


    sx[n] = arr[n];
    for(int i=n-1; i>0; i--){
        sx[i] = max(sx[i+1], arr[i]);
    }

    

    //left
    for(int i=1; i<=n; i++){
        if(i == 1){
            if(arr[i]>=sx[i+1]) cout << "both\n"; else cout << "left\n";
        }else if(i == n){
            if(arr[i]>=px[i-1]) cout << "both\n"; else cout << "right\n";
        }else{
            if(arr[i]>=px[i-1]){
                if(arr[i]>=sx[i+1])cout << "both\n"; else cout << "left\n";
            }else if(arr[i]>=sx[i+1]){
                cout << "right\n";
            }else{
                cout << "none\n";
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

    fastIO();
    solve();
    return 0;
}