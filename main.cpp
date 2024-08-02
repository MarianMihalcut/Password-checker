#include <iostream>
#include "pass_check.h"

int main()
{
    char *p;
    const char *digits,*s_let,*b_let,*special;
    digits=init_digits();
    s_let=init_letters_no_caps(); //small letters
    b_let=init_letters_caps(); //big letters(caps)
    special=init_special_chr(); //special characters

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
            else
                continue;
        }
        else if(pass_length(p)==1)
            std::cout<<"Password has a good length\n";
        else if(pass_length(p)==2)
            std::cout<<"Password has an execellent length\n";
        
        if(is_forbidden(p,forbidden_passwords))
        {
            std::cout<<"This password is unsecure-should not be used!\n\n";
            if(exit())
                break;
        }  
        else
        {
            //analysis regarding characters
            bool *result;
            result=new bool [4];
            for(int i=0;i<4;i++)
                result[i]=0;
            results(p,digits,1,result);
            results(p,s_let,2,result);
            results(p,b_let,3,result);
            results(p,special,4,result);

            //stating pass strenght
            if(is_weak(p,result))
            {
                std::cout<<"Password is weak. You should add more characters. For example:\n";
                std::cout<<"Small letters,caps,special characters like ?,!, etc.\n";
            }
            else if(is_ok(p,result))
                std::cout<<"Password is acceptable. You can also add special characters.\n";
            else if(is_strong(p,result))
                std::cout<<"Password is strong.\n";
            std::cout<<'\n';
            if(exit())
                break;
        }
        
        
    }

    //deallocation
    return 0;
}

