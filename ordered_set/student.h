#include <vector>
#include <set>
using namespace std;

template <typename T>
vector<T> Union(const vector<T>& A, const vector<T>& B) {
    vector<T> v;
    set<T> s;

    for(auto e: A) {
        s.insert(e);
        v.push_back(e);
    }

    for(auto e: B) {
        if(s.find(e) == s.end()) {
            v.push_back(e);
        }
    }

    return v;
}

template <typename T>
vector<T> Intersect(const vector<T>& A, const vector<T>& B) {
    vector<T> v;
    set<T> s;

    for(auto e: B) {
        s.insert(e);
    }

    for(auto e: A) {
        if(s.find(e) != s.end()) {
            v.push_back(e);
        }
    }
    return v;
}
