#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,sum; cin >> num >> sum;
    int coin[num];
    for(int i=0; i<num; i++) cin >> coin[i];
    int dp[sum+1];
    dp[0] = 1;
    for(int i=1; i<=sum; i++){
        dp[i] = 0;
        for(int y=0; y<num; y++){
            if((coin[y] <= i)&&(dp[i-coin[y]]!=0)){
                dp[i] += dp[i-coin[y]];
            }
        }
    }
    cout << dp[sum];
}