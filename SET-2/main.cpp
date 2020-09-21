#include <iostream>
#include "fraction.h"
#include "complex1.h"
#include "currecy.h"
#include "distance.h"
#include "mytime.h"
using namespace std;


//Fraction Class

Fraction::Fraction():m_numerator{0},m_denominator{0} {}

Fraction::Fraction(int numerator,int denominator):m_numerator(numerator),m_denominator(denominator) {}

Fraction::Fraction(int numerator):m_numerator(numerator) {}

Fraction Fraction::operator+(const Fraction& c1) {

    int F_numerator=m_numerator+c1.m_numerator;

    int F_denominator=m_denominator+c1.m_denominator;

    return Fraction(F_numerator,F_denominator);
}

Fraction Fraction::operator-(const Fraction& c1) {

    int F_numerator=m_numerator-c1.m_numerator;

    int F_denominator=m_denominator-c1.m_denominator;

    return Fraction(F_numerator,F_denominator);
}

Fraction Fraction::operator*(const Fraction& c1) {

    int F_numerator=m_numerator*c1.m_numerator;

    int F_denominator=m_denominator*c1.m_denominator;

    return Fraction(F_numerator,F_denominator);
}


bool Fraction::operator==(const Fraction &c1) {

    return(m_numerator==c1.m_numerator && m_denominator==c1.m_denominator);

}

bool Fraction::operator>(const Fraction &c1) {

    return (m_numerator>c1.m_numerator && m_denominator>c1.m_denominator);

}

bool Fraction::operator<(const Fraction &c1) {

    return (m_denominator<c1.m_denominator && m_numerator<c1.m_numerator);

}

int Fraction::display() const {

    cout<<m_numerator<<"/"<<m_denominator<<"\n";
}






//Complex Class

Complex::Complex():m_real(0),m_imag(0) {}

Complex::Complex(int real,int imag):m_real(real),m_imag(imag) {}

Complex::Complex(int real):m_real(real) {}

Complex Complex::operator-(const Complex& obj1) {

    int F_real=m_real-obj1.m_real;

    int F_imag=m_imag-obj1.m_imag;


    return Complex(F_real,F_imag);


}

Complex Complex::operator+(const Complex& obj1) {



    int F_real=m_real+obj1.m_real;

    int F_imag=m_imag+obj1.m_imag;


    return Complex(F_real,F_imag);
}

Complex Complex::operator*(const Complex& obj1) {



    int F_real=m_real*obj1.m_real;

    int F_imag=m_imag*obj1.m_imag;


    return Complex(F_real,F_imag);
}



Complex& Complex::operator++() {
    if(m_real==9) {

        m_real==0;
    }

    else {

        ++m_real;

    }

    return *this;
}


Complex Complex::operator++(int) {

    Complex temp(m_real);

    ++(*this);

    return temp;


}

bool Complex::operator==(const Complex& c1) {

    return(m_real==c1.m_real && m_imag==c1.m_imag);
}

int Complex::getReal() {

    return m_real;
}

int Complex::getImag() {

    return m_imag;

}

int Complex::display() {

    cout<<getReal()<<"+"<<getImag()<<"i"<<"\n";
}




//Currecy Class here

Currency::Currency():m_rupees(0),m_paise(0) {}

Currency::Currency(int rupees,int paise):m_rupees(rupees),m_paise(paise) {}

Currency::Currency(int rupees):m_rupees(rupees) {}

Currency Currency::operator-(const Currency& obj1) {

    int F_rupees=m_rupees-obj1.m_rupees;

    int F_paise=m_paise-obj1.m_paise;


    return Currency(F_rupees,F_paise);


}
Currency Currency::operator+(const Currency& obj1) {

    int F_rupees=m_rupees+obj1.m_rupees;

    int F_paise=m_paise+obj1.m_paise;


    return Currency(F_rupees,F_paise);
}

Currency& Currency::operator++() {

    if(m_rupees==9) {
        m_rupees==0;
    }

    else {
        ++m_rupees;
    }

    return *this;
}


Currency Currency::operator++(int) {

    Currency temp(m_rupees);

    ++(*this);

    return temp;
}

bool Currency::operator==(const Currency &c1) {

    return(m_rupees==c1.m_rupees && m_paise==c1.m_paise);

}

bool Currency::operator>(const Currency &c1) {

    return (m_rupees>c1.m_rupees && m_paise>c1.m_paise);

}

bool Currency::operator<(const Currency &c1) {

    return (m_rupees<c1.m_rupees && m_paise<c1.m_paise);

}


int Currency::display() const {

    cout<<m_rupees<<" "<<m_paise;
}

std::ostream& operator<<(const std::ostream& out, const Currency& curr) {

    out<<curr.m_rupees<<"."<<curr.m_paise;
}


//Distance class


Distance::Distance():
    m_feets(0), m_inches(0) {
}
Distance::Distance(int foot, int inch):
    m_feets(foot), m_inches(inch) {

}
Distance Distance::operator+(const Distance &ref) {
    int temp=0,temp1=0;
    int tfeet= m_feets+ref.m_feets;
    int tinch= m_inches+ref.m_inches;
    if(tinch>12) {
        temp = tinch/12;
        temp1= tinch%12;
    }
    tinch=temp1;
    tfeet+=temp;
    return Distance(tfeet,tinch);
}
Distance Distance::operator-(const Distance &ref) {
    int temp=0,temp1=0;
    int tfeet= abs(m_feets-ref.m_feets);
    int tinch= abs(m_inches-ref.m_inches);
    if(tinch>12) {
        temp = tinch/12;
        temp1= tinch%12;
    }
    tinch=temp1;
    tfeet+=temp;
    return Distance(tfeet,tinch);
}
Distance Distance::operator+(int inch) {
    int temp=0,temp1=0;
    int tinch = m_inches+inch;
    if(tinch>12) {
        temp = tinch/12;
        temp1= tinch%12;
    }
    tinch=temp1;
    m_feets+=temp;
    return Distance(m_feets,tinch);
}
Distance Distance::operator-(int inch) {
    int temp=0,temp1=0;
    int tinch = (m_inches-inch);
    if(tinch<0) {
        m_feets-=1;
        m_inches=12-m_inches;
    }
    if(tinch>12) {
        temp = tinch/12;
        tinch= tinch%12;
        m_feets+=temp;
    }
    return Distance(m_feets,m_inches);
}
Distance& Distance::operator++() {
    int temp=0;
    ++m_inches;
    if(m_inches>12) {
        temp = m_inches/12;
        m_inches= m_inches%12;
        m_feets+=temp;
    }
    ++m_feets;
    return *this;
}
Distance& Distance::operator++(int times) {
    int temp=0;
    for(int i=0; i<times; i++) {
        ++m_inches;
        if(m_inches>12) {
            temp = m_inches/12;
            m_inches= m_inches%12;
            m_feets+=temp;
        }
        ++m_feets;
    }

    return *this;
}
void Distance::operator==(int any) {
    int temp=0;
    if(m_feets==any)
        cout<<"Feet Value is similar";
    else if(m_inches==any)
        cout<<"Inch Values are matching";
    else
        cout<<"Nothing is similar to the given values";
}
void Distance::operator<(int inch) {
    int temp=0,feet=0;
    if(inch>12) {
        temp = inch/12;
        inch= m_inches%12;
        feet+=temp;
    }
    if(m_feets<feet)
        cout<<"It is less than given input";
}
void Distance::operator>(int inch) {
    int temp=0,feet=0;
    if(inch>12) {
        temp = inch/12;
        inch= m_inches%12;
        feet+=temp;
    }
    if(m_feets>feet)
        cout<<"It is greater than given input in the code";
}
int Distance::display () const{
    std::cout << m_feets << ":" << m_inches << "\n";
}






//MY TIME CLASS

Mytime :: Mytime():
    hrs(0), minutes(0), sec(0)
    { }
Mytime :: Mytime (int x, int y, int z):
    hrs(x), minutes(y), sec(z)
    { }
Mytime :: Mytime(int x,int y):
    hrs(x), minutes(y),sec(0)
    { }
void  Mytime ::operator++ ()
{

    this->minutes=(this->minutes)+1;
    if((this->minutes)>60)
    {
        this->hrs+=1;
        this->minutes-=60;
    }
}
void  Mytime ::operator++ (int data)
{
    this->minutes+=data;
    if((this->minutes)>60)
    {
        this->hrs+=1;
        this->minutes-=60;
    }

}
bool Mytime ::   operator == (const Mytime &ref_val)
{
    return hrs == ref_val.hrs && minutes == ref_val.minutes;
}
/*Mytime :: Mytime & operator += ()
{
    return *this;
}
*/
Mytime & Mytime :: operator += (const Mytime & ref_val)
{
   hrs += ref_val.hrs;
   minutes += ref_val.minutes;
   return *this;
}
 bool Mytime ::  operator < (const Mytime &ref_val)
{
    return hrs < ref_val.hrs && minutes < ref_val.minutes;
}
 bool Mytime ::  operator > (const Mytime &ref_val)
{
    return hrs > ref_val.hrs && minutes > ref_val.minutes;
}
void Mytime :: display()
{
    cout <<" Hours: "<<hrs<<"Minutes: "<<minutes<<"Seconds: "<<sec;
}

Mytime Mytime :: operator+(const Mytime &ref_val)
{
    int tmins = minutes + ref_val.minutes;
    int thrs = hrs + ref_val.hrs;
    return Mytime(thrs, tmins);
}
Mytime  Mytime ::operator - (const Mytime &ref_val)
{
    int tmins = minutes - ref_val.minutes;
    int thrs = hrs - ref_val.hrs;
    return Mytime(thrs, tmins);
}
Mytime  Mytime:: operator + (int nmins)
{
    int tmins = minutes + nmins;
    int thrs = hrs;
    return Mytime(thrs, tmins);
}
Mytime  Mytime ::operator - (int nmins)
{
    int tmins = minutes - nmins;
    int thrs = hrs;
    return Mytime(thrs, tmins);
}







int main() {
    cout<<"Fraction"<<"\n";
    Fraction f1(1,2);
    Fraction f2(2,3);
    Fraction f3= f2+f1;
    f3.display();

    f3= f2*f1;
    f3.display();
    cout<<"Complex"<<"\n";
    Complex c(1,2);
    Complex c1(2,3);
    Complex c2=c1+c;
    c2.display();

    cout<<"Currency"<<"\n";
    Currency d(10,20);
    Currency d1(14,70);
    Currency d2=d1+d;
    d2.display();

    cout<<"\n"<<"Distance";
    Distance h(10,2);
    Distance h1(20,3);
    Distance h2=h1+h;
    h2.display();

    cout<<"\n"<<"MY TIME";
    Mytime m(10,2,5);
    Mytime m1(20,3,6);
    Mytime m2=m1+m;
    m2.display();


    return 0;
}


