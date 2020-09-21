#include <iostream>
#include <string>
#include<cstdint>
#include <cmath>
#include "Polygon.h"
#include "ISShape.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"

#include "IEmployee.h"

using namespace std;

Polygon::Polygon (int m) : m_sides{m} {
    }

Rectangle :: Rectangle(int l,int b):Polygon(4) {
        m_length =l;
        m_breadth =b;
    }
double Rectangle:: area() {
        int a ;
        a = m_length * m_breadth ;
        return a;
    }
double Rectangle :: circumference () {
        return (2*(m_length*m_breadth));
    }

Triangle :: Triangle(int l,int b, int h):Polygon(3) {
        m_a =l;
        m_b =b;
        m_c =h ;
    }
double Triangle :: area() {
        int a ;
        if (m_a>m_c && m_b>m_c) {
            a = 0.5 * (m_b*m_a);
        } else if (m_b>m_a&&m_c>m_a) {
            a= 0.5*(m_b*m_c);
        } else if (m_c>m_b && m_a>m_b) {
            a= 0.5*(m_c*m_a);
        }
        return a;
    }
double Triangle :: circumference () {
        return (m_a+m_b+m_c);
    }

Circle ::  Circle(int l): ISShape() {
        m_radius=l;
    }
double Circle:: area() {
        int a ;
            a=3.14*pow(m_radius,2);
        return a;
    }
double Circle :: circumference () {
        return (2*3.14*m_radius);
    }

Employee :: Employee(std::string id, std::string name, double salary,int exp){
    m_empid = id;
    m_name = name;
    m_salary = salary ;
    m_exp=exp;
}
int main() {

    Rectangle R (9,4);
    cout << "Rectangle area :" << R.area() << endl;
    cout<< "Rectangle Circumference :"<<R.circumference()<<endl;

    Triangle T(1,2,3) ;
    cout<<"Triangle area :" <<T.area()<<endl;
    cout << "Triangle Circumference :"<< T.circumference()<<endl;

    Circle C (6);
    cout << "Circle area :"<< C.area() << endl ;
    cout <<"Circle circumference :"<< C.circumference() <<endl ;
    return 0 ;
}

