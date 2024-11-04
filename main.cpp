#include<iostream>

struct Point {
    double x;
    double y;
    Point(double inx, double iny)  {x = inx; y = iny;}
};

std::ostream& operator<<(std::ostream& ost, Point& po) {
    return ost << "(" << po.x << ", " << po.y << ") ";
}

Point operator*(Point& po, double& scale) {
    Point np(po.x * scale, po.y * scale);
    return np;
}

int main() {
    Point p1(2.3, 4.5);
    Point p2(1.2, 3.4);
    std::cout << "Original Values: " << p1 << p2 << "\n";
    double scale = 2.2;
    Point p3 = p1 * scale;
    std::cout << "Multiplied Value: " << p3 << "\n";
}