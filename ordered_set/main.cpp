#include <iostream>
#include "student.h"
#include<vector>
using namespace std;

void test1() {
    vector<int> v1, v2;
    v1.push_back(4);
    v1.push_back(6);
    v1.push_back(9);
    v1.push_back(0);
    v1.push_back(7);

    v2.push_back(0);
    v2.push_back(3);
    v2.push_back(2);
    v2.push_back(4);
    v2.push_back(5);
    
    vector<int> v = Union(v1, v2);
    for (auto& x:v) {
        cout<<x<<" ";
    }
    cout<<endl;
}

void test2() {
    vector<int> v1, v2;
    v1.push_back(3);
    v1.push_back(0);
    v1.push_back(9);
    v1.push_back(1);
    v1.push_back(6);

    v2.push_back(4);
    v2.push_back(6);
    v2.push_back(9);
    v2.push_back(1);
    v2.push_back(7);

    vector<int> v = Intersect(v1, v2);
    for (auto& x:v) {
        cout<<x<<" ";
    }
    cout<<endl;
}
int main()
{
    test1();
    test2();
    return 0;
}
