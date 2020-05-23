//
// Created by kobra on 5/21/2020.
//

#include "cd.h"
#include<stdio.h>

#include<unistd.h>
char * Cd::cd(char *str) {
    char s[100];
    chdir(str);
    getcwd(s,100);
    return s;
}