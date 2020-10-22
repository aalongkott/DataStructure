#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

template <typename T>
void CP::queue<T>::move_to_front(size_t pos) {
    //your code here
    T element = mData[(pos+mFront)%mCap];

    for(int i = pos; i < mSize - 1; i++) {
        mData[(i + mFront)%mCap] = mData[(i + mFront + 1)%mCap];
    }

    mData[(mFront - 1)%mCap] = element;
    mFront--;
}

#endif
