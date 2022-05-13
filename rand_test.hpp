#ifndef __RAND_TEST_HPP__
#define __RAND_TEST_HPP__

#include "gtest/gtest.h"
#include "op.hpp"
#include "rand.hpp"
#include <string>

using namespace std;

TEST(RandTest, CheckFor100Evaluate) {
	Rand* test = new Rand();
	EXPECT_LT(test->evaluate(), 100);
}

TEST(RandTest, CheckForNegEvaluate) {
	Rand* test = new Rand();
	EXPECT_GT(test->evaluate(), -1);
}

TEST(RandTest, CheckFor100Stringify) {
	Rand* test = new Rand();
	string wrongResult = "100";
	EXPECT_NE(test->stringify(), wrongResult);
}

TEST(RandTest, CheckForNegStringify) {
        Rand* test = new Rand();
        string wrongResult = "-1";
        EXPECT_NE(test->stringify(), wrongResult);
}


#endif
