#include <bits/stdc++.h>
using namespace std;

void init()
{
#ifndef ONLINE_JUDGE
  freopen("../input.txt", "r", stdin);
  freopen("../output.txt", "w", stdout);
#endif
}

int main()
{
  init();
  // max head
  priority_queue<int> max_hp;
  // min heap
  priority_queue<int, vector<int>, greater<int>> min_hp;

  vector<int> v = {89, 30, 45, 12, 48, 90, 98, 28};

  for (auto x : v)
  {
    max_hp.push(x);
    min_hp.push(x);
  }

  while (max_hp.size() > 0)
  {
    cout << max_hp.top() << " ";
    max_hp.pop();
  }

  cout << endl;
  while (min_hp.size() > 0)
  {
    cout << min_hp.top() << " ";
    min_hp.pop();
  }
}