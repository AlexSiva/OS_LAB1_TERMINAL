#include "Vector.h"

int main() {
 Number<double> x(4), y(4), x2(2), y2(2);
 Vector v(x, y), v2(x2, y2), v3;
 v3 = v3.Sum(v, v2);
    Number<double> polar = v.Angle();
    std::cout << polar.getValue() << " " << v3.getCoord1().getValue();
}
