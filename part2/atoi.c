#include <stdio.h>

int atoi(char s[]);

int main() {
    char s[] = "369875";
    printf("%s number is: %d\n", s, atoi(s));
    return 0;
}

int atoi(char s[]) {
    int i, res;
    res = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i) {
        res = 10 * res + (s[i] - '0');
    }
    return res;
}
