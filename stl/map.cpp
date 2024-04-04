#include<bits/stdc++.h>
using namespace std;

void init()
{
#ifndef ONLINE_JUDGE
  freopen("../input.txt", "r", stdin);
  freopen("../output.txt", "w", stdout);
#endif
}

int main(){
    init();

   // Insertion , Deletion , Searching in map -> O(log N)
    map<int,int> mp;
    // Map is implemented using BST data structure
   // Maps are associative containers that store elements in a mapped fashion. Each element has a key value and a mapped value. No two mapped values can have the same key values.

   // 1. Insert elements with a particular key in the map container –> O(log n)

    mp.insert({20,4});
    mp.insert({30,7});
    mp.insert({40,8});
    mp.insert({50,6});
    mp.insert({70,17});
    mp.insert({280,14});

    for(auto i: mp){
        cout<<i.first<<":"<<i.second<<endl;
    }

    // returns 1 if the element is present in the map else returns 0  -> O(log N)
    cout<<"occurence of 30 in the map: "<<mp.count(30)<<endl;


    // find element in map -> O(log N)

    auto itr = mp.find(30);

    if (itr != mp.end() ) {
        // O(log N)
        mp.erase(itr);
        cout<<"Element found and deleted"<<endl;
    }else {
        cout<<"Element is not found in the map"<<endl;
    }

    

}