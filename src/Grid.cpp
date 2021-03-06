#include "common.h"
#include "testHelper.h"

/** direction utils */
enum class Direction { RIGHT = 0, UP, LEFT, DOWN };
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
enum class ExDirection { RT = 0, RU, UP, LU, LT, LD, DW, RD };
int exdx[8] = {1, 1, 0, -1, -1, -1, 0, 1};
int exdy[8] = {0, 1, 1, 1, 0, -1, -1, -1};

/** 2D-array utils */
template <typename T> using Grid = vector<vector<T>>;
template <typename T> void makeGrid(Grid<T> &grid, int h, int w) {
  grid.assign(h, vector<T>(w));
}
template <typename T> void makeGrid(Grid<T> &grid, int h, int w, T val) {
  grid.assign(h, vector<T>(w, val));
}
template <typename T>
void makeGridWithGuard(Grid<T> &grid, int h, int w, T guard) {
  makeGrid<T>(grid, h + 2, w + 2);
  rep(i, h) {
    grid[i][0] = guard;
    grid[i][w + 1] = guard;
  }
  rep(j, w) {
    grid[0][j] = guard;
    grid[h + 1][j] = guard;
  }
}
template <typename T>
void makeGridWithGuard(Grid<T> &grid, int h, int w, T val, T guard) {
  makeGrid<T>(grid, h + 2, w + 2, val);
  rep(i, h) {
    grid[i][0] = guard;
    grid[i][w + 1] = guard;
  }
  rep(j, w) {
    grid[0][j] = guard;
    grid[h + 1][j] = guard;
  }
}