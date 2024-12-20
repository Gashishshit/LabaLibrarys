#ifndef GEOMETRIC_SHAPES_H
#define GEOMETRIC_SHAPES_H

#include <stdexcept>
#include <cmath>

class Shape {
public:
    virtual double calculateArea() const = 0;
    virtual double calculatePerimeter() const = 0;
    virtual ~Shape() = default;
};

class Square : public Shape {
private:
    double side;

public:
    explicit Square(double s);
    double calculateArea() const override;
    double calculatePerimeter() const override;
};

class Circle : public Shape {
private:
    double radius;

public:
    explicit Circle(double r);
    double calculateArea() const override;
    double calculatePerimeter() const override;
};

class Triangle : public Shape {
private:
    double a, b, c;

public:
    Triangle(double side1, double side2, double side3);
    double calculateArea() const override;
    double calculatePerimeter() const override;
};

#endif // GEOMETRIC_SHAPES_H
