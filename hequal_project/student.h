#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T, typename Comp>
bool CP::priority_queue<T, Comp>::operator==(const CP::priority_queue<T, Comp> &other) const
{

  //write your code here
  if (this->size() != other.size()) {
    return false;
  }
 
  CP::priority_queue<T, Comp> copy_this, copy_other;

  copy_this = CP::priority_queue(*this);
  copy_other = CP::priority_queue(other);

  while (!copy_this.empty()) {
      if (copy_this.top() != copy_other.top()) {
        return false;
      }
      copy_this.pop();
      copy_other.pop();
  }
}

#endif
