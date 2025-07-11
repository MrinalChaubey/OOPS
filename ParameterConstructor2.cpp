#include <bits/stdc++.h>
using namespace std;

class Point {
  int x, y;
  friend int distance(Point, Point);

public:
  Point(int a, int b) {
    x = a;
    y = b;
  }
  void displaypoint() {
    cout << "The point is (" << x << "," << y << ")" << endl;
  }
};

int distance(Point a, Point b) {
  int x1 = abs(a.x - b.x);
  int y1 = abs(a.y - b.y);
  int dis = sqrt(pow(x1, 2) + pow(y1, 2));
  return dis;
}

int main() {
  Point p(3, 7);
  p.displaypoint();
  Point q(8, 9);
  q.displaypoint();

  int dis = distance(p, q);

  cout << "The distance is " << dis << endl;
  return 0;
}
