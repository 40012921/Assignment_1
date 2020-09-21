/*
#include<iostream>
#include "complex1.h"
#include <gtest/gtest.h>
using namespace std;


TEST (Complex,Addition) {
    Complex c1(3,4);
    Complex c2(3,4);
    Complex a;
    a=c1+c2;
    EXPECT_EQ(6,a.getReal());
    EXPECT_EQ(8,a.getImag());

}

TEST (Complex,Subtraction) {
    Complex c1(7,9);
    Complex c2(3,4);
    Complex a;
    a=c1-c2;
    EXPECT_EQ(4,a.getReal());
    EXPECT_EQ(5,a.getImag());

}
TEST (Complex,Multi) {
    Complex c1(7,9);
    Complex c2(3,4);
    Complex a;
    a=c1*c2;
    EXPECT_EQ(21,a.getReal());
    EXPECT_EQ(36,a.getImag());

}
TEST (Complex,Equal) {
    Complex c1(3,4);
    Complex c2(3,4);
    EXPECT_EQ(true,c1.display()==c2.display());

}
TEST (Complex,getreal) {
    Complex c1(3,4);
    EXPECT_EQ(3,c1.getReal());

}
TEST (Complex,getimagin) {
    Complex c1(3,4);
    EXPECT_EQ(4,c1.getImag());

}

TEST(Complex,DisplayTest) {
    Complex c(3,4);
    std::string ExpectedOut="3+4i";
    testing::internal::CaptureStdout();
    c.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}
*/
