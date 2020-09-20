#include "gstack.h"
#include<iostream>
#include <gtest/gtest.h>
using namespace std;
namespace {
TEST(MyStack,isemp){
MyStack<bool> m;
EXPECT_EQ(true,m.isEmpty());
}
TEST(MyStack,pushFunc){
MyStack <int>m(5);
EXPECT_EQ("The pushed element is:5",m.push(5));
EXPECT_EQ("The pushed element is:10",m.push(10));
}
TEST(MyStack,popFunc){
MyStack <int>m(5);
m.push(5);
m.push(10);
m.push(15);
EXPECT_EQ("The popped element is:5",m.pop());
EXPECT_EQ("The popped element is:10",m.pop());
EXPECT_EQ("The popped element is:15",m.pop());
}
TEST(MyStack,isfull){
MyStack<int> m(2);
m.push(5);
m.push(10);
m.push(15);
EXPECT_EQ(true,m.isFull());
}
}

