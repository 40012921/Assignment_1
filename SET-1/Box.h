#ifndef __BOX_H
#define __BOX_H
#include <iostream>
#include<string>
using namespace std ;
class Box {
  private:
    int m_length, m_height, m_breadth ;
  public:
    Box() ;
    Box(int, int, int) ;
    Box(const Box&) ;
    void length(int ) ;
    void breadth(int) ;
    void height(int h) ;
    int volume(int l, int b, int h) ;
    int get_dim();
    void display() ;
};
#endif
