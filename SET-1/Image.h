#ifndef __IMAGE_H
#define __IMAGE_H
#include <iostream>
#include<string>
#include <cmath>
using namespace std ;
class Image {
  private :
    int m_x, m_y, m_width, m_height ;
  public :
    Image() ;
    Image(int , int , int , int );
    Image(const Image &) ;
    void move(int , int , int ) ;
    void scale( int ) ;
    void resize(int, int );
    void display () ;
};
#endif
