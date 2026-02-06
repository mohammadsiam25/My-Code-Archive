// #include<bits/stdc++.h>
#include<iostream>
#include<deque>
#include<algorithm>
#include<iterator>
using namespace std;
int main(){

    //deque declaration:
    deque<int> dq;

    //deque value add back and front side:
    dq.push_back(10); dq.push_back(20); dq.push_back(30);
    dq.push_front(1); dq.push_front(2); dq.push_front(3);

    //print deque elements:
    for(int i=0; i<dq.size(); i++){
        //cout<<dq[i]<<" ";
        cout<<dq.at(i)<<" ";
    }
    cout<<endl;

    //deque size:
    cout<<dq.size()<<endl;

    //front & back element show:
    cout<<dq.front()<<"  "<<dq.back()<<endl;

    //delete from back & front element:
    dq.pop_back();      dq.pop_front(); 

    //empty check:
    if(dq.empty()) cout<<"Deque is empty."<<endl;
    else cout<<"Deque is not empty."<<endl;

    //clear deque:
    dq.clear();

    //delete specific element:
    deque<int>::iterator it;
    it = dq.begin();
    dq.erase(it); //1st element delete

    advance(it, 3);
    dq.erase(it);

    deque<int>::iterator it1;
    it = it1 = dq.begin();
    advance(it1, 3);
    dq.erase(it, it1); //multiple element delete

    //add specific position element:
    it = dq.begin();
    dq.insert(it, 369); //1st position add element

    advance(it, 2);
    dq.insert(it, 3, 89); //multiple element add

    //print deque;
    for(auto it2: dq) cout<<it2<<"  ";
    cout<<endl;



    return 0;
}