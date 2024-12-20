#ifndef GEOMETRIC_CALCULATIONS_H
#define GEOMETRIC_CALCULATIONS_H

namespace GeometricCalculations {
    // Квадрат
    double calculateSquareArea(double side);
    double calculateSquarePerimeter(double side);

    // Круг
    double calculateCircleArea(double radius);
    double calculateCirclePerimeter(double radius);

    // Треугольник
    double calculateTriangleArea(double a, double b, double c);
    double calculateTrianglePerimeter(double a, double b, double c);
}

#endif // GEOMETRIC_CALCULATIONS_H
