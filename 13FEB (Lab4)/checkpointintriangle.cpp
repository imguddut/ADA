#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    double x, y;
};

// Function to calculate the area of a triangle given 3 points
double triangleArea(Point A, Point B, Point C) {
    return abs((A.x * (B.y - C.y) + B.x * (C.y - A.y) + C.x * (A.y - B.y)) / 2.0);
}

// Function to check if a point P is inside triangle ABC
bool isInsideTriangle(Point A, Point B, Point C, Point P) {
    double A_ABC = triangleArea(A, B, C);
    double A_PAB = triangleArea(P, A, B);
    double A_PBC = triangleArea(P, B, C);
    double A_PCA = triangleArea(P, C, A);

    return (A_ABC == (A_PAB + A_PBC + A_PCA));
}

int main() {
    Point A = {0, 0}, B = {5, 0}, C = {0, 5};
    Point P = {2, 2}; // Test point

    if (isInsideTriangle(A, B, C, P))
        cout << "Point is inside the triangle\n";
    else
        cout << "Point is outside the triangle\n";

    return 0;
}
