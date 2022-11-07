#include <string.h>
#include <stdio.h>
#include <math.h>

int is_palindrome_iter(char *str);
int is_palindrome_rec_test(char *str, int length);
int is_palindrome_rec(char *str);

int main(void) {
    char str[50];

    scanf("%s",str);

    if(is_palindrome_iter(str)==1)
        printf("%s is a palindrome using iter\n",str);

    if(is_palindrome_rec(str)==1)
        printf("%s is a palindrome using rec\n",str);
}

int is_palindrome_iter(char *str) {
    int len = strlen(str) / sizeof(char);
    int runs = floor(len / 2);
    for (int i = 0; i < runs; ++i) {
        if (str[i] != str[len - (i + 1)])
            return 0;
    }
    return 1;
}

int is_palindrome_rec(char *str) {
    return is_palindrome_rec_test(str, strlen(str));
}

int is_palindrome_rec_test(char *str, int length) {
    if(length<2)
        return 1;
    if(str[0] != str[length-1])
        return 0;
    else
        return is_palindrome_rec_test(str + 1, length - 2);
}