#include "gcomplex.h"
#include<iostream>
#include <gtest/gtest.h>
using namespace std;
namespace {
TEST(Complex,DefaultConstructor){
Complex<int> c1(0,0);
EXPECT_EQ("0+0i\n",c1.display());
}
TEST(Complex,ParameterConstructor){
Complex <int>c1(2,3);
EXPECT_EQ("2+3i\n",c1.display());
}
TEST(Complex,DisplayTest) {
    Complex <int>c(3,4);
    string ExpectedOut="3+4i";
    testing::internal::CaptureStdout();
    c.display();
    string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}
}
