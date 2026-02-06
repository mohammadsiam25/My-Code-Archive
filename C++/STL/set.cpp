// #include<bits/stdc++.h>
#include<iostream>
#include<set>
#include<algorithm>
#include<iterator>
using namespace std;
int main(){

    //set declaration:
    set<int> s;

    //value add in a set:
    s.insert(111); s.insert(222); s.insert(333);
    s.insert(444); s.insert(555); s.insert(666);
    
    //set size:
    cout<<s.size()<<endl;

    //set max size:
    cout<<s.max_size()<<endl;

    //print set value:
    for(auto it: s){
        cout<<it<<" ";
    }
    cout<<endl;

    set<int>::iterator it1;
    for(it1 = s.begin(); it1!=s.end(); it1++){
        cout<<*it1<<" ";
    }
    cout<<endl;
    
    //descending order set element sort:
    set<int, greater<int>> s1;
    s1.insert(12); s1.insert(3); s1.insert(3);
    s1.insert(4); s1.insert(56); s1.insert(64);

    for(auto it: s1){
        cout<<it<<" ";
    }
    cout<<endl;

    //set clear:
    s.clear();

    //set empty check:
    if(s.empty()){
        cout<<"set is Empty"<<endl;
    } else {
        cout<<"set is not Empty"<<endl;
    }

    //delete specific element:
    set<int>::iterator it2;
    it2 = s1.begin();
    s1.erase(it2); //1st element delete

    advance(it2, 3);
    s1.erase(it2);

    set<int>::iterator it3;
    it2 = it3 = s1.begin();
    advance(it3, 3);
    s1.erase(it2, it3); //multiple element delete

    //add specific position element:
    it2 = s1.begin();
    s1.insert(it2, 369); //1st position add element

    //find set specific element;
    it2 = s1.find(4);
    if(it2 != s1.end()) cout<<"Found"<<endl;
    else cout<<"Not Found"<<endl;

    //count exist element:
    cout<<s1.count(3)<<endl;

    //lower bound function:
    set<int> s2 = {1, 2, 3, 4, 5, 6};
    for(auto it: s2) cout<<it<<" "; cout<<endl;

    set<int>::iterator it4;
    it4 = s2.lower_bound(5);
    if(it4 == s2.end()) cout<<"The elemnent is larger."<<endl;
    else cout<<"The lower bound of 5 is "<<*it4<<endl;

    //upper bound function:
    set<int> s3 = {4, 5, 6, 7, 8, 9};
    for(auto it: s3) cout<<it<<" "; cout<<endl;

    set<int>::iterator it5;
    it5 = s3.upper_bound(8);
    if(it5 == s3.end()) cout<<"The element is larger or equal to the greater."<<endl;
    else cout<<"The upper bound of 8 is "<<*it5<<endl;

    //emplace function(like insert value):
    s.emplace(58); s.emplace(98); s.emplace(78);
    s.emplace(9); s.emplace(23);

    //swap two set element:
    set<int> s5 = {1, 2, 3};
    set<int> s6 = {4, 5, 6};
    s5.swap(s6);
    for(auto it: s5) cout<<it<<" "; cout<<endl;

    //assign operator:
    set<float> fl = {1.2, 3.4, 5.6, 7.8, 9.0};
    set<float> ft;
    ft = fl;
    for(auto it: ft) cout<<it<<" "; cout<<endl;

    return 0;
}