#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int sum; cin >> sum;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    int dp[sum+1];
    dp[0] = 0;
    int first[sum+1];
    for(int i=1; i<=sum; i++){
        dp[i] = -1;
        int best = 999999;
        for(int y=n-1; y>=0; y--){
            if((i >= arr[y])&&(dp[i-arr[y]] != -1 )){
                if(best >= (dp[i-arr[y]]+1)){
                    best = dp[i-arr[y]] + 1;
                    first[i] = arr[y]; 
                }
            }
        }
        if(best != 999999) dp[i] = best;
    }
    cout << dp[sum] <<"\nways:\n";
    while(sum > 0){

        if((sum - first[sum] != 0 ))cout << first[sum] << " + ";
        else cout << first[sum];
        sum -= first[sum];
    }


}