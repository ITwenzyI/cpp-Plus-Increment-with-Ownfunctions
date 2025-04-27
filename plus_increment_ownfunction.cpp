//Created by Kilian
#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm> // für std::transform

struct variable {
    double value;

    variable(double v) {
        value = v;
    }
};

// Summiert zwei variable
variable plus(const variable& a, const variable& b) {
    return variable(a.value + b.value);
}

// Erhöht a um 1
void increment(variable& a) {
    a.value += 1;
}

// increment verändert a und gibt eine Referenz auf a zurück
variable& increment(variable& a, const variable& b) {
    a.value += b.value;
    return a;
}



int main() {
    variable a(1);
    variable b(2);
    variable c(3);
    variable d = plus(a, b);
    variable& e = increment(d, 2);
    increment(e);
    variable f(4);
    increment(f, c);
    std::cout << "a=" << a.value << " b=" << b.value << " c=" << c.value << " d=" << d.value << " e=" << e.value << " f=" << f.value << std::endl;

}
