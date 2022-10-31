#include <string.h>
#include <stdio.h>
#include <math.h>

int is_palindrome_iter(char *str);
int main(void)
{
    char *str = "gtootg";
    int test = is_palindrome_iter(str);
    printf("%d",test);

}

int is_palindrome_iter(char *str){
    int len = strlen(str)/ sizeof(char);
    int runs = floor(len/2);
    for (int i = 0; i < runs; ++i) {
        printf("%c",str[i]);
        printf("%c",str[len-(i+1)]);
        if(str[i]!=str[len-(i+1)])
            return 0;
    }
    return 1;
}