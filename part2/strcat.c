#include <stdio.h>

char* strcat(char s[], char t[]);

int main() {
    char s[20] = "say";
    char t[] = " you";
    char d[] = " tomorrow.";
    printf("%s\n", strcat(strcat(s, t), d));
    return 0;
}

char* strcat(char s[], char t[]) {
    char* res = s;
    int i = 0, j = 0;
    while (s[i] != '\0')
        i++;
    while (t[j] != '\0')
        res[i++] = t[j++];
    return res;
}
