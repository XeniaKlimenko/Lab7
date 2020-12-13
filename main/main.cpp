#include <iostream>
#include "List.h"

int main()
{
  TList<char> c;
  c.InsFirst('a');
  c.InsLast('b');
  c.InsFirst('c');

  std::cout<< c << "\n";

 

  return 0;
}
