#include "../src/palindrome.h"
#include <assert.h>

int main(){
    char* a[6] = {"aibohphobia","detartrated","hannah","malayalam","racecar","tattarrattat"};

    //testing is_palindrome_rec with 6 different strings which all are palindromes, expecting all strings to return 1.
    for (int i = 0; i < 6; ++i) {
        assert(is_palindrome_rec(a[i])==1);
    }

    char* b[6] = {"mogens","ostemad","rejesalat","cmakelist","rjalo","hundebutik"};

    //testing is_palindrome_rec with 6 different strings which all are not palindromes, expecting all strings to return 0.
    for (int i = 0; i < 6; ++i) {
        assert(is_palindrome_rec(b[i])==0);
    }
}