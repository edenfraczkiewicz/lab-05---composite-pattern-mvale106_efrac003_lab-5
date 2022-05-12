//testing add class

#ifndef __CLASS_ADD_TEST__
#define __CLASS_ADD_TEST__

#include "gtest/gtest.h"

#include "add.hpp"
#include "op.hpp"

TEST(ClassAdditionTest, AddEvaluateNonZero) {
    Base* left = new Op(10.0);
    Base* right = new Op(20.0);
    Base* test = new Add(left, right);
    EXPECT_DOUBLE_EQ(test->evaluate(), 30.0);
}

TEST(ClassAdditionTest, AddEvaluateNonZeroString) {
    Base* left = new Op(10.0);
    Base* right = new Op(20.0);
    Base* test = new Add(left, right);
    std::string str = "10.000000 + 20.000000";
    EXPECT_EQ(test->stringify(), str);
}

TEST(ClassAdditionTest, AddEvaluatePosNeg) {
    Base* left = new Op(-10.0);
    Base* right = new Op(20.0);
    Base* test = new Add(left, right);
    EXPECT_DOUBLE_EQ(test->evaluate(), 10.0);
}

TEST(ClassAdditionTest, AddEvaluatePosNegString) {
    Base* left = new Op(-10.0);
    Base* right = new Op(20.0);
    Base* test = new Add(left, right);
    std::string str = "-10.000000 + 20.000000";
    EXPECT_EQ(test->stringify(), str);
}

#endif
