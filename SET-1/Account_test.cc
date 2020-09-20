#include <gtest/gtest.h>
#include"Account.h"
namespace {

TEST(Account,Copy_Constructor) {
    Account a1(1001,"Lippman",5000.0);
    Account a2(a1);
    EXPECT_EQ(1001,a2.getAccountNum());
    EXPECT_STREQ("Lippman",a2.getAccountName().c_str());
    EXPECT_EQ(7,a2.getAccountName().length());
    EXPECT_EQ(5000.0,a2.getBalance());
}

TEST (Account , Default_Constructor){
Account a1 ;
EXPECT_EQ (0 , a1.getBalance()) ;
EXPECT_EQ (0 , a1.getAccountNum());
EXPECT_EQ (0 , a1.getAccountName().length());
}

TEST(Account,Credit_Test) {
    Account a1(1001,"Lippman",5000.0);
    a1.credit(3000);
    EXPECT_EQ(8000.0,a1.getBalance());

}

TEST(Account,Debit_Test) {
    Account a1(1001,"Lippman",5000.0);
    a1.debit(1200);
    EXPECT_EQ(3800.0,a1.getBalance());
}

TEST (Account , Display_Account){
    Account a1(1001,"Lippman",5000.0);
    std::string ExpectedOut="1001,Lippman,5000\n";
    testing::internal::CaptureStdout();
    a1.display();
    std::string ActualOut = testing::internal::GetCapturedStdout();
    EXPECT_STREQ(ExpectedOut.c_str(), ActualOut.c_str());

}
}
