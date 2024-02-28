#include <stdio.h>
#include "emscripten.h"

EMSCRIPTEN_KEEPALIVE int suma(int a, int b) {
    return a + b;
}


EMSCRIPTEN_KEEPALIVE int main() {
    printf("Hello World!, %d\n", suma(4, 6));
    return 0;
}
