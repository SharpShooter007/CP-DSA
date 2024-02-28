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
  stack<int> s;

  // Pushing the value to the top of the stack
  s.push(1);
  s.push(2);
  s.push(3);
  s.push(4);
  s.push(5);

  // Finding size of the stack
  cout << "Size of the stack: " << s.size() << endl;

  // Findin if stack is empty

  if (s.empty())
  {
    cout << "Stack is empty" << endl;
  }
  else
  {
    cout << "Stack is not empty" << endl;
  }

  // Popping the value to the top of the stack

  while (!s.empty())
  {
    cout << s.top() << endl;
    s.pop();
  }

  // empty() – Returns whether the stack is empty – Time Complexity : O(1)
  // size() – Returns the size of the stack – Time Complexity : O(1)
  // top() – Returns a reference to the top most element of the stack – Time Complexity : O(1)
  // push(g) – Adds the element ‘g’ at the top of the stack – Time Complexity : O(1)
  // pop() – Deletes the most recent entered element of the stack – Time Complexity : O(1)
}
