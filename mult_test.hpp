#ifndef __MULT_TEST__
#define __MULT_TEST__

#include "gtest/gtest.h"

#include "op.hpp"
#include "mult.hpp"
#include <string>

using namespace std;

TEST(MultTest, MultiplyByZero) {
	Base* val1 = new Op(5.0);
	Base* val2 = new Op(0.0);
	Base* test = new Mult(val1, val2);
	EXPECT_EQ(test->evaluate(), 0.0);
}

TEST(MultTest, MultiplyByNeg) {
	Base* val1 = new Op(5.0);
        Base* val2 = new Op(-10.0);
        Base* test = new Mult(val1, val2);
        EXPECT_EQ(test->evaluate(), -50.0);
}

TEST(MultTest, MultiplyNegatives) {
	Base* val1 = new Op(-2.0);
        Base* val2 = new Op(-7.0);
        Base* test = new Mult(val1, val2);
        EXPECT_EQ(test->evaluate(), 14.0);
}

TEST(MultTest, MultiplyString) {
	Base* val1 = new Op(3.0);
        Base* val2 = new Op(4.0);
        Base* test = new Mult(val1, val2);
	string str = "3.000000 * 4.000000";
        EXPECT_EQ(test->stringify(), str);
}

#endif
