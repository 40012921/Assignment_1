#ifndef __CIRCLE_H
#define __CIRCLE_H

#include "ISShape.h"
#include "Polygon.h"
class Circle : public ISShape {
  double m_radius;

public:
  Circle(int r);
  double area();
  double circumference();
};

#endif
