#include <iostream>
#include <deque>

int main ()
{
  std::deque<int> mydeque;

  // set some values (from 1 to 10)
  for (int i=1; i<=10; i++) mydeque.push_back(i);

  // erase the 6th element
  mydeque.erase (mydeque.begin()+5);

  // erase the first 3 elements:
  mydeque.erase (mydeque.begin(),mydeque.begin()+3);

  std::cout << "mydeque contains:";
  for(int i = 0; i < mydeque.size(); i++)
    std::cout << mydeque[i] << " ";
}

