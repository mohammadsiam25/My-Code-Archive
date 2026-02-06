// #include<bits/stdc++.h>
#include<iostream>
#include<vector>             //Name: Md. Siam Hossain    Id: 04324205101088
#include<algorithm>
#include<iterator>
using namespace std;       
int main(){

    //vector declaration without value & with value:
    vector<int> v;
    vector<int> v1 = {2, 3, 9, 10, 14, 19};

    //vector input value:
    v.push_back(14);    v.push_back(25);    
    v.push_back(36);    v.push_back(13);

    //vector size:
    cout<<v.size()<<endl;
    cout<<v1.size()<<endl;

    //vector print:
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    for(int i=0; i<v1.size(); i++){
        cout<<v1.at(i)<<" ";
    }
    cout<<endl;

    //front value of a vector:
    cout<<v.front()<<endl;
    cout<<v1.front()<<endl;

    //back value of a vector:
    cout<<v.back()<<endl;
    cout<<v1.back()<<endl;

    //clear a vector:
    v.clear();  v1.clear();

    //resize of a vector:
    v.resize(0);   v1.resize(8);

    //empty check of a vector:
    if(!v.empty()){
        cout<<"Not empty"<<endl;
    } else {
        cout<<"Empty"<<endl;
    }

    //delete a vector element from last:
    v.pop_back();   v1.pop_back();

    //delete a vector element from a specific position:
    v.erase(v.begin());     v.erase(v.begin()+3);
    v1.erase(v1.begin());  v1.erase(v1.begin()+5);

    //delete multiple element from a vector:
    v.erase(v.begin()+2, v.end());
    v1.erase(v1.begin()+3, v1.begin()+5);

    //delete specific element delete from a vector:
    v.erase(find(v.begin(), v.end(), 6));
    v1.erase(find(v1.begin(), v1.end(), 3));

    //add a vector element of sepecific position:
    v.insert(v.begin()+2, 15);
    v1.insert(v1.begin()+5, 30);

    //add multiple vector element of specific position:
    v.insert(v.begin()+2, 3, 17);
    v1.insert(v1.begin()+4, 2, 88);

    //swap two vector:
    vector<int> vec1 = {123, 145, 658, 258, 367};
    vector<int> vec2 = {1234, 4567, 7890, 9510};
    swap(vec1, vec2);
    //vec1.swap(vec2);


    //vector element sorting;
    sort(vec1.begin(), vec1.end());

    //reverse vector element:
    reverse(vec2.begin(), vec2.end());

    //iterator:
    vector<int> vec3 = {2545, 2358, 2583, 2588, 3607};

    vector<int> :: iterator it;

    for(it=vec3.begin(); it!=vec3.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    //------ 
    vector<int> vec4 = {2001, 2124, 1024, 2530, 3004};

    for(auto it=vec4.begin(); it!=vec4.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;


    return 0;
}