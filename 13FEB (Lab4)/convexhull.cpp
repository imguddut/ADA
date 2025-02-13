#include <iostream>
#include <vector>

using namespace std;

struct Point {
    int x, y;
};

// Function to determine the orientation of three points (p, q, r)
int orientation(Point p, Point q, Point r) {
    int val = (q.y - p.y) * (r.x - q.x) - (q.x - p.x) * (r.y - q.y);
    return val;
}

// Naive Convex Hull Algorithm
vector<Point> convexHull(vector<Point>& points) {
    int n = points.size();
    vector<Point> hull;

    if (n < 3) return hull; // Convex hull not possible with < 3 points

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            bool validEdge = true;

            for (int k = 0; k < n; k++) {
                if (k != i && k != j) {
                    if (orientation(points[i], points[j], points[k]) > 0) {
                        validEdge = false;
                        break;
                    }
                }
            }

            if (validEdge) {
                hull.push_back(points[i]);
                hull.push_back(points[j]);
            }
        }
    }

    return hull;
}

// Main Function
int main() {
    vector<Point> points = {{0, 3}, {2, 2}, {1, 1}, {2, 1}, {3, 0}, {0, 0}, {3, 3}};
    
    vector<Point> hull = convexHull(points);

    cout << "Convex Hull Points:\n";
    for (auto p : hull)
        cout << "(" << p.x << ", " << p.y << ")\n";

    return 0;
}
