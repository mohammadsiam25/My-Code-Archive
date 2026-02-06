// #include<bits/stdc++.h>
#include<iostream>
#include<map>
#include<algorithm>
#include<iterator>
using namespace std;
int main(){

    //multimap declaration:
    multimap<int, int> mp;

    //input value of a multimap:
    mp.insert({1, 10}); mp.insert({2, 20}); mp.insert({3, 30});
    mp.insert({2, 40}); mp.insert({4, 50}); mp.insert({3, 60});

    //print multimap value:
    for(auto it: mp){
        cout<<it.first<<" "<<it.second<<endl;
        // cout<<it->first<<" "<<it->second<<endl;
    }

    multimap<int, int>::iterator it;
    for(it=mp.begin(); it!=mp.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }

    //multimap size & max size:
    cout<<mp.size()<<endl;
    cout<<mp.max_size()<<endl;

    //clear multimap container:
    //mp.clear();

    //empty check:
    if(mp.empty()){
        cout<<"multimap is Empty"<<endl;
    } else {
        cout<<"multimap is not Empty"<<endl;
    }

    //different data type multimap:
    multimap<int, string> mp2;
    mp2.insert({1, "Siam"}); mp2.insert({2, "Kader"});
    mp2.insert({1, "Abdullah"}); mp2.insert({3, "Mohammad"});

    for(auto it: mp2) cout<<it.first<<" "<<it.second<<endl;

    multimap<char, int> mp3;
    mp3.insert({'A', 101}); mp3.insert({'B', 202});
    mp3.insert({'B', 101}); mp3.insert({'C', 202});

    for(auto it: mp3) cout<<it.first<<" "<<it.second<<endl;

    //delete multimap key/value:
    mp2.erase(2);

    //multimap key/index count:
    mp2.count(3);

    //find multimap value:
    it = mp.find(80);
    if(it != mp.end()) cout<<"Found"<<endl;
    else cout<<"Not Found"<<endl;

    //lower bound function:
    it = mp.lower_bound(5);
    cout<<(*it).first<<" "<<(*it).second<<endl;

    //upper bound function:
    it = mp.upper_bound(3);
    cout<<(*it).first<<" "<<(*it).second<<endl;

    //assign operator;
    multimap<int, int> mp5;
    mp5 = mp;
    for(auto it: mp5) cout<<it.first<<" "<<it.second<<endl;
    
    //swap two multimap:
    multimap<int, int> mp6;
    mp.insert({1, 1010}); mp.insert({2, 2020}); mp.insert({2, 3030});
    mp.insert({4, 4030}); mp.insert({6, 5000}); mp.insert({1, 6200});
    
    mp5.swap(mp6);
    for(auto it: mp5) cout<<it.first<<" "<<it.second<<endl;
    
    
    return 0;
}