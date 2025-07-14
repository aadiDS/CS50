#include <stdio.h>
#include <string>

int main(void){
    int n = 50;
    int *p = &n;
    char *s = "HI!";
    printf("%s\n",s);
    printf("%c\n",s[0]);
    printf("%p\n",*p);
    printf("%i\n", n);
    printf("%p\n",&n);
}