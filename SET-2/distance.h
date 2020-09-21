#ifndef __DISTANCE_H
#define __DISTANCE_H
#include <iostream>
using namespace std;
class Distance {
  int m_feets;
  int m_inches;
  public:
  Distance();
  Distance(int,int);
  Distance operator+(const Distance&);
  Distance operator-(const Distance&);
  Distance operator+(int);
  Distance operator-(int);
  Distance& operator++();
  Distance& operator++(int);
  void operator==(int);
  void operator<(int);
  void operator>(int);
  int display() const;
  friend ostream& operator<<(const ostream&, const Distance&);
};

#endif
