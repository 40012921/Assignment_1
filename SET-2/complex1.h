#ifndef COMPLEX_H_
#define COMPLEX_H_
#include <iostream>
class Complex {

  private:

    int m_real,m_imag;

  public:

    Complex();

    Complex(int,int);

    Complex(const Complex& ref);

    Complex(int);

    Complex operator-(const Complex&);

    Complex operator+(const Complex&);

    Complex operator*(const Complex&);

    Complex& operator++();

    Complex operator++(int);

    bool operator==(const Complex&);

    int getReal();

    int getImag();

    int display();

};

#endif // COMPLEX_H_
