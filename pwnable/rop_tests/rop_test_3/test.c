#include <stdio.h>
#include <unistd.h>
char g_buf[10];

void fake() {
    read(0, g_buf, 10);
    write(1, g_buf, 10);
    puts("");
}

void test() {
    printf("");
}
int main() {
    char buf[100];
    setbuf(stdin, NULL);
    setbuf(stdout, NULL);
    scanf("%s", buf);
    return 0;
}
