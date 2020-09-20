#include <iostream>
#include "Point.h"
#include <gtest/gtest.h>
namespace{
TEST (Point , Parameterised_Constructor ) {
    std::string ExpectedOut="Parameterised Constructor call!!\n";
    testing::internal::CaptureStdout();
    Point p(2,4);
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}
TEST (Point , Default_Constructor ) {
    std::string ExpectedOut="Default Constructor call!!\n";
    testing::internal::CaptureStdout();
    Point p;
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}
TEST (Point , Copy_Constructor ) {
    Point p1(2,4);
    std::string ExpectedOut="Point values Copied !!\n";
    testing::internal::CaptureStdout();
    Point p2(p1);
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

TEST(Point,Distance_from_Origin) {
    Point p(1,2);
    string ExpectedOut="The distance from the origin is :2";
    testing::internal::CaptureStdout();
    p.distanceFromOrigin();
    string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

TEST(Point,ON_x_axis) {
    Point p(1,2);
    string ExpectedOut="NO , it is not on the x-axis \n";
    testing::internal::CaptureStdout();
    p.isOnXAxis();
    string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

TEST(Point,ON_y_axis) {
    Point p(1,2);
    string ExpectedOut="NO , it is not on the y-axis \n";
    testing::internal::CaptureStdout();
    p.isOnYAxis();
    string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}
TEST(Point,ON_origin) {
    Point p(1,2);
    string ExpectedOut="The point is not the origin\n";
    testing::internal::CaptureStdout();
    p.isOrigin();
    string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}
TEST(Point,Display_Point) {
    Point p(1,2);
    string ExpectedOut="The given point is : 1,2\n";
    testing::internal::CaptureStdout();
    p.display();
    string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}
}
