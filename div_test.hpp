#ifndef __DIV_TEST__
#define __DIV_TEST__

#include "gtest/gtest.h"

#include "op.hpp"
#include "div.hpp"
#include <string>

using namespace std;

TEST(DivTest, DivideByZero) {
        Base* val1 = new Op(0.0);
        Base* val2 = new Op(1.0);
        Base* test = new Div(val1, val2);
        EXPECT_EQ(test->evaluate(), 0.0);
}

TEST(DivTest, DivideByNeg) {
        Base* val1 = new Op(-10.0);
        Base* val2 = new Op(5.0);
        Base* test = new Div(val1, val2);
        EXPECT_EQ(test->evaluate(), -2.0);
}

TEST(DivTest, DivideNegatives) {
        Base* val1 = new Op(-64.0);
        Base* val2 = new Op(-8.0);
        Base* test = new Div(val1, val2);
        EXPECT_EQ(test->evaluate(), 8.0);
}

TEST(DivTest, DivideString) {
        Base* val1 = new Op(12.0);
        Base* val2 = new Op(4.0);
        Base* test = new Div(val1, val2);
        string str = "12.000000/4.000000";
        EXPECT_EQ(test->stringify(), str);
}

#endif
