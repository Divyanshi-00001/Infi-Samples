#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int E;
    cin >> E;
    int N;
    cin >> N;
    vector<int> A(N,0);
    for(int i=0;i<N;i++) cin >> A[i];
    // tired if E is 0 or less
    // min. no. of exer.?
    // every unique exer. can be performed at most two times.
    int c=0;
    sort(A.begin(),A.end());
    for(int i=N-1;i>=0;i--) {
        if(E>0) {
            E-=A[i];
            c++;
            cout << E << " " << c << endl;
        }
        else break;
        if(E>0) {
            E-=A[i];
            c++;
            cout << E << " " << c << endl;
        }
        else break;
    }
    if(E>0) {
        cout << "-1";
        exit(0);
    }
    cout << c;
}