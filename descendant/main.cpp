#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, m ,left, right;
    cin >> n >> m;
    
    cout << m << " ";

    vector<int> nodes;
    nodes.push_back(m);

    int count = 0;

    while(true) {
        left = 2*nodes[count]+1;
        right = 2*nodes[count]+2;

        if(nodes[count+2] >= n) break;

        nodes.push_back(left);
        nodes.push_back(right);

        count++;

        cout << nodes[count] << " " ;
    }
    cout << nodes[count+1] << " ";

}