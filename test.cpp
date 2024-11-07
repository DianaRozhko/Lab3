#include <cassert>
#include "main.cpp"  // Замініть на ім'я вашого основного файлу

void testHyperbolicSine() {
    double x = 1.0;
    double expected = x + x * x * x / 6 + x * x * x * x * x / 120;
    assert(fabs(hyperbolicSine(x) - expected) < 1e-5);
}

int main() {
    testHyperbolicSine();
    std::cout << "All tests passed!" << std::endl;
    return 0;
}
