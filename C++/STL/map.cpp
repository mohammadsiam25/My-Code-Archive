// #include<bits/stdc++.h>
#include<iostream>
#include<map>
#include<algorithm>
#include<iterator>
using namespace std;
int main(){

    //map declaration:
    map<int, int> mp;

    //input value of a map:
    mp.insert({1, 10}); mp.insert({2, 20}); mp.insert({3, 30});

    mp[6]=40; mp[4]=50; mp[5]=60;

    //print map value:
    for(auto it: mp){
        cout<<it.first<<" "<<it.second<<endl;
        // cout<<it->first<<" "<<it->second<<endl;
    }

    cout<<mp[2]<<"  "<<mp.at(5)<<endl;

    map<int, int>::iterator it;
    for(it=mp.begin(); it!=mp.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
        // cout<<it.first<<" "<<it.second<<endl;
    }

    //map size & max size:
    cout<<mp.size()<<endl;
    cout<<mp.max_size()<<endl;

    //clear map container:
    //mp.clear();

    //empty check:
    if(mp.empty()){
        cout<<"Map is Empty"<<endl;
    } else {
        cout<<"Map is not Empty"<<endl;
    }

    //different data type map:
    map<int, string> mp2;
    mp2.insert({1, "Siam"}); mp2.insert({2, "Kader"});
    mp2[3]="Abdullah"; mp2[4]="Mohammad";

    for(auto it: mp2) cout<<it.first<<" "<<it.second<<endl;

    map<char, int> mp3;
    mp3.insert({'A', 101}); mp3.insert({'B', 202});
    mp3['C']=303; mp3['D']=404;

    for(auto it: mp3) cout<<it.first<<" "<<it.second<<endl;

    //delete map key/value:
    mp2.erase(2);

    //map key/index count:
    mp2.count(3);

    //find map value:
    it = mp.find(8);
    if(it != mp.end()) cout<<"Found"<<endl;
    else cout<<"Not Found"<<endl;

    //lower bound function:
    it = mp.lower_bound(5);
    cout<<(*it).first<<" "<<(*it).second<<endl;

    //upper bound function:
    it = mp.upper_bound(3);
    cout<<(*it).first<<" "<<(*it).second<<endl;

    //assign operator;
    map<int, int> mp5;
    mp5 = mp;
    for(auto it: mp5) cout<<it.first<<" "<<it.second<<endl;
    
    //swap two map:
    map<int, int> mp6;
    mp6[1] = 1001; mp6[2] = 2002; mp6[3] = 3003; 
    mp6[4] = 1002; mp6[5] = 2022; mp6[6] = 3203; 
    
    mp5.swap(mp6);
    for(auto it: mp5) cout<<it.first<<" "<<it.second<<endl;
    
    
    return 0;
}