#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();

    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    priority_queue<int> pq;

    for(int i=0; i<n; i++){

        pq.push(arr[i]);

        if(pq.size() >= 3){
            int a1 = pq.top();
            pq.pop();

            int a2 = pq.top();
            pq.pop();

            int a3 = pq.top();
            pq.pop();

            cout << 1LL * a1 * a2 * a3 << endl;

            pq.push(a1);
            pq.push(a2); 
            pq.push(a3);

        }
        else cout << "-1" << endl;

    }
    
}