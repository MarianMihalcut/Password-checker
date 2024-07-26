#include <iostream>
#include "pass_check.h"

int main()
{
    char *p;
    p=password_input();
    std::cout<<p;
    char *digits,*s_let,*b_let,*special;
    digits=init_digits();
    s_let=init_letters_no_caps();
    b_let=init_letters_caps();
    special=init_special_chr();
    return 0;
}
