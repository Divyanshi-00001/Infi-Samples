// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main() {
//     int N, K;
//     cin >> N;
//     vector<int> A(N,0);
//     for(int i=0;i<N;i++) cin >> A[i];
//     cin >> K;
//     int d=0, p=-1,q=-1, pd;
//     for(int i=0;i<N-K;i++) {
//         pd = d;
//         d = max(d, A[i]-A[i+K]);
//         if(pd!=d) {
//             p=i;
//             q=i+K;
//         }
//     }
//     if (p != -1 && q != -1) {
//         swap(A[p], A[q]);
//     }
//     for(int i=0;i<N;i++) {
//         cout << A[i] << " ";
//     }
// }

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int N, K;
    cin >> N;
    vector<int> A(N,0);
    for(int i=0;i<N;i++) cin >> A[i];
    cin >> K;
    for (int i = 0; i < N; i++) {
        int mi = -1;
        int mv = A[i];
        int limit = min(N-1, i+K);
        for (int j = i + 1; j <= limit; j++) {
            if (A[j] <= mv) {
                mv = A[j];
                mi = j;
            }
        }
        if (mi!=-1 && A[mi]<A[i]) {
            swap(A[i], A[mi]);
            break; 
        }
    }
    for(int i=0;i<N;i++) {
        cout << A[i] << " ";
    }
}

