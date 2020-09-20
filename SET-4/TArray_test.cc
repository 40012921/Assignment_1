#include "garray.h"
#include<iostream>
#include <gtest/gtest.h>
using namespace std;
namespace {
TEST(MyArray,DefaultConstructor){
MyArray <int>a1;
EXPECT_EQ(0,a1.sum());
EXPECT_EQ(0,a1.sort());
EXPECT_EQ(0,a1.max());
EXPECT_EQ(0,a1.min());
EXPECT_EQ(false,a1.search());
EXPECT_EQ(0,a1.reverse());
}
TEST(MyArray,ParameterConstructor){
MyArray <int>a1(20);
EXPECT_EQ(20,a1.sum());
EXPECT_EQ(20,a1.sort());
EXPECT_EQ(20,a1.max());
EXPECT_EQ(20,a1.min());
EXPECT_EQ(true,a1.search());
EXPECT_EQ(20,a1.reverse());
}
}

