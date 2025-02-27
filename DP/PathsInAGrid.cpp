#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int dp[n][n];
    for(int i=0; i<n; i++){
        for(int y=0; y<n; y++) cin >> dp[i][y];
    }
    for(int i=1; i<n; i++) dp[0][i] += dp[0][i-1];
    for(int i=1; i<n; i++) dp[i][0] += dp[i-1][0];

    for(int i=1; i<n; i++){
        for(int y=1; y<n; y++){
            dp[i][y] += max(dp[i-1][y],dp[i][y-1]);
        }
    }
    cout << dp[n-1][n-1];
}