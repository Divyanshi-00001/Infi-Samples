#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
int main() {
    int N;
    cin >> N;
    vector<int> array(N,0);
    for(int i=0;i<N;i++) cin >> array[i];
    unordered_map<int,int> mp;
    int m1 = (N-1)/2, m2 = N/2;
    int x, maxi=0;
    for(int i=0;i<N;i++) {
        if(i<=m1) {
            x = array[i] + (m1-i);
        }
        else {
            x = array[i] + (i-m2);
        }
        mp[x]++;
        maxi = max(maxi, mp[x]);
    }
    cout << N-maxi;
}


