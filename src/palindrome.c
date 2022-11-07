#include "palindrome.h"


void convert_to_lowercase(char *str){//runs over every letter in the string and converts them to lowercase
    for (int i = 0; i < strlen(str); ++i) {
    str[i]= tolower(str[i]);

    }
}

int is_palindrome_iter(char *str) {//takes a string and return 1 if string is a palindrome
    for (int i = 0; i < floor(strlen(str) / 2); ++i){//Since 2 chars will be compared each iteration the loop will run string length / 2 times.
        if (str[i] != str[strlen(str) - (i + 1)])//compares fist and last letter in a string
            return 0;
    }
    return 1;
}

int is_palindrome_rec(char *str) {//takes a string and return the function is_palindrome_rec_test
    return is_palindrome_rec_test(str, strlen(str));
}

int is_palindrome_rec_test(char *str, int length){//Takes a string pointer and the length of the string, returns 1 if string is a palindrome
    if(length<2)//if the string length is less than 2 it must be palindrome: return 1
        return 1;
    if(str[0] != str[length-1])//if first and last letter is different string cant be palindrome: return 0
        return 0;
    else
        return is_palindrome_rec_test(str + 1, length - 2); //returns recursive call with the string pointer incremented by 1 and length decremented by 2
                                                                      //this allows us to compare each letter in the string until one of the if statements in the function
                                                                      //is true
}

