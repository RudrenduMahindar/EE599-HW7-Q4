#include "solution.h"
#include <map>
#include <vector>
#include <queue>
   
void Graph::topo_sort(vector<int>& topology,vector<int>& root)
{
  int n=adj.size();
  vector<int> deg(n,0);
  for(int i=0;i<n;i++)
  {
    for(int j:adj[i])
    {
      ++deg[j];
    }
  }
  queue<int> q;
  for(int i=0;i<n;i++)
  {
    if(deg[i]==0)
    {  
      q.push(i);
      root.push_back(i);
    }
  }
  //vector<int> ans;
  while(!q.empty())
  {
    int i=q.front();
    q.pop();
    //ans.push_back(i);
    topology.push_back(i);
    for(int j:adj[i])
    {
      --deg[j];
      if(deg[j]==0)
      {
          q.push(j);
      }    
    }
  }
 // return ans;
}