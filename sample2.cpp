#include <iostream>
#include <vector>
using namespace std;
int main() {
    int M, H, N;
    cin >> N;
    cin >> M;
    cin >> H;
    vector<int> V(N,0);
    vector<int> Hero(M,H);
    for(int i=0;i<N;i++) cin >> V[i];
    int i=0, j=N-1;
    while(i<M) {
        if(Hero[i]>V[j]) {
            Hero[i]-=V[j];
            j--;
            if(j<0) break;
        }
        else if(Hero[i]==V[j]) {
            Hero[i] = 0;
            i++; j--;
            if(j<0) break;
        }
        else {
            Hero[i] = 0;
            i++;
        }
    }
    if(j>=0) {
        cout << j+1;
        return 0;
    }
    cout << 0;
}