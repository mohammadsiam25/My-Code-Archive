// #include<bits/stdc++.h>
#include<iostream>
#include<stack>             //Name: Md. Siam Hossain    Id: 04324205101088
#include<algorithm>
#include<iterator>
using namespace std;       
int main(){

    //stack decleration:
    stack<int> st;

    //stack value added:
    st.push(25);    st.push(63);
    st.push(13);    st.push(47);
    st.push(5);     st.push(90);

    //empty check:
    if(st.empty()){
        cout<<"Stack is Empty"<<endl;
    } else {
        cout<<"Stack is not Empty"<<endl;
    }

    //stack size:
    cout<<st.size()<<endl;

    //print top value:
    cout<<st.top()<<endl;

    //delete stack element:
    st.pop();

    //print stack elements:
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;


    return 0;
}