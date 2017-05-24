# include <stdio.h>
# include <time.h>
# include <stdlib.h>

int main(){        
    setbuf(stdout, NULL);
    setbuf(stdin, NULL);
    char buf[100];
    int i;
    srand(time(0));

    for(i=0;i<5;i++) {
        printf("%d/%d\n", i + 1, 5);
        int n = rand();
        int m;
        scanf("%d", &m);
        if(n == m) {
            puts("Correct.");
        }else {
            puts("Wrong, bye.");
            break;
        }
    }

    if(i == 5) {
        printf("Congrats, FLAG is %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",
 'F','L','A','G','{','p','r','e','d','e','c','t','a','b','l','e','}');
    }
    return 0;
}
