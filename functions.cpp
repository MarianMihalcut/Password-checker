#include <iostream>
#include <cstring>
#include "pass_check.h"

char *password_input()
{
    char *p;
    std::cout<<"Welcome to the password strenght checker!\n";
    std::cout<<"Password should not have spaces cause string reading stops at space\n";
    std::cout<<"Please input the password(should not have more than 50 characters):\n";
    p=new char[50];
    std::cin>>p;
    std::cin.get();
    return p;
}

const char *init_digits()
{
    const char *p;
    p=new char [11];
    p="0123456789";
    return p;
}

const char *init_letters_no_caps()
{
    const char *p;
    p=new char [27];
    p="abcdefghijklmnopqrstuvwxyz";
    return p;
}

const char *init_letters_caps()
{
    const char *p;
    p=new char [27];
    p="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    return p;
}

const char *init_special_chr()
{
    const char *p;
    p=new char [25];
    p="~`,?.!@#$%^&*(){}[]|<>:";
    return p;
}

bool exit()
{
    std::cout<<"Do you want to exit the program?\n";
    std::cout<<"Press 1 for Yes or 0 for No\n";
    bool answer;
    std::cin>>answer;
    return answer;
}

short int pass_length(char *&password)
{
    if(strlen(password)<=4)
        return 0;
    else if(strlen(password)<=25)
        return 1;
    else
        return 2;
}

bool is_in_str(char *&password,const char *&str)
{
    int len=strlen(password);
    for(int i=0;i<len;i++)
        if(strchr(str,password[i]))
            return 1;
    return 0;
}

void results(char *&password,const char *&str,short int select,bool *&result)
{
    if(is_in_str(password,str))
    {
        switch(select)
        {
            case 1:
                result[0]=1;
                break;
            case 2:
                result[1]=1;
                break;
            case 3:
                result[2]=1;
                break;
            case 4:
                result[3]=1;
                break;
        }
    }
}

