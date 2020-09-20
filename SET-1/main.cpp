#include <iostream>
#include "Account.h"
#include "Box.h"
#include "Color.h"
#include "Image.h"
#include "IPaddress.h"
#include "Point.h"
#include "Customer.h"
#include <cmath>
using namespace std;
// Account
Account::Account() :
    m_accNumber(0), m_acc_Name(""), m_balance(0) {

}
Account :: Account(int id, string name, double bal) : m_accNumber(id), m_acc_Name(name), m_balance(bal) {
}
Account :: Account(const Account& ref) : m_accNumber(ref.m_accNumber), m_acc_Name(ref.m_acc_Name), m_balance(ref.m_balance) {
}
int Account::getAccountNum() {
    return m_accNumber;
}
string Account::getAccountName() {
    return m_acc_Name ;
}
void Account :: credit (double amount) {
    m_balance += amount;
}
void Account :: debit(double amount) {
    m_balance -= amount;
}
double Account::getBalance() const {
    return m_balance;
}
void Account :: display () {
    cout << m_accNumber << "," << m_acc_Name << ","
         << m_balance << endl;
}
// end of Account
// Customer

// end of Customer
// Box
Box :: Box() : m_length(0), m_breadth(0), m_height(0) {
        cout<<"Default Constructor call!!"<<endl;
}
Box :: Box(int l, int b, int h) : m_length(l), m_breadth(b), m_height(h) {
        cout<<"Parameterised Constructor call!!"<<endl;
}
Box :: Box(const Box& ref) : m_length(ref.m_length),m_breadth(ref.m_breadth), m_height(ref.m_height) {
        cout<<"Copied dimensions !!"<<endl;
}
void Box :: length(int l) {
    m_length=l;
    cout<<"Length is: "<<m_length<<endl;
}
void Box :: breadth(int b) {
    m_breadth=b;
    cout<<"Breadth is: "<<m_breadth<<endl;
}
void Box :: height(int h) {
    m_height=h;
    cout<<"Height is: "<<m_height<<endl;
}
int Box :: volume(int l, int b, int h) {
    int vol = l*b*h ;
    return vol ;
}
void Box :: display () {
    cout << m_length << "," << m_breadth << ","<< m_height<<"\n";
}

//end of Box

//Color
Color::Color() :
    m_r(0), m_g(0), m_b(0) {
        cout<< "Default called!!";
}
Color::Color(int red, int green, int blue) :
  m_r(red), m_g(green), m_b(blue) {
      cout<<"Parameterised called!!"<<endl;
}
Color::Color(string color){
cout<<"Enter the desired color: ";
cin>>color;
cout<<color<<endl;
}
Color :: Color (color_t x){
    switch(x)
    {
        case red:
            cout<<"Red";
            break;
        case blue:
            cout<<"Blue";
            break;
        case green:
            cout<<"Green";
            break;
        case yellow:
            cout<<"Yellow";
            break;
        case black:
            cout<<"Black";
            break;
        default:
            cout<<"Undefined Color";
            break;
    }
}
void Color::invert() {
    int neg = 0xFFFFFF - m_r*m_g*m_b;
 neg = (0xFFFFFF - m_r*m_g*m_b) | 0xFF000000;
    cout<<"The Color has been inverted : " <<neg;
}
void Color::display() {
    cout<<"The Color composition is as follows: ";
    std::cout << "Red: "<<m_r << ", Green: " << m_g << ",Blue: " << m_b <<endl;
}
//end of Color

//Image
Image :: Image() : m_x(0), m_y(0), m_width(0), m_height(0) {
    cout<<"Default called!!"<<endl;
}
Image :: Image(int x, int y, int w, int h):m_x{x},m_y{y},m_width{w},m_height{h} {
    cout<<"Parameterised called!!"<<endl;
}
Image :: Image(const Image &a) {
    m_x=a.m_x ;
    m_y=a.m_y ;
    m_width=a.m_width ;
    m_height=a.m_height ;
    cout<<"Parameters copied!!"<<endl;
}
void Image :: move(int Quad, int pos1, int pos2) {
    if(Quad==1) {
        m_x=pos1;
        m_y=pos2;
        std::cout<< "Image has been moved to first quadrant and now the position is " << m_x <<","<< m_y ;
    } else if(Quad==2) {
        m_x=pos1;
        m_y=pos2;
        std::cout<< "Image has been moved to second quadrant and now the position is " << m_x<<"," << m_y ;
    }
    if(Quad==3) {
        m_x=pos1;
        m_y=pos2;
        std::cout<< "Image has been moved to third quadrant and now the position is " << m_x <<"," << m_y ;
    }
    if(Quad==4) {
        m_x=pos1;
        m_y=pos2;
        std::cout<< "Image has been moved to forth quadrant and now the position is " << m_x<< "," << m_y ;
    }

}
void Image ::  scale( int factor ) {
    m_width = m_width*factor ;
    m_height = m_height*factor ;
    cout << " The new image width and height after scaling with a factor is : " << m_width << " and " << m_height << endl ;
}
void Image :: resize(int num1, int num2) {
    m_x=m_x+num1;
    m_y=m_y+num2;
    cout<< m_x <<"," << m_y;
}
void Image :: display () {
    cout << "The image width is : " << m_width << endl ;
    cout << "The image height is : "<< m_height << endl ;
}
//end of Image

//IPAddress
IPAddress :: IPAddress (): ipval("127.0.0.1") {
    cout<< "Default called!!"<<endl;
}
IPAddress ::  IPAddress (int w, int x, int y, int z ):ipval(to_string(w)+"."+to_string(x)+"."+to_string(y)+"."+to_string(z)) {
    cout<<"Parameterised called!!"<<endl;
};
bool IPAddress ::isloopBack(int w, int x, int y, int z) {
    string temp_ip = to_string(w)+"."+to_string(x)+"."+to_string(y)+"."+to_string(z);
    if (temp_ip == "127.0.0.1") {
        cout<<"Loopback IP"<<endl;
        return true;
    } else {
        cout<<"Not Loopback IP"<<endl;
        return false;
    }
}
int IPAddress ::getIPClass(int w, int x, int y, int z) {
    int ip_num;
    int i = 0;
    string temp_str;
    string t_ip = to_string(w)+"."+to_string(x)+"."+to_string(y)+"."+to_string(z);
    while (t_ip[i]!='.') {
        temp_str = temp_str + t_ip[i];
        i++;
    }
    ip_num = stoi(temp_str);
    if (ip_num>=1 && ip_num<=127) {
        IPClass cls = IPClass::a;
        cout<<"IP Class::"<<char(cls)<<endl;
    } else if (ip_num>=128 && ip_num<=191) {
        IPClass cls = IPClass::b;
        cout<<"IP Class::"<<char(cls)<<endl;
    } else if (ip_num>=192 && ip_num<=223) {
        IPClass cls = IPClass::c;
        cout<<"IP Class::"<<char(cls)<<endl;
    } else if (ip_num>=224 && ip_num<=239) {
        IPClass cls = IPClass::d;
        cout<<"IP Class::"<<char(cls)<<endl;
    }
    return 0;
}
void IPAddress :: display() {
    cout << "IPAddress is :" << ipval << endl ;
}
string IPAddress :: get_IP(){
return ipval ;
}
//end of IPaddress

//Point
Point :: Point():m_x{0},m_y{0} {
    cout <<"Default Constructor call!!"<<endl ;
}
Point :: Point(int x, int y):m_x{x}, m_y{y} {
    cout<<"Parameterised Constructor call!!"<<endl;
}
Point ::Point(const Point &obj) {
    m_x=obj.m_x ;
    m_y=obj.m_y ;
    cout << "Point values Copied !!"<<endl ;
}
void Point ::distanceFromOrigin() {
    int d ;
    d = pow (( pow (m_x, 2) + pow( m_y,2)),0.5);
    cout<< "The distance from the origin is :" << d ;
}
int Point ::quadrant() {
    if (m_x>0 && m_y>0) {
        cout << "The point lies in :" << "Q1" ;
    } else if (m_x<0 && m_y>0 ) {
        cout <<"The point lies in : " << "Q2" ;
    } else if (m_x<0&& m_y<0) {
        cout <<"The point lies in : "<< "Q3" ;
    } else if (m_x>0&&m_y<0) {
        cout << "The point lies in : "<< "Q4" ;
    }
}
void Point :: isOrigin() {
    if (m_x == 0 && m_y == 0) {
        cout << "The point is the origin" << endl ;
    } else {
        cout<< "The point is not the origin" <<endl;
    }
}
void Point ::isOnXAxis() {
    if ((m_x>0 && m_y==0)||(m_x<0 && m_y==0)) {
        cout << "The point is on the x-axis " << endl ;
    } else {
        cout << "NO , it is not on the x-axis " << endl ;
    }
}
void Point ::isOnYAxis() {
    if ((m_y>0 && m_x==0)||(m_y<0 && m_x==0)) {
        cout << "The point is on the y-axis " << endl ;
    } else {
        cout << "NO , it is not on the y-axis " << endl ;
    }
}
void Point :: display() {
    cout<< "The given point is : "<< m_x << "," << m_y << endl ;
}
// end of Point

//Customer
Customer::Customer() :
    m_custId(0), m_custName("John "),m_phone("7938265478") ,m_balance(100) {

}
Customer::Customer(int id, string name,string m_phone, double bal) :
  m_custId(id), m_custName(name), m_balance(bal) {

}
Customer::Customer(const Customer& ref) :
        m_custId(ref.m_custId), m_custName(ref.m_custName),
                                              m_balance(ref.m_balance) {

}

void Customer::init(int x, string nstr,string pstr, double y) {
  m_custId = x;
  m_custName = nstr;
  m_phone = pstr;
  m_balance = y;
}
void Customer::makeCall(int nmins) { m_balance -= nmins * 10; }
void Customer::credit(double amount) { m_balance += amount; }
double Customer::getBalance() { return m_balance; }
void Customer::display() {
cout << m_custId << "," <<m_custName << ","<< m_balance <<","<<m_phone<<"\n";

}
//end of Customer


