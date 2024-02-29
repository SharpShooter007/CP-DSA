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

  // queue::empty()	O(1)
  // queue::size()	O(1)
  // queue::front()	O(1)
  // queue::back()	O(1)
  // queue::push(g) O(1)
  // queue::pop() 	O(1)

  queue<int> q;

  for (int i = 0; i < 10; i++)
  {
    q.push(i);
  }

  // size of the queue
  cout << "size of the queue: " << q.size() << endl;
  //  front of the queue
  cout << "front element of the queue: " << q.front() << endl;
  // back of the queue
  cout << "back element of the queue: " << q.back() << endl;

  // popping from the queue
  while (!q.empty())
  {
    cout << q.front();
    q.pop();
  }
}