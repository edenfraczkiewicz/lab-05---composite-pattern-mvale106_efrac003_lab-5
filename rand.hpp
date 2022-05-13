#ifndef __RAND_HPP__
#define __RAND_HPP__

#include "base.hpp"
#include <cstdlib>
#include <string>

using namespace std;

class Rand : public Base {
    private:
        double randVal;
        string randStr;

    public:
        Rand() : Base() { randVal = rand() % 100; randStr = to_string(randVal); }
        virtual double evaluate() { return randVal; }
        virtual string stringify() { return randStr; }
};

#endif
