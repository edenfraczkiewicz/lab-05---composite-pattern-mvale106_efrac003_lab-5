#ifndef __OP_HPP__
#define __OP_HPP__

#include "base.hpp"
#include <string>

using namespace std;

class Op : public Base {
    private:
        double val = value;
        string str = to_string(val);

    public:
        Op(double value) : Base() { }
        virtual double evaluate() { return val }
        virtual string stringify() { return str }
};

#endif //__OP_HPP__
