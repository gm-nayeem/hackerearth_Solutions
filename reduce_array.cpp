#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();

    int m, n;
    cin >> m >> n;

    priority_queue<int> pq;

    while(m--){
        int x;
        cin >> x;
        pq.push(x);
    }

    int sum = 0;
    while(n--){
        int a = pq.top();
        pq.pop();
        sum += a;
        pq.push(a-1);

    }

    cout << sum << endl;

}