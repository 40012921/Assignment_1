#ifndef __POINT_H
#define __POINT_H
#include <iostream>
#include<string>
#include <cmath>
using namespace std ;
class Point {
  private:
    int m_x, m_y;
  public:
    Point() ;
    Point(int , int );
    Point(const Point &) ;
    void distanceFromOrigin() ;
    int quadrant() ;
    void isOrigin() ;
    void isOnXAxis() ;
    void isOnYAxis() ;
    void display() ;
    } ;
#endif
