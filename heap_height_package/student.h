#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>
#include <math.h>

template <typename T,typename Comp >
int CP::priority_queue<T,Comp>::height() const {
  //write your code here
  int s;

  s = ceil((log(2 - 1) / log(2)) + log(size() + 1)/ log(2) - 1);

  if (s < 0) {
    return -1;
  }  
  return s;
}

#endif

