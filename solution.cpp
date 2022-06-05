#include "solution.h"
#include "util.h"
#include <unordered_set>
#include <numeric>
#include <iterator>
#include <unordered_map>
#include <deque>
#include <string>
#include <sstream>
#include <algorithm>
#include <stack>
#include <functional>
using namespace sol323;
using namespace std;

/*takeaways
  - use DFS
*/

int Solution::countComponents(int n, vector<pair<int, int>> &edges)
{
  auto count = 0;
  auto g = vector<vector<int>>(n);
  for (auto &[from, to] : edges)
    /* per the question: Since all edges are undirected, [0, 1] is the same as [1, 0] */
    g[from].push_back(to), g[to].push_back(from);

  auto visited = vector<bool>(n, false);

  for (auto i = 0; i < n; i++)
  {
    if (!visited[i])
      count++;
    _visit(i, visited, g);
  }

  return count;
}

void Solution::_visit(int i, vector<bool> &visited, vector<vector<int>> &g)
{
  if (visited[i])
    return;
  visited[i] = true;
  for (auto node : g[i])
    _visit(node, visited, g);
}
