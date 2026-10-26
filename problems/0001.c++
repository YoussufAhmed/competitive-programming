// Problem Link : https://codeforces.com/contest/999/problem/A

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
    int n, k;  cin >> n >> k;
    int arr[n]; for(int i=0; i<n; i++) cin>>arr[i];
    int l=0, r=n-1;
    int count=0;
    while(l<r && (arr[l]<=k||arr[r]<=k)){
        if(arr[l]<=k){
            count++;
            l++;
        }
            
        if(arr[r]<=k){
            count++;
            r--;
        }
    }

    if(l==r && arr[l]<=k ) count++;
    cout << count << "\n";
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