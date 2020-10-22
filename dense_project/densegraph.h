#ifndef __DENSE_GRAPH_H__
#define __DENSE_GRAPH_H__

// Your code here
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
class DenseGraph{
public:

    DenseGraph() {
        // Your code here
        n = 3;
    }

    DenseGraph(int n_in) {
        // Your code here
        n = n_in;
    }

    DenseGraph(const DenseGraph& G) {
        // Your code here
        n = G.n;
        e = G.e;
    }

    void AddEdge(int a, int b) {
        // Your code here
        auto p = make_pair(a, b);
        if(e.find(p) == e.end()) e.insert(p);
    }

    void RemoveEdge(int a, int b) {
        // Your code here
        auto p = make_pair(a, b);
        if(e.find(p) != e.end()) e.erase(p);
    }

    bool DoesEdgeExist(int a, int b) const {
        // Your code here
        auto p = make_pair(a, b);
        return e.find(p) != e.end();
    }

    DenseGraph Transpose() const {
        // Your code here
        DenseGraph ans;
        for(auto i = e.begin(); i != e.end(); i++) {
            ans.AddEdge(i->second, i->first);
        }
        return ans;
    }

protected:
    int n;
    // Your code here
    set<pair<int, int> > e;
};
#endif // __DENSE_GRAPH_H__
