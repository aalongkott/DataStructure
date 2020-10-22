#ifndef __SPARSE_GRAPH_H__
#define __SPARSE_GRAPH_H__

// Your code here
#include<vector>
#include <algorithm>

using namespace std;

class SparseGraph{
public:
    SparseGraph() {
        // Your code here
        n = 3;
        e.resize(n);
    }

    SparseGraph(int n_in) {
        // Your code here
        n = n_in;
        e.resize(n);
    }

    SparseGraph(const SparseGraph& G) {
        // Your code here
        n = G.n;
        e = G.e;
    }

    void AddEdge(int a, int b) {
        // Your code here
        if(find(e[a].begin(), e[a].end(), b) == e[a].end()) e[a].push_back(b);
    }

    void RemoveEdge(int a, int b) {
        // Your code here
        if(find(e[a].begin(), e[a].end(), b) != e[a].end()) e[a].erase(find(e[a].begin(), e[a].end(), b));
    }

    bool DoesEdgeExist(int a, int b) const {
        // Your code here
        return find(e[a].begin(), e[a].end(), b) != e[a].end();
    }

    SparseGraph Transpose() const {
        // Your code here
        SparseGraph ans(n);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < e[i].size(); j++) {
                ans.e[e[i][j]].push_back(i);
            }
        }
        return ans;
    }

protected:
    // Your code here
    int n;
    vector<vector<int> > e;
};
#endif // __SPARSE_GRAPH_H__

