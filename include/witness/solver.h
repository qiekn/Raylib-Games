#pragma once

#include <algorithm>
#include <iostream>
#include <map>
#include <vector>

#include "grid.h"
#include "util.h"

using std::cout;
using std::endl;
using std::reverse;
using std::vector;

class Solver {
public:
  int callstopath;
  const int dx[4] = {01, 00, -1, 00};
  const int dy[4] = {00, 01, 00, -1};
  vector<pair<int, int>> solution;
  std::map<pair<int, int>, pair<int, int>> vis;

  pair<int, int> origin;

  Grid grid;

  Solver();

  Solver(Grid &g);

  void set(Grid &g);

  void path(pair<int, int> src, pair<int, int> prev);

  vector<pair<int, int>> solve();

  string to_string();

  void disp();

  void activate();

  void deactivate();
};
