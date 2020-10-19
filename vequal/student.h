#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
T CP::queue<T>::operator[](int idx) {
    //write something here
    //
    // you need to return something
    // return  
    idx = idx < 0 ? (idx+this->size() + this->mFront) % this->mCap: (idx + this->mFront) % this->mCap;

    return this->mData[idx];
}

#endif
