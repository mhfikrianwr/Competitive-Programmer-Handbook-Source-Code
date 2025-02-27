#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
int main(){
    set<int> s; // set is automatically sorted
    s.insert(3); s.insert(3); s.insert(2);
    cout << s.count(3) << endl; // return 1 cause set not multiset
    s.erase(3);
    cout << s.count(3) << endl;
    cout << s.size() << endl;
    cout << "_____________________" << endl;
    s.insert(3); s.insert(1); s.insert(4);
    for(auto y : s) cout << y << " " ;
    cout << endl;
    multiset<int> v; 
    v.insert(2); v.insert(2); 
}