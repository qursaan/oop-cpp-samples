#include "ComplexNumber.h"
#include <math.h>

ComplexNumber::ComplexNumber()
{
    this->real = 0;
    this->imaginary = 0;
}

ComplexNumber::ComplexNumber(double real, double imaginary)
{
    this->real = real;
    this->imaginary = imaginary;
}

ComplexNumber::~ComplexNumber()
{
    //dtor
}

double ComplexNumber::getReal() const
{
    return this->real;
}

double ComplexNumber::getImaginary() const
{
    return this->imaginary;
}

void ComplexNumber::setReal(double real)
{
    this->real = real;
}

void ComplexNumber::setImaginary(double imaginary)
{
    this->imaginary = imaginary;
}
ComplexNumber ComplexNumber::getMagnitude() const
{
    return ComplexNumber(sqrt(this->real * this->real + this->imaginary * this->imaginary), 0);
}

ComplexNumber ComplexNumber::getPhase() const
{
    return ComplexNumber(atan2(this->imaginary, this->real), 0);
}

ComplexNumber ComplexNumber::operator+(const ComplexNumber& other) const
{
    return ComplexNumber(this->real + other.real, this->imaginary + other.imaginary);
}

ComplexNumber ComplexNumber::operator-(const ComplexNumber& other) const
{
    return ComplexNumber(this->real - other.real, this->imaginary - other.imaginary);
}

ComplexNumber ComplexNumber::operator*(const ComplexNumber& other) const
{
    return ComplexNumber(this->real * other.real - this->imaginary * other.imaginary, this->real * other.imaginary + this->imaginary * other.real);
}
ComplexNumber ComplexNumber::operator/(const ComplexNumber& other) const
{
    double denominator = other.real * other.real + other.imaginary * other.imaginary;
    ComplexNumber result;
    result.real = (this->real * other.real + this->imaginary * other.imaginary) / denominator;
    result.imaginary = (this->imaginary * other.real - this->real * other.imaginary) / denominator;
    return result;
}
bool ComplexNumber::operator==(const ComplexNumber& other) const
{
    return this->real == other.real && this->imaginary == other.imaginary;
}
bool ComplexNumber::operator!=(const ComplexNumber& other) const
{
    return !(*this == other);
}
ComplexNumber& ComplexNumber::operator+=(const ComplexNumber& other)
{
    this->real += other.real;
    this->imaginary += other.imaginary;
    return *this;
}
ComplexNumber& ComplexNumber::operator-=(const ComplexNumber& other)
{
    this->real -= other.real;
    this->imaginary -= other.imaginary;
    return *this;
}
ComplexNumber& ComplexNumber::operator*=(const ComplexNumber& other)
{
    *this = *this * other;
    return *this;
}
ComplexNumber& ComplexNumber::operator/=(const ComplexNumber& other)
{
    *this = *this / other;
    return *this;
}
ComplexNumber& ComplexNumber::operator=(const ComplexNumber& other)
{
    this->real = other.real;
    this->imaginary = other.imaginary;
    return *this;
}
ComplexNumber& ComplexNumber::operator=(double real)
{
    this->real = real;
    this->imaginary = 0;
    return *this;
}
ComplexNumber ComplexNumber::operator-() const
{
    return ComplexNumber(-this->real, -this->imaginary);
}
ComplexNumber ComplexNumber::operator+() const
{
    return *this;
}
ComplexNumber ComplexNumber::operator++()
{
    this->real++;
    return *this;
}
ComplexNumber ComplexNumber::operator++(int)
{
    ComplexNumber result = *this;
    this->real++;
    return result;
}
ComplexNumber ComplexNumber::operator--()
{
    this->real--;
    return *this;
}
ComplexNumber ComplexNumber::operator--(int)
{
    ComplexNumber result = *this;
    this->real--;
    return result;
}

std::ostream& operator<<(std::ostream& out, const ComplexNumber& complexNumber)
{
    out << "(" << complexNumber.real << " + " << complexNumber.imaginary << "i" << ")";
    return out;
}
std::istream& operator>>(std::istream& in, ComplexNumber& complexNumber)
{
    //Enter another complex number in the form of a + bi:
    std::cout << "Enter another complex number in the form of a +bi: ";
    in >> complexNumber.real;
    in.ignore(1);
    in >> complexNumber.imaginary;
    in.ignore(1);
    return in;
}
