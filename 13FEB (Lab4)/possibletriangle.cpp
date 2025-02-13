#include <iostream>
#include <vector>
using namespace std;

struct Point {
    int x, y;
};

// Function to check if three points are collinear
bool isCollinear(Point A, Point B, Point C) {
    return (A.x * (B.y - C.y) + B.x * (C.y - A.y) + C.x * (A.y - B.y)) == 0;
}

// Function to generate all possible triangles
void generateTriangles(vector<Point>& points) {
    int n = points.size();
    
    if (n < 3) {
        cout << "Not enough points to form a triangle\n";
        return;
    }

    cout << "Possible Triangles:\n";
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (!isCollinear(points[i], points[j], points[k])) {
                    cout << "(" << points[i].x << "," << points[i].y << ") ";
                    cout << "(" << points[j].x << "," << points[j].y << ") ";
                    cout << "(" << points[k].x << "," << points[k].y << ")\n";
                }
            }
        }
    }
}

int main() {
    vector<Point> points = {{0, 0}, {1, 1}, {2, 2}, {3, 0}, {0, 3}};
    
    generateTriangles(points);

    return 0;
}