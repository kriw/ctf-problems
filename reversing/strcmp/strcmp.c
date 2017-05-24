#include<stdio.h>
#include<string.h>
int main() {
    char buf[11];
    scanf("%10s", buf);
    if(!strcmp(buf, "MSM")) {
        puts("Correct");
    }else {
        puts("Wrong...");
    }
    return 0;
}
