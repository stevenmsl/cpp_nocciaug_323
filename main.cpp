#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol323;

/*
Input: n = 5 and edges = [[0, 1], [1, 2], [3, 4]]

     0          3
     |          |
     1 --- 2    4

Output: 2
*/

tuple<int, vector<pair<int, int>>, int>
testFixture1()
{
  auto input = vector<pair<int, int>>{{0, 1}, {1, 2}, {3, 4}};
  return make_tuple(5, input, 2);
}

/*
Input: n = 5 and edges = [[0, 1], [1, 2], [2, 3], [3, 4]]

     0           4
     |           |
     1 --- 2 --- 3

Output:  1
*/

tuple<int, vector<pair<int, int>>, int>
testFixture2()
{
  auto input = vector<pair<int, int>>{{0, 1}, {1, 2}, {2, 3}, {3, 4}};
  return make_tuple(5, input, 1);
}

void test1()
{
  auto f = testFixture1();
  Solution sol;

  cout << "Expect to see : " << get<2>(f) << endl;
  cout << sol.countComponents(get<0>(f), get<1>(f)) << endl;
}

void test2()
{
  auto f = testFixture2();
  Solution sol;

  cout << "Expect to see : " << get<2>(f) << endl;
  cout << sol.countComponents(get<0>(f), get<1>(f)) << endl;
}

main()
{
  test1();
  test2();
  return 0;
}