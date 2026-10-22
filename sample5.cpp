#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <numeric>
using namespace std;
int gcd(int a, int b) {
    while(b!=0) {
        int t = b;
        b = a%b;
        a = t;
    }
    return a;
}
int main() {
    string s;
    cin >> s;
    unordered_map <char, int> mp;
    int mini=0;
    for(int i=0;i<s.length();i++) {
        mp[s[i]]++;
    }
    for(auto a : mp) {
        if(mini==0) {
            mini = a.second;
        }
        else {
            mini = gcd(mini, a.second);
        }
    }
    cout << mini;
}