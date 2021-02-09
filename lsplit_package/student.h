#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
CP::list<T> CP::list<T>::split(iterator it, size_t pos)
{
  //write your code here

  auto end = mHeader->prev;
  int oldSize = size();
  //fix own list
  it.ptr->prev->next = mHeader;
  mHeader->prev = it.ptr->prev;

  mSize = pos;

  //to be returned
  CP::list<T> result;
  //front
  result.mHeader->next = it.ptr;
  it.ptr->prev = result.mHeader;
  //back
  end->next = result.mHeader;
  result.mHeader->prev = end;

  result.mSize = oldSize - pos;

  return result;
}

#endif
