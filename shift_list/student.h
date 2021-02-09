#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::list<T>::shift_left()
{
  // your code here
  insert(end(), mHeader->next->data);
  erase(mHeader->next);
}

#endif