#include "geometric_calculations.h"
#include <cmath>
#include <stdexcept>

namespace GeometricCalculations {
    double calculateSquareArea(double side) {
        if (side < 0) throw std::invalid_argument("Сторона не может быть отрицательной");
        return side * side;
    }

    double calculateSquarePerimeter(double side) {
        if (side < 0) throw std::invalid_argument("Сторона не может быть отрицательной");
        return 4 * side;
    }

    double calculateCircleArea(double radius) {
        if (radius < 0) throw std::invalid_argument("Радиус не может быть отрицательным");
        return M_PI * radius * radius;
    }

    double calculateCirclePerimeter(double radius) {
        if (radius < 0) throw std::invalid_argument("Радиус не может быть отрицательным");
        return 2 * M_PI * radius;
    }

    double calculateTriangleArea(double a, double b, double c) {
        if (a <= 0 || b <= 0 || c <= 0) 
            throw std::invalid_argument("Стороны должны быть положительными");
        
        double s = (a + b + c) / 2;
        return std::sqrt(s * (s - a) * (s - b) * (s - c));
    }

    double calculateTrianglePerimeter(double a, double b, double c) {
        if (a <= 0 || b <= 0 || c <= 0) 
            throw std::invalid_argument("Стороны должны быть положительными");
        return a + b + c;
    }
}
