#include "emscripten.h"
#include <stdio.h>
#include <string.h>

void md5(const uint8_t *initial_msg, size_t initial_len, uint8_t *digest);

EMSCRIPTEN_KEEPALIVE
uint8_t* md5Hash(const uint8_t *initial_msg, uint8_t len) {
    uint8_t* digest;
    md5(initial_msg, len, digest);
    return digest;
}

int main(int argc, char **argv) {

    printf("Hello World from wasm\n");

//    char *msg = "123";
//    size_t len;
//    int i;
//    uint8_t result[16];
//
//    len = strlen(msg);
//
//    // benchmark
//    for (i = 0; i < 1000000; i++) {
//        md5((uint8_t*)msg, len, result);
//    }
//
//    // display result
//    for (i = 0; i < 16; i++)
//        printf("%2.2x", result[i]);
//    puts("");
//
//    return 0;
}