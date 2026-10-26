// Problem Link : https://codeforces.com/contest/2247/problem/A

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
        int n; cin >> n;
        int arr[n];
        int  pos=0, neg=0;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            arr[i]==-1 ? neg++ : pos++;
        }
        if(n%2 != 0){
            cout << "NO\n";
            continue;
        }

        //bool ans = ( (n/2) - min(neg, pos) ) %2 == 0 ;
        bool ans = abs(neg - pos) %4 == 0;
        
        ans ? cout << "YES\n" : cout << "NO\n";
    }
}

void solve2(void){
    int t; cin >>t;
    while(t--){
        int n; cin >> n; 
        ll sum = 0;
        for(int i=0; i<n; i++){
            int num; cin >> num;
            sum+=num;
        }

        cout << (abs(sum)%4==0? "YES\n":"NO\n");
    }
}


void fastIO(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main(void){

    fastIO();
    solve2();
    return 0;
}