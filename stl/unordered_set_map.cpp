#include<bits/stdc++.h>
using namespace std;

void init()
{
#ifndef ONLINE_JUDGE
  freopen("../input.txt", "r", stdin);
  freopen("../output.txt", "w", stdout);
#endif
}


int main() {
    init();

    // Unordered set and map is implemented using Hash Data structure

   // Insertion -> O(1)
   // Deletion -> O(1)
   // Searching -> O(1)


    unordered_set<int> s;

    s.insert(23) ;
    s.insert(33) ;
    s.insert(63) ;
    s.insert(223) ;
    s.insert(236) ;
    s.insert(231) ;

    for(auto i: s){
      cout<<i<<": ";
    }
    cout<<endl;



    // unordered map

   unordered_map<int,int>mp;

   mp.insert({1,4});
   mp.insert({14,45});
   mp.insert({17,41});
   mp.insert({41,40});
   mp.insert({13,42});

   for(auto ele : mp) {
    cout<<"first: "<<ele.first<<",second: "<<ele.second<<endl;
   }


  

}