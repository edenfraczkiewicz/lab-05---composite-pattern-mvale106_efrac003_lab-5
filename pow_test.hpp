//pow_test hpp

#ifndef __POW_TEST_HPP__
#define __POW_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"
#include "add.hpp"
#include "pow.hpp"

//zero test
TEST(PowTest, PowZero) {
	Base* left = new Op(0);
	Base* right = new Op(0);
	Base* test = new Pow(left, right);
	EXPECT_DOUBLE_EQ(test->evaluate(), 1);
}

TEST(PowTest, PowZeroString) {
	Base* left = new Op(0);
	Base* right = new Op(0);
	Base* test = new Pow(left, right);
	std::string str = "0.000000 ** 0.000000";
	EXPECT_EQ(test->stringify(), str);
}

//using whole numbers
TEST(PowTest, PowWholeNum) {
	Base* left = new Op(5);
	Base* right = new Op(3);
	Base* test = new Pow(left, right);
	EXPECT_DOUBLE_EQ(test->evaluate(), 125);
}

TEST(PowTest, PowWholeNumString) {
	Base* left = new Op(5);
	Base* right = new Op(3);
	Base* test = new Pow(left, right);
	std::string str = "5.000000 ** 3.000000";
	EXPECT_EQ(test->stringify(), str);
}

//combining pow with add
TEST(PowTest, PowWholeNumAddString) {
	Base* addA = new Op(3);
        Base* addB = new Op(3);
	Base* right = new Op(5);
        Base* left = new Add(addA, addB);
	Base* test = new Pow(left, right);
	std::string str = "3.000000 + 3.000000 ** 5.000000"; 
	EXPECT_EQ(test->stringify(), str);
}

#endif 
