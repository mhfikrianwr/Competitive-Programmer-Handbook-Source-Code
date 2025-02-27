#include <bits/stdc++.h>
using namespace std;
int main(){
    // iterators is a variable that stores a memory address of another variable
    // & address-of operater
    // * dereference operator
    // v.begin() points at the first element
    // v.end() points outside the datstruct
    string s = "Hello";
    string *pS = &s; 
    cout << pS << endl; // only output the address
    cout << *pS; //return the value in the address
    // vector<int> v = {1,2,3,4};
    // int initial = v.begin(), last = v.end();
    // cout << v.begin() << " " << v.end();
}