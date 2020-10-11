#include <stdio.h>
#include "string/sds.h"

int main(int args, char* argv[]) {
    sds string = sdsnew("Hello World!");
    printf("%s\n", string);
    sdsfree(string);
    return 0;
}
