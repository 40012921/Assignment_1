#include <gtest/gtest.h>
#include"IPaddress.h"
namespace {

TEST (IPAddress , Parameterised ) {
    std::string ExpectedOut="Parameterised called!!\n";
    testing::internal::CaptureStdout();
    IPAddress p(196,28,61,1);
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}
TEST (IPAddress , Default ) {
    std::string ExpectedOut="Default called!!\n";
    testing::internal::CaptureStdout();
    IPAddress p;
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}

TEST ( IPAddress, LoopBack ) {
    IPAddress a (127,0,0,1) ;
    EXPECT_EQ(true, a.isloopBack(127,0,0,1)) ;
}

TEST (IPAddress, IPCLASS_type) {
    IPAddress a (127,0,0,1) ;
    std::string ExpectedOut="IP Class::A\n";
    testing::internal::CaptureStdout();
    a.getIPClass(127,0,0,1);
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());
}
TEST (IPAddress , Display){
    IPAddress a (127 ,0 , 0 ,1);
    std::string ExpectedOut="IPAddress is :127.0.0.1\n";
    testing::internal::CaptureStdout();
    a.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());

}
}
