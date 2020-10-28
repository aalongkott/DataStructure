#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>


template <typename T>
void CP::queue<T>::move_to_back(size_t pos) {
  //write your code here
  T data = mData[(pos + mFront)%mCap];
  for(int i = pos; i < this->size() - 1; i++) {
    mData[(i + mFront)%mCap] = mData[(i + mFront + 1)%mCap];
  }
  mData[(this->size() - 1 + mFront)%mCap] = data;
}

#endif
