#ifndef __STUDENT_H_
#define __STUDENT_H_
#include<vector>
#include<algorithm>


template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int,T> > data) {
  //write your code here
  std::vector<int> indexs, elements;
  CP::vector<T> ans;

  std::sort(data.begin(), data.end());

  for(auto p: data) {
    indexs.push_back(p.first);
    elements.push_back(p.second);
  }

  int count = 0;

  for(int i = 0; i < size(); i++) {
    if(i == indexs[count]) {
      ans.push_back(elements[count]); 
      count++;
    }
    ans.push_back(mData[i]);
  }
  
  while (count < indexs.size()) {
    ans.push_back(elements[count]);
    count++;
  }

  *this = ans;
}

#endif
