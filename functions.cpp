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
    return p;
}
