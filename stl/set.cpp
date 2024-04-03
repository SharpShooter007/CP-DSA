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


//  Sets in C++ are implemented using a binary search tree (BST) data structure. This means that the elements in a set are stored in a sorted order, and the operations of inserting, searching, and deleting elements from a set take O(log n) time, where n is the number of elements in the set.

//   Properties
// Storing order – The set stores the elements in sorted order.
// Values Characteristics – All the elements in a set have unique values.
// Values Nature – The value of the element cannot be modified once it is added to the set, though it is possible to remove and then add the modified value of that element. Thus, the values are immutable.
// Search Technique – Sets follow the Binary search tree implementation.
// Arranging order – The values in a set are unindexed.

// The time complexities for doing various operations on sets are:

// Insertion of Elements – O(log N)
// Deletion of Elements – O(log N)
// Searching of Elements - O(log N)


set<int>s;

s.insert(13);
s.insert(11);
s.insert(10);
s.insert(34);
s.insert(89);

for(auto itr = s.begin(); itr != s.end(); itr ++) {
    cout<<*itr<<" ";
}
cout<<endl;

vector<int> v = {10,34,55};

for(auto i: v) {
    // find the element in the set O(log N)
    auto itr = s.find(i);

    if (itr != s.end()){
        // deleting from the set (either we can pass iterator or value to it)
        s.erase(itr);
        cout<<i<<" is found in the set and deleted "<<endl;
    } else {
        cout<<i<<" is not found in the set "<<endl;
    }
}

cout<<endl;

for(auto i: s){
    cout<<i<<" ";
}

cout<<endl;

// Deleting all the elements from the set
s.clear()




}