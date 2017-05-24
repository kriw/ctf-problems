#include<stdio.h>
#include<stdlib.h>

void fake() {
    puts("fake");
}

void kick_shell() {
    system("/bin/sh");
}

void kick_sheII() {
    puts("fake");
}
int main() {
    char buf[100];
    setbuf(stdin, NULL);
    setbuf(stdout, NULL);
    puts("Hello");
    scanf("%s", buf);
    puts("Bye");
    return 0;
}
