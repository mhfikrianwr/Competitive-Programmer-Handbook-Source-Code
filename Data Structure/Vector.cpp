#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v= {1,3}; // 1 3
    vector<int> z(10,0); // 10 elemen  with initial value 0
    v.push_back(2); // 1 3 2
    v.insert(v.begin(),0); // 0 1 3 2
    v.insert(v.begin()+1,11); // 0 11 1 3 2
    v.pop_back(); // 0 11 1 3 
    v.erase(v.begin() + 1); // 0 1 3

    string s = "bagsbsdagsa";
    for(auto y : s) cout << y << " ";
    cout << endl;
    sort(s.begin(),s.end());
    cout << s;

    //upperbound
    //upper bound : find first value that is greater then n, must be sorted cause works like binary search
    //Lower bound : find first value that is greater or equals to n, must be sorted
    cout << endl;
    vector<int> nilai = {1, 3, 4, 5 ,5 , 6, 9, 9, 10};
    cout << *upper_bound(nilai.begin(),nilai.end(),5) << endl; // will return 6
    cout << *lower_bound(nilai.begin(),nilai.end(),5) << endl; //return 5

    //finding a value smaller or greater than a value;
    auto ub = upper_bound(nilai.begin(),nilai.end(),5);
    cout << "\nNumber of greater elemen than 5 : " <<  nilai.end() - ub << endl;
    auto lb = lower_bound(nilai.begin(),nilai.end(),5);
    cout << "Number of elemen less than 5 : " << lb - nilai.begin() << endl;

    string t = "hatihati";
    cout << t.substr(3,2); // start from index 3 with 2 elemen
}