#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main(){
    map<string,int> m; // key , key value
    m["Monyet"] = 1;
    m["kudanil"] = 2;
    m["Monyet"] = 3;
    m["BA"] = 4;
    m["AB"] = 5;
    m["aB"] = 10;
    // one key only has one key value
    cout << m["Monyet"] << " " << m["kudanil"] << " ";

    //check if a key exist;
    cout << m.count("Monyet") << endl;

    //Maps is automatically sorted based on the key
    for(auto z : m) cout << z.first << "  = " << z.second << endl;
}