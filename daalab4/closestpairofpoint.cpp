#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iomanip>
#include <cfloat>
using namespace std;
struct Point {
    double x, y;
};
bool compareX(const Point& a, const Point& b) {
    return a.x < b.x;
}
bool compareY(const Point& a, const Point& b) {
    return a.y < b.y;
}
double dist(Point p1, Point p2) {
    return sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
}
double bruteForce(const vector<Point>& pts, int l, int r, Point& p1, Point& p2) {
    double min_d = DBL_MAX;
    for (int i = l; i <= r; ++i) {
        for (int j = i + 1; j <= r; ++j) {
            double d = dist(pts[i], pts[j]);
            if (d < min_d) {
                min_d = d;
                p1 = pts[i];
                p2 = pts[j];
            }
        }
    }
    return min_d;
}
double stripClosest(vector<Point>& strip, double d, Point& p1, Point& p2) {
    double min_d = d;
    sort(strip.begin(), strip.end(), compareY);
    for (size_t i = 0; i < strip.size(); ++i) {
        for (size_t j = i + 1; j < strip.size() && (strip[j].y - strip[i].y) < min_d; ++j) {
            double curr_d = dist(strip[i], strip[j]);
            if (curr_d < min_d) {
                min_d = curr_d;
                p1 = strip[i];
                p2 = strip[j];
            }
        }
    }
    return min_d;
}
double closestUtil(vector<Point>& pts, int l, int r, Point& p1, Point& p2) {
    if (r - l <= 3) {
        return bruteForce(pts, l, r, p1, p2);
    }
    int mid = l + (r - l) / 2;
    Point midPoint = pts[mid];
    Point lp1, lp2, rp1, rp2;
    double dl = closestUtil(pts, l, mid, lp1, lp2);
    double dr = closestUtil(pts, mid + 1, r, rp1, rp2);
    double d;
    if (dl < dr) {
        d = dl;
        p1 = lp1;
        p2 = lp2;
    } else {
        d = dr;
        p1 = rp1;
        p2 = rp2;
    }
    vector<Point> strip;
    for (int i = l; i <= r; i++) {
        if (abs(pts[i].x - midPoint.x) < d) {
            strip.push_back(pts[i]);
        }
    }
    Point sp1, sp2;
    double ds = stripClosest(strip, d, sp1, sp2);
    if (ds < d) {
        p1 = sp1;
        p2 = sp2;
        return ds;
    }
    return d;
}

int main() {
    int n;
    cout<<"entetr n ";
    if (!(cin >> n) || n < 2) {
        return 0;
    }
    cout<<"enter points";
    vector<Point> pts(n);
    for (int i = 0; i < n; ++i) {
        cin >> pts[i].x >> pts[i].y;
    }
    sort(pts.begin(), pts.end(), compareX);
    Point p1, p2;
    double min_d = closestUtil(pts, 0, n - 1, p1, p2);
    cout << fixed << setprecision(6);
    cout << "Closest pair: (" << p1.x << ", " << p1.y << ") and (" << p2.x << ", " << p2.y << ")\n";
    cout << "Distance: " << min_d << "\n";
    return 0;
}
