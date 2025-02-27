#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int num[n];
    for(int i=0; i<n; i++){
        cin >> num[i];
    }
    for(int i=0; i<n-1; i++){
        for(int y=0; y<n-1; y++){
            if(num[y]>num[y+1]){
                swap(num[y],num[y+1]);
            }
        }
    }

    for(int i=0; i<n; i++) cout << num[i] << " ";
}
// complexity O(N^2);