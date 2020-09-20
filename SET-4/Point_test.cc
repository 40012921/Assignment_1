#include "gpoint.h"
#include<iostream>
#include <gtest/gtest.h>
using namespace std;
namespace{
TEST(Point,DefaultConstructor){
Point <int>p(0,0);
EXPECT_EQ("X axis is:0\nY axis is:0",p.display());
}
TEST(Point,ParameterConstructor){
Point<int> p(2,3);
EXPECT_EQ("X axis is:2\nY axis is:3",p.display());
}

TEST(Point,Quadrant){
Point<int> p(2,3);
EXPECT_EQ("Quadrant is:Q1", p.quadrant());
}
TEST(Point,distance){
Point <int>p(4,3);
EXPECT_EQ("Distance from Origin:5",p.distanceFromOrigin());
}

TEST(Point,DisplayTest) {
    Point <int>p(3,4);
    string ExpectedOut="X axis is:3\nY axis is:4";
    testing::internal::CaptureStdout();
    p.display();
    string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}
}
