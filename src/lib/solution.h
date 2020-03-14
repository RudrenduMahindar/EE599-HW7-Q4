#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>
#include <set>
#include <map>
using namespace std;

class Graph{
public:
  Graph(vector<vector<int>>& vertices):adj(vertices){}
  vector<vector<int>> adj;
  void topo_sort(vector<int>&,vector<int>&);
};

#endif