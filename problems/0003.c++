// Problem Link : https://codeforces.com/problemset/problem/2247/B

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
    int t;  cin >> t;
    while(t--){
        int n, k, m;
        cin >> n >> k >> m;

        
        if(k > m){
            cout << "NO\n";
        }else{
            int wholes = n / k;
            int remain = n % k;

            cout << "YES\n";
            int first = m - (k - 1);
            for(int i=0; i<wholes; i++){
                for(int j=0; j<k; j++){
                    if(!j){
                        cout << first << " ";
                    }else{
                        cout << m+1 << " ";
                    }
                }
            }

            for(int i=0; i<remain; i++){
                if(!i)cout << first << " ";
                else cout << m + 1 << " ";
            } 
            cout << "\n";
        
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