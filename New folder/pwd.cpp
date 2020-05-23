//
// Created by kobra on 5/20/2020.
//
#include<unistd.h>
#include "pwd.h"
char * Pwd::pwd(){
        char s[100];
        getcwd(s,100);
        return s;
}
