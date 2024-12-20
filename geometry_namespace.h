#ifndef GEOMETRY_NAMESPACE_H
#define GEOMETRY_NAMESPACE_H

#include <string>
#include <vector>
#include <cmath>
#include <stdexcept>

namespace Geometry {
    class Shape {
    public:
        virtual double area() const = 0;
        virtual double perimeter() const = 0;
        virtual ~Shape() = default;
    };

    class Square : public Shape {
    private:
        double side;

    public:
        explicit Square(double s);
        double area() const override;
        double perimeter() const override;
    };

    class Circle : public Shape {
    private:
        double radius;

    public:
        explicit Circle(double r);
        double area() const override;
        double perimeter() const override;
    };

    class Triangle : public Shape {
    private:
        double a, b, c;

    public:
        Triangle(double side1, double side2, double side3);
        double area() const override;
        double perimeter() const override;
    };

    // Функция для листинга доступных фигур
    std::vector<std::string> listShapes();
}

#endif // GEOMETRY_NAMESPACE_H
