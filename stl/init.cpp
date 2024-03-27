#include <iostream>
#include "init.h"
using namespace std;

void init()
{
#ifndef ONLINE_JUDGE
  freopen("../input.txt", "r", stdin);
  freopen("../output.txt", "w", stdout);
#endif
}