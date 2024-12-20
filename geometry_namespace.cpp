#include "geometry_namespace.h"

namespace Geometry {
    // Реализация Square
    Square::Square(double s) {
        if (s < 0) throw std::invalid_argument("Сторона не может быть отрицательной");
        side = s;
    }

    double Square::area() const {
        return side * side;
    }

    double Square::perimeter() const {
        return 4 * side;
    }

    // Реализация Circle
    Circle::Circle(double r) {
        if (r < 0) throw std::invalid_argument("Радиус не может быть отрицательным");
        radius = r;
    }

    double Circle::area() const {
        return M_PI * radius * radius;
    }

    double Circle::perimeter() const {
        return 2 * M_PI * radius;
    }

    // Реализация Triangle
    Triangle::Triangle(double side1, double side2, double side3) {
        if (side1 <= 0 || side2 <= 0 || side3 <= 0)
            throw std::invalid_argument("Стороны должны быть положительными");
        a = side1, b = side2, c = side3;
    }

    double Triangle::area() const {
        double s = (a + b + c) / 2;
        return std::sqrt(s * (s - a) * (s - b) * (s - c));
    }

    double Triangle::perimeter() const {
        return a + b + c;
    }

    // Реализация listShapes
    std::vector<std::string> listShapes() {
        return {"Square", "Circle", "Triangle"};
    }
}
