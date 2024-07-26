#include <iostream>
#include "pass_check.h"

int main()
{
    char *p;
    p=password_input();
    const char *digits,*s_let,*b_let,*special;
    digits=init_digits();
    s_let=init_letters_no_caps();
    b_let=init_letters_caps();
    special=init_special_chr();

    const char forbidden_passwords[11][7]={
        "00000",
        "12345",
        "54321",
        "ABCDE",
        "EDCBA",
        "QWERTY",
        "YTREWQ",
        "abcde",
        "edcba",
        "qwerty",
        "ytrewq"
    };
    return 0;
}
