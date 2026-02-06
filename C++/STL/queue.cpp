// #include<bits/stdc++.h>
#include<iostream>
#include<queue>             //Name: Md. Siam Hossain    Id: 04324205101088
#include<algorithm>
#include<vector>
#include<ranges>
#include<iterator>
using namespace std;       
int main(){

    //queue decleration:
    queue<int> q;

    //queue value added:(It's also called enqueue.)
    q.push(25);    q.push(63);
    q.push(13);    q.push(47);
    q.push(5);     q.push(90);

    //empty check:
    if(q.empty()){
        cout<<"queue is Empty"<<endl;
    } else {
        cout<<"queue is not Empty"<<endl;
    }

    //queue size:
    cout<<q.size()<<endl;

    //print front value:
    cout<<q.front()<<endl;

    //print back value:
    cout<<q.back()<<endl;

    //delete queue element:(It's also called dequeue.)
    q.pop();

    //print queue elements:
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;

    //emplace a queue element:(It's like a push element.)
    q.emplace(45);  q.emplace(2);   q.emplace(9);
    q.emplace(98);  q.emplace(8);

    //swap two queue elements:
    queue<int> q1, q2;

    q1.push(10); q1.push(20); q1.push(30);
    q2.push(1); q2.push(2); q2.push(3);

    q1.swap(q2);

    while(!q1.empty()){
        cout<<q1.front()<<" ";
        q1.pop();
    }
    cout<<endl;

    while(!q2.empty()){
        cout<<q2.front()<<" ";
        q2.pop();
    }
    cout<<endl;

    return 0;
}