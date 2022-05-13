//sub testing

#ifndef __CLASS_SUB_TEST__
#define __CLASS_SUB_TEST__

#include "gtest/gtest.h"

#include "sub.hpp"
#include "op.hpp"

//test with two nonzero vals

TEST(ClassSubtractionTest, SubEvaluateNonZero) {
    Base* left = new Op(20.0);
    Base* right = new Op(30.0);
    Base* test = new Sub(left, right);
    EXPECT_DOUBLE_EQ(test->evaluate(), -10.0);
}

TEST(ClassSubtractionTest, SubEvaluateNonZeroString) {
    Base* left = new Op(20.0);
    Base* right = new Op(30.0);
    Base* test = new Sub(left, right);
    std::string str = "20.000000 - 30.000000";
    EXPECT_EQ(test->stringify(), str);
}

//1 positive num, 1 negative num

TEST(ClassSubtractionTest, SubEvaluatePosNeg) {
    Base* left = new Op(-20.0);
    Base* right = new Op(30.0);
    Base* test = new Sub(left, right);
    EXPECT_DOUBLE_EQ(test->evaluate(), -50.0);
}

TEST(ClassSubtractionTest, SubEvaluatePosNegString) {
    Base* left = new Op(-20.0);
    Base* right = new Op(30.0);
    Base* test = new Sub(left, right);
    std::string str = "-20.000000 - 30.000000";
    EXPECT_EQ(test->stringify(), str);
}

#endif
