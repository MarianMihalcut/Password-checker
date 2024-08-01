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
bool is_forbidden(char *&password,const char str[][7]); //checks if password should not be used
short int pass_length(char *&password);
bool is_in_str(char *&password,const char *&str);
void results(char *&password,const char *&str,short int select,bool *&result);

//password strenght
short int cnt_result(bool *&result);
bool is_weak(char *&password,bool *&result);
bool is_ok(char *&password,bool *&result);
bool is_strong(char *&password,bool *&result);


#endif
