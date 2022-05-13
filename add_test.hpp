//testing add class

#ifndef __CLASS_ADD_TEST__
#define __CLASS_ADD_TEST__

#include "gtest/gtest.h"

#include "add.hpp"
#include "op.hpp"

//two nonzero vals
TEST(ClassAdditionTest, AddEvaluateNonZero) {
	Base* left = new Op(5.0);
    	Base* right = new Op(25.0);
    	Base* test = new Add(left, right);
    	EXPECT_DOUBLE_EQ(test->evaluate(), 30.0);
}

TEST(ClassAdditionTest, AddEvaluateNonZeroString) {
    	Base* left = new Op(5.0);
    	Base* right = new Op(25.0);
    	Base* test = new Add(left, right);
    	std::string str = "5.000000 + 25.000000";
    	EXPECT_EQ(test->stringify(), str);
}

//1 positive num, 1 negative num
TEST(ClassAdditionTest, AddEvaluatePosNeg) {
    	Base* left = new Op(-5.0);
    	Base* right = new Op(25.0);
    	Base* test = new Add(left, right);
    	EXPECT_DOUBLE_EQ(test->evaluate(), 20.0);
}

TEST(ClassAdditionTest, AddEvaluatePosNegString) {
    	Base* left = new Op(-5.0);
    	Base* right = new Op(25.0);
    	Base* test = new Add(left, right);
    	std::string str = "-5.000000 + 25.000000";
    	EXPECT_EQ(test->stringify(), str);
}

#endif
