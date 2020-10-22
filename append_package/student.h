#include "stack.h"
#include "queue.h"

namespace CP {
    template<typename T>
    void stack<T>::appendStack(stack<T> s) {
        T *newData = new T[s.size() + this->size()]();

        for(int i = 0; i < s.size(); i++) {
            newData[i] = s.mData[i];
        }

        for(int i = 0; i < this->size(); i++) {
            newData[i + s.size()] = mData[i];
        }

        delete [] mData;
        mData = newData;
        mSize = s.size() + this->size();

    }

    template<typename T>
    void stack<T>::appendQueue(queue<T> q) {
        stack<T> ans;
        for(int i = q.size() -1 ; i >= 0; i--) {
            ans.push(q.mData[(i+q.mFront)%q.mCap]);
        }
        for(int i = 0; i < this->size(); i++) {
            ans.push(mData[i]);
        }
        *this = ans;
    }

    template<typename T>
    void queue<T>::appendStack(stack<T> s) {
        while(!s.empty()) {
            this->push(s.top());
            s.pop();
        }
    }

    template<typename T>
    void queue<T>::appendQueue(queue<T> q) {
        while(!q.empty()) {
            this->push(q.front());
            q.pop();
        }
    }
}
