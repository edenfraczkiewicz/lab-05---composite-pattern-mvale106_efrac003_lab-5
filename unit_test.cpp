//#include "gtest/gtest.h"

<<<<<<< HEAD
#include "rand_test.hpp"
=======
#include "op_test.hpp"
#include "rand_test.hpp"
#include "div_test.hpp"
>>>>>>> c38be38940f39bddcb85d0b1d280c231e508a222

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
