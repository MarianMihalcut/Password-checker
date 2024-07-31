#include <iostream>
#include "pass_check.h"

int main()
{
    char *p;
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

    //program
    while(1)
    {
        p=password_input();

        //checking password lenght
        if(pass_length(p)==0) 
        {
            std::cout<<"Password is too short.\n";
            if(exit())
                break;
        }
        else if(pass_length(p)==1)
            std::cout<<"Password has a good length\n";
        else if(pass_length(p)==2)
            std::cout<<"Password has an execellent length\n";
        
        //analysis regarding characters
        
    }
    delete [] digits,s_let,b_let,special,p;
    return 0;
}
