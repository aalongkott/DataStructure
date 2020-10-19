#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
std::vector<T> CP::queue<T>::to_vector(int k) const {
  std::vector<T> res;
  //write your code only here
  //

  k = k > this->size() ? this->size(): k;

  for (int i = 0; i < k; i++) {
    res.push_back(this->mData[i]);
  }

  return res;
}

template <typename T>
CP::queue<T>::queue(iterator from,iterator to) {
  //write your code only here
  queue<T> ans; 
  for(auto it = from;it<to;it++){
    ans.push(*it);
  }
  *this = ans;


}

#endif
