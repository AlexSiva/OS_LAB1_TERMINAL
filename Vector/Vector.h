#ifndef VECTOR_VECTOR_H
#define VECTOR_VECTOR_H

#include "Number.h"
class Vector {
private:
    Number<double> coord1;
    Number<double> coord2;

public:
    Vector() = default;
    ~Vector() = default;
    Vector(Number<double> _x, Number<double> _y) {
        coord1.setValue(_x.getValue());
        coord2.setValue(_y.getValue());
    }
    Vector Sum(Vector, Vector);
    Number<double> Rad();
    Number<double> Angle();
    Number<double> getCoord1() { return this->coord1; }
    Number<double> getCoord2() { return this->coord2; }
    void setCoord1(Number<double> numb) { this->coord1 = numb; }
    void setCoord2(Number<double> numb) { this->coord2 = numb; }
};

Vector zero(Zero, Zero);
Vector one(One, One);

#endif //VECTOR_VECTOR_H
