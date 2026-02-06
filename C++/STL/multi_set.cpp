// #include<bits/stdc++.h>
#include<iostream>
#include<set>
#include<algorithm>
#include<iterator>
using namespace std;
int main(){

    //multiset declaration:
    multiset<int> ms;

    //value add in a multiset:
    ms.insert(111); ms.insert(222); ms.insert(333);
    ms.insert(444); ms.insert(555); ms.insert(666);
    
    //multiset size:
    cout<<ms.size()<<endl;

    //multiset max size:
    cout<<ms.max_size()<<endl;

    //print multiset value:
    for(auto it: ms){
        cout<<it<<" ";
    }
    cout<<endl;

    multiset<int>::iterator it1;
    for(it1 = ms.begin(); it1!=ms.end(); it1++){
        cout<<*it1<<" ";
    }
    cout<<endl;
    
    //descending order multiset element sort:
    multiset<int, greater<int>> ms1;
    ms1.insert(12); ms1.insert(3); ms1.insert(3);
    ms1.insert(4); ms1.insert(56); ms1.insert(64);

    for(auto it: ms1){
        cout<<it<<" ";
    }
    cout<<endl;

    //multiset clear:
    ms.clear();

    //multiset empty check:
    if(ms.empty()){
        cout<<"multiset is Empty"<<endl;
    } else {
        cout<<"multiset is not Empty"<<endl;
    }

    //delete specific element:
    multiset<int>::iterator it2;
    it2 = ms1.begin();
    ms1.erase(it2); //1st element delete

    advance(it2, 3);
    ms1.erase(it2);

    multiset<int>::iterator it3;
    it2 = it3 = ms1.begin();
    advance(it3, 3);
    ms1.erase(it2, it3); //multiple element delete

    //add specific position element:
    it2 = ms1.begin();
    ms1.insert(it2, 369); //1st position add element

    //find multiset specific element;
    it2 = ms1.find(4);
    if(it2 != ms1.end()) cout<<"Found"<<endl;
    else cout<<"Not Found"<<endl;

    //count exist element:
    cout<<ms1.count(3)<<endl;

    //lower bound function:
    multiset<int> ms2 = {1, 2, 3, 4, 5, 6};
    for(auto it: ms2) cout<<it<<" "; cout<<endl;

    multiset<int>::iterator it4;
    it4 = ms2.lower_bound(5);
    if(it4 == ms2.end()) cout<<"The elemnent is larger."<<endl;
    else cout<<"The lower bound of 5 is "<<*it4<<endl;

    //upper bound function:
    multiset<int> ms3 = {4, 5, 6, 7, 8, 9};
    for(auto it: ms3) cout<<it<<" "; cout<<endl;

    multiset<int>::iterator it5;
    it5 = ms3.upper_bound(8);
    if(it5 == ms3.end()) cout<<"The element is larger or equal to the greater."<<endl;
    else cout<<"The upper bound of 8 is "<<*it5<<endl;

    //emplace function(like insert value):
    ms.emplace(58); ms.emplace(98); ms.emplace(78);
    ms.emplace(9); ms.emplace(23);

    //swap two multiset element:
    multiset<int> ms5 = {1, 2, 3};
    multiset<int> ms6 = {4, 5, 6};
    ms5.swap(ms6);
    for(auto it: ms5) cout<<it<<" "; cout<<endl;

    //assign operator:
    multiset<float> fl = {1.2, 3.4, 5.6, 7.8, 9.0};
    multiset<float> ft;
    ft = fl;
    for(auto it: ft) cout<<it<<" "; cout<<endl;

    return 0;
}