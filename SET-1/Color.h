#ifndef __COLOR_H
#define __COLOR_H
#include <iostream>
#include<string>
#include <cmath>
using namespace std ;
enum color_t{red , blue , green , yellow , black};
class Color {
  private :
    int m_g, m_r, m_b ;
  public :
    Color () ;
    Color (string);
    Color(color_t);
    Color (int ,int , int) ;
    void invert() ;
    void display() ;
};
#endif
