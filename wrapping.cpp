#include <iostream>
#include "emscripten.h"

extern "C" {
    int suma(int a, int b) {
        return a + b;
}  
 }

EMSCRIPTEN_KEEPALIVE int main() {
    std::cout << "Hello World!, " << suma(4, 6) << std::endl;
    return 0;
}
