//
//  man.cpp
//  Test1
//
//  Created by roy on 15-2-23.
//  Copyright (c) 2015年 roy. All rights reserved.
//

#include "man.h"
bool Man::isMan(){
    return this->sex==1?true:false;
};
Man::Man():People(1){
    printf("one man");
}
Man::~Man(){
    printf("delete man");
}
void Man::say(){
    People::say();
    printf("man say hehe\n");
};
void Man::virtualFunc(){
    People::virtualFunc();
    printf("man virtual");
};
void Man::abstractFunc(){
    printf("man abstractFunc");
}
