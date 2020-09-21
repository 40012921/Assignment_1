#ifndef __FRACTION_H
#define __FRACTION_H
#include<iostream>
#include<string>

class Fraction {
  private:
    int m_numerator;
    int m_denominator;
  public:
    Fraction();
    Fraction(int,int);
    explicit Fraction(int);
    Fraction operator+(const Fraction&);
    Fraction operator-(const Fraction&);
    Fraction operator*(const Fraction&);
    Fraction operator+(int);

    bool operator==(const Fraction&);
    bool operator<(const Fraction&);
    bool operator>(const Fraction&);
    Fraction simplify();
    bool isSimplest() const;
    int display() const;
    friend std::ostream& operator<<(const std::ostream&, const Fraction&);
};
#endif
