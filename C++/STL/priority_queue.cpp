// #include<bits/stdc++.h>
#include<iostream>
#include<queue>             //Name: Md. Siam Hossain    Id: 04324205101088
#include<algorithm>
#include<vector>
#include<iterator>
using namespace std;       
int main(){

    //decleration of priority queue:
    priority_queue<int> pq;

    //priority queue value added:
    pq.push(11); pq.push(12); pq.push(13); 
    pq.push(14); pq.push(15); pq.push(16); 
    
    //empty check:
    if(pq.empty()) cout<<"Priority queue is empty."<<endl;
    else cout<<"Priority queue is not empty."<<endl;

    //priority queue size:
    cout<<pq.size()<<endl;

    //print value:
    while (!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
   
    //top element:
    cout<<pq.top()<<endl;

    //delete element:
    pq.pop();

    //emplace a priority queue element:
    priority_queue<int> pq1;
    pq1.emplace(741); pq1.emplace(852); pq1.emplace(963);
    pq1.emplace(111); pq1.emplace(456); pq1.emplace(898);

    //swap two queue elements:
    pq.swap(pq1);

    //assending order a element:
    priority_queue<int, vector<int>, greater<int>> pq2;
    

    return 0;
}