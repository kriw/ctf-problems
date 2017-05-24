#include <stdio.h>
#include <stdlib.h>

void fake() {
    system("echo /bin/sh");
}

int main() {
    char buf[10];
    setbuf(stdin, NULL);
    setbuf(stdout, NULL);
    puts("Yo");
    scanf("%s", buf);
    puts("Ta-ta");
    return 0;
}
