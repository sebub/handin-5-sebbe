
#include "palindrome.h"

int main(void) {
    char str[50];
    printf("Please enter a word to see if it is a palindrome:");
    scanf("%s",str);

    convert_to_lowercase(str);

    if(is_palindrome_iter(str)==1 && is_palindrome_rec(str) == 1)
        printf("%s is a palindrome\n",str);
    else
        printf("%s is not a palindrome\n",str);


}


