#include <iostream>
#include "src/lib/solution.h"
#include <map>
#include <set>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> vertices={{}, 
    {0},
    {1},
    {1},
    {},
    {2,4},
    {3,4},
    {5,6}};
    Graph g(vertices);
    vector<int> topology_vector,root_vector;
    g.topo_sort(topology_vector,root_vector);
    cout<<"1. Root nodes: {";
    for(auto it=root_vector.begin();it!=root_vector.end();it++)
    {
        cout<<*it;
        if(it!=(root_vector.end()-1))
            cout<<",";   
    }
    cout<<"}"<<endl;
    cout<<"2. Topological order: [";
    for(auto it=topology_vector.begin();it!=topology_vector.end();it++)
    {
        cout<<*it;   
        if(it!=(topology_vector.end()-1))
            cout<<","; 
    }
    cout<<"]"<<endl;
    return EXIT_SUCCESS;
}