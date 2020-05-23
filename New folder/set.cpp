//
// Created by kobra on 5/21/2020.
//

#include<unistd.h>
#include "set.h"
void Set::set(string str){
    this->str=str.substr(8, str.length());
}