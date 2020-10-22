#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <map>
#include <set>

template <typename T>

std::vector<std::pair<T,size_t> > CP::queue<T>::count_multi(std::vector<T> &k) const {
    //write your code here
    std::vector<std::pair<T, size_t> > ans;

    std::map<T, int> m;
    for(auto e: k) m[e] = 0;
    for(int i = 0; i < mSize; i++) {
        if(m.find(mData[(i + mFront)%mCap]) != m.end()) m[mData[(i + mFront)%mCap]]++;
    }
    
    for(int i = 0; i < k.size(); i++) {
        auto it = m.find(k[i]);
        ans.push_back(*it);
    }

    return ans;
}

#endif
