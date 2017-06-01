#include <stdio.h>
#include <stdlib.h>
int locked = 1;

void unlock() {
    locked = 0;
}

void spawn_shell() {
    if(locked) {
        printf("System failed to spawn\n");
    }else {
        printf("Spawning shell...\n");
        system("/bin/sh");
    }
}

int main() {
    char buf[100];
    setbuf(stdin, NULL);
    setbuf(stdout, NULL);
    scanf("%s", buf);
    return 0;
}
