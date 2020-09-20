#ifndef __IPADDRESS_H
#define __IPADDRESS_H
#include <iostream>
#include<string>
#include <cmath>
using namespace std ;
enum IPClass { a='A',b= 'B',c= 'C',d= 'D' };
class IPAddress {
  private :
    string ipval;
  public:
    IPAddress () ;
    IPAddress (int , int , int , int  ) ;
    bool isloopBack(int , int , int , int ) ;
    int getIPClass(int w, int x, int y, int z) ;
    string get_IP() ;
    void display();
};
#endif

