#include <bits/stdc++.h>
using namespace std;

void Iterate_Vector(vector<int> &v)
{
  for (auto x : v)
  {
    cout << x << " ";
  }
  cout << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("../input.txt", "r", stdin);
  freopen("../output.txt", "w", stdout);
#endif

  // The time complexity for doing various operations on vectors is-
  //    Random access – constant O(1)
  //    Insertion or removal of elements at the end – constant O(1)
  //    Insertion or removal of elements – linear in the distance to the end of the vector O(N)
  //    Knowing the size – constant O(1)
  //    Resizing the vector- Linear O(N)

  // Initializing the vector
  vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

  // 1st way of iterating over the vector
  for (auto x : v)
  {
    cout << x << " ";
  }
  cout << endl;

  // 2nd way of iterating over the vector
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
  cout << endl;

  // 3rd way of iterating over the vector

  for (auto itr = v.begin(); itr != v.end(); itr++)
  {
    cout << *itr << " ";
  }
  cout << endl;

  // getting the size of the vector
  cout << "sie of the vector : " << v.size() << endl; // O(1) Complexity

  // Pushing the elements at the back of the vector
  for (int i = 8; i < 15; i++)
  {
    v.push_back(i);
  }

  Iterate_Vector(v);

  cout << "Old size of the vector : " << v.size() << endl;

  // Popping the elements from the back of the vector
  v.pop_back(); // O(1) Complexity

  cout << "New size of the vector after popping back one element : " << v.size() << endl;

  // Deleting the elements from the back of the vector from in between

  // Deleting the fron element of the vector ( O(N) complexity)
  v.erase(v.begin());

  Iterate_Vector(v);

  // Deleting the element from the mid of the vector

  v.erase(v.begin() + 3); // O(N) complexity
  Iterate_Vector(v);

  // Inserting the element in between the vector  (It inserts new elements before the element at the specified position)
  v.insert(v.begin(), 99); // O(N) complexity

  Iterate_Vector(v);

  v.insert(v.begin() + 1, 100); // O(N) Complexity
  Iterate_Vector(v);

  // clearing all the elements of the vector
  v.clear();
  cout << v.size() << endl;
}
