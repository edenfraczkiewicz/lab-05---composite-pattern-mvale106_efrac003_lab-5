#ifndef __OP_HPP__
#define __OP_HPP__

#include "base.hpp"
#include <string>
#include <cstdlib>

using namespace std;

class Op : public Base {
    private:
        double val;
        string str;

    public:
        Op(double value) : Base() { val = value; str = std::to_string(val); }
        virtual double evaluate() { return val; }
        virtual string stringify() { return str; }
};

#endif //__OP_HPP__
