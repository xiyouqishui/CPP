//
//  People.cpp
//  Test1
//
//  Created by roy on 15-2-23.
//  Copyright (c) 2015年 roy. All rights reserved.
//

#include "People.h"
int People::getSex(){
    return this->sex;
}
People::People(int sex){
    this->sex = sex;
}
void People::say(){
    printf("people hehe");
}
void People::virtualFunc(){
    printf("people virtual");
}
People::~People(){
    printf("people delete\n");
}
