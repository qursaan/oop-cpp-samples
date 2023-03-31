#include <iostream>

#ifndef COMPLEXNUMBER_H
#define COMPLEXNUMBER_H


class ComplexNumber
{
    friend std::ostream& operator<<(std::ostream& out, const ComplexNumber& complexNumber);
    friend std::istream& operator>>(std::istream& in, ComplexNumber& complexNumber);

    public:
        ComplexNumber();
        ComplexNumber(double real, double imaginary);
        virtual ~ComplexNumber();
        double getReal() const;
        double getImaginary() const;
        void setReal(double real);
        void setImaginary(double imaginary);

        ComplexNumber getMagnitude() const;
        ComplexNumber getPhase() const;
         
        ComplexNumber operator+(const ComplexNumber& other) const;
        ComplexNumber operator-(const ComplexNumber& other) const;
        ComplexNumber operator*(const ComplexNumber& other) const;
        ComplexNumber operator/(const ComplexNumber& other) const;
        bool operator==(const ComplexNumber& other) const;
        bool operator!=(const ComplexNumber& other) const;
        ComplexNumber& operator+=(const ComplexNumber& other);
        ComplexNumber& operator-=(const ComplexNumber& other);
        ComplexNumber& operator*=(const ComplexNumber& other);
        ComplexNumber& operator/=(const ComplexNumber& other);
        ComplexNumber& operator=(const ComplexNumber& other);
        ComplexNumber& operator=(double real);
        ComplexNumber operator-() const;
        ComplexNumber operator+() const;
        ComplexNumber operator++();
        ComplexNumber operator++(int);
        ComplexNumber operator--();
        ComplexNumber operator--(int);
    private:
        double real;
        double imaginary;
};

#endif // COMPLEXNUMBER_H
