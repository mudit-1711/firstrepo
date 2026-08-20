#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
struct Point {
    double x, y;
    bool operator<(const Point& other) const {
        if (x != other.x) return x < other.x;
        return y < other.y;
    }
};
double crossProduct(Point a, Point b, Point c) {
    return (b.x - a.x) * (c.y - a.y) - (b.y - a.y) * (c.x - a.x);
}
void quickHull(const vector<Point>& pts, Point a, Point b, set<Point>& hull) {
    int max_idx = -1;
    double max_val = 0;
    for (int i = 0; i < pts.size(); i++) {
        double val = crossProduct(a, b, pts[i]);
        if (val > max_val) {
            max_val = val;
            max_idx = i;
        }
    }
    if (max_idx == -1) {
        hull.insert(a);
        hull.insert(b);
        return;
    }
    quickHull(pts, a, pts[max_idx], hull);
    quickHull(pts, pts[max_idx], b, hull);
}
int main() {
    int n;
    cout<<"enter n ";
    cin>>n;
    if (n < 1) return 0;
    vector<Point> pts(n);
    cout<<"enter points ";
    for (int i = 0; i < n; i++) {
        cin >> pts[i].x >> pts[i].y;
    }
    if (n < 3) {
        set<Point> hull(pts.begin(), pts.end());
        for (auto p : hull) {
            cout << "(" << p.x << ", " << p.y << ")\n";
        }
        return 0;
    }
    int min_x = 0, max_x = 0;
    for (int i = 1; i < n; i++) {
        if (pts[i].x < pts[min_x].x) min_x = i;
        if (pts[i].x > pts[max_x].x) max_x = i;
    }
    set<Point> hull;
    quickHull(pts, pts[min_x], pts[max_x], hull);
    quickHull(pts, pts[max_x], pts[min_x], hull);
    for (auto p : hull) {
        cout << "(" << p.x << ", " << p.y << ")\n";
    }
    return 0;
}
