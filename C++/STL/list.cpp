// #include<bits/stdc++.h>
#include<iostream>
#include<list>
#include<algorithm>
#include<iterator>
using namespace std;
int main(){

    //list decleration:
    list<int> li;
    list<char> ch;

    //add value into list:
    li.push_back(25);   li.push_back(35);   li.push_back(48);   //add from back
    li.push_front(12);  li.push_front(8);   li.push_front(20);  //add from front

    ch.push_back('s');  ch.push_back('i');  ch.push_back('m');  //add from back
    ch.push_front('o'); ch.push_front('c'); ch.push_front('d'); //add from front

    //show front & back element of list:
    cout<<li.front()<<"  "<<li.back()<<endl;
    cout<<ch.front()<<"  "<<ch.back()<<endl;

    //delete list element from front & back:
    li.pop_front();     li.pop_back();
    ch.pop_front();     ch.pop_back();

    //print list elements using iterator:
    list<int> :: iterator it;
    for(it=li.begin(); it!=li.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    //--using auto iterator: 
    for(auto it : ch){
        cout<<it<<" ";
    }
    cout<<endl;

    //list size:
    cout<<li.size()<<"  "<<ch.size()<<endl;

    //list clear:
    li.clear();     //ch.clear();

    //check list empty or not:
    if(li.empty()){
        cout<<"List is empty"<<endl;
    } else {
        cout<<"List is not empty"<<endl;
    }

    if(ch.empty()){
        cout<<"List is empty"<<endl;
    } else {
        cout<<"List is not empty"<<endl;
    }

    //add fixed position list element:
    li.insert(li.begin(), 200); //add first position
    ch.insert(ch.begin(), 'P'); //add first position

    it = li.begin();
    advance(it, 3);     //change index position for add element
    li.insert(it, 500);
    
    advance(it, 4);
    li.insert(it, 2, 100);  //multiple value add 

    //delete fixed position list element:
    li.erase(li.begin());   //delete first position

    list<int> :: iterator it1, it2; 
    it1 = it2 = li.begin();
    advance(it2, 3);
    li.erase(it1, it2); //delete multiple value at a time

    //specific element remove:
    li.remove(25);  ch.remove('o');

    //reverse list element:
    li.reverse();   ch.reverse();

    //sort list element:
    li.sort();      ch.sort();

    //unique element of a list:
    li.unique();    ch.unique();

    //swap two list element:
    list<int> li1, li2;
    li1.push_back(256);   li1.push_back(355);   li1.push_back(848);  
    li2.push_front(3);  li2.push_front(6);   li2.push_front(9);

    li1.swap(li2);

    //marge two list into one list:
    li1.merge(li2);

    //reverse list element print:
    list<int> l = {1, 3, 5, 7, 9, 11, 13};
    for(auto it=l.rbegin(); it!=l.rend(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    list<float> fl = {1.5, 3.0, 5.5, 7.3, 9.6, 11.1, 13.4};
    for(auto it=fl.rbegin(); it!=fl.rend(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    
    return 0;
}