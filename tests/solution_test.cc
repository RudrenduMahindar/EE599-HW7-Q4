#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(MODIFIED_BFSTEST, ReturnPathDistance) {
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
  vector<int> actual_topology=topology_vector;
  vector<int> actual_root=root_vector;
  vector<int> expected_topology={7,5,6,2,3,4,1,0}; 
  vector<int> expected_root={7};
  EXPECT_EQ(expected_topology, actual_topology);
  EXPECT_EQ(expected_root, actual_root);
}