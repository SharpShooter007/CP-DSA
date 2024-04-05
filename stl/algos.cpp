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

    vector<int> v = {323,443,90,332,45,12,34,9,54,43};

    auto itr = max_element(v.begin(),v.end()); // T(n) = O(N)
    cout<<"Max element in the vector is: "<<*itr<<endl;

    itr = min_element(v.begin(), v.end()); // T(n) = O(N)
    cout<<"Min element in the vector is: "<<*itr<<endl;

    // T(n) = O(N)
    cout<<"No of occurences of 45 in vector : "<<count(v.begin(),v.end(),45)<<endl;

    // T(n) = O(N)
    auto pls = find(v.begin(),v.end(),332);

    if (pls != v.end()) {
        cout<<"Elment found in the vector"<<endl;
    } else {
        cout<<"Element not found in the vector"<<endl;
    }


    auto lwr_bnd = lower_bound(v.begin(), v.end(), 12); // O(log(n))

    if (lwr_bnd != v.end()) {
        cout<<"First element which is not less than 12 is : "<<*lwr_bnd<<endl;
    }

    auto uppr_bnd = lower_bound(v.begin(), v.end(),12); // O(log(n))

    if (uppr_bnd != v.end()) {
        cout<<"First element which is greater than 12 is : "<<*uppr_bnd<<endl;
    }

}