#include "bits/stdc++.h"
using namespace std;

int main()
{
    // Priority Queue is a SORTED QUEUE (Searching min/max in a const time)

    priority_queue<int>pq;
    pq.emplace(10);
    pq.emplace(20);
    for(int i : {600,-100,800,150,200})
        pq.push(i);

    cout<<"pq.top() before pop : "<<pq.top()<<endl; // 800
    pq.pop(); // Removes 800 and the cursor becomes at 600
    cout<<"pq.top() after pop : "<<pq.top()<<endl; // 600

    cout<<endl;

    cout<<"Priority Queue values : "<<endl;
    while(!pq.empty())
    {
        cout<<pq.top()<<endl;
        pq.pop();
    }

    cout<<endl;

    // Changing priority queue :
    priority_queue<int , vector<int> , greater<int>>pq1;
    for(int i : {600,-100,800,150,200})
        pq1.push(i);

    cout<<"pq1.top() : "<<pq1.top()<<endl; // -150

    cout<<endl;

    cout<<"Priority Queue Greater Values : "<<endl;
    while(!pq1.empty())
    {
        cout<<pq1.top()<<endl;
        pq1.pop();
    }

    return 0;
}
