#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>
#include <math.h>

template <typename T,typename Comp >
bool CP::priority_queue<T,Comp>::find(T k) const {
  //your code here
  for(int i = 0; i < size(); i++) {
    if (k == mData[i]) return true;
  }
  return false;
}

template <typename T,typename Comp >
int CP::priority_queue<T,Comp>::find_level(T k) const {
  //your code here
  int s, check;
  bool found = false;
  
  for(int i = 0; i < size(); i++) {
    if(mData[i] == k) {
      check = i;
      found = true;
    }
  }

  s = ceil((log(2 - 1) / log(2)) + log(check / log(2) - 1));

  if (!found)
  {
      return -1;
  }
  if (s < 0) {
    return 0;
  }  
  return s;
}

#endif

