#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while(T--){
        int N, X;
        cin >> N >> X;
        vector<int> A(N);
        for(int i=0; i<N; i++) cin >> A[i];

        sort(A.begin(), A.end());
        int size = unique( A.begin(), A.end() ) - A.begin();
        if(size < X) cout << "Bad" << endl;
        else if(size > X) cout << "Average" << endl;
        else cout << "Good" << endl;
    }
}