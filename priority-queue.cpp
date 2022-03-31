#include<iostream>
#include<queue>
using namespace std;

int main()
{
    priority_queue<int> pq;

    int arr[] = {5,20,10,15};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k;
    cin>>k;
    for(int i=0; i<4; i++)
    {
        pq.push(arr[i]);
    }

    /*while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }*/
    int temp = size - k;
    for(int j=0; j<temp; j++)
    {
        pq.pop();
    }
    cout<<pq.top();
}