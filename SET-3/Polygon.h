#ifndef __POLYGON_H
#define __POLYGON_H

#include"ISShape.h"

class Polygon:public ISShape {
  int m_sides;
  public:
  Polygon(int n);   //no.of sides
};

#endif
