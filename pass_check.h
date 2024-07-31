#ifndef PASS_CHECK_H_
#define PASS_CHECK_H_

//initial state
char *password_input();
const char *init_digits();
const char *init_letters_no_caps();
const char *init_letters_caps();
const char *init_special_chr();

//for exit
bool exit();

//password
short int pass_length(char *&password);
bool has_digits(char *&password,const char *&digits);
bool has_small_letters(char *&password,const char *&letters);
bool has_cap_letters(char *&password,const char *&letters);
bool has_special_chr(char *&password);

#endif
