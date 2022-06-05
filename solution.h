
#ifndef SOLUTION_H
#define SOLUTION_H

#include "node.h"
#include <vector>
#include <queue>
#include <unordered_map>
#include <map>
#include <string>
#include <stack>

using namespace std;
namespace sol323
{

  class Solution
  {
  private:
    void _visit(int i, vector<bool> &visited, vector<vector<int>> &g);

  public:
    int countComponents(int n, vector<pair<int, int>> &edges);
  };
}
#endif