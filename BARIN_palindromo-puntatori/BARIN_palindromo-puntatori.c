#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(void) {

    char frase[] = "i topi non avevano nipoti";
    bool palindroma = true;

    char *p1 = frase;
    char *p2 = frase;

    while (*p2 != '\0') {
        p2++;
    }
    p2--;


    while (p1<=p2) {
        if (*p1 == ' ') {
          p1++;
        }else if (*p2 == ' ') {
           p2--;
        }

        if (*p1!=*p2) {
           palindroma = false;
        }

        p1++;
        p2--;
    }

    if (palindroma == true) {
        printf("palindroma\n");
    } else {
        printf("no palindroma\n");
    }
    return 0;
}