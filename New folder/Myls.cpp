//
// Created by kobra on 5/21/2020.
//
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<dirent.h>
#include "Myls.h"


int Myls::myls(int argc, char **argv) {
    struct dirent **namelist;
    int n;
    if (argc < 1) {
        exit(EXIT_FAILURE);
    } else if (argc == 1) {
        n = scandir(".", &namelist, NULL, alphasort);
    } else {
        n = scandir(argv[1], &namelist, NULL, alphasort);
    }
    if (n < 0) {
        perror("candir");
        exit(EXIT_FAILURE);
    } else {
        while (n--) {
            string C=namelist[n]->d_name;
            NameList.push_back(C);
            free(namelist[n]);
        }
        free(namelist);
    }
    return NameList;
}