//
//  main.cpp
//  Test1
//
//  Created by roy on 15-2-23.
//  Copyright (c) 2015年 roy. All rights reserved.
//

#include <iostream>
#include <string.h>
#include "man.h"

class Test{
public:
    Test(int x,int y){
        this->x=x;
        this->y=y;
    }
    int x;
    int y;
    void sayHello(){printf("hello\n");};
    void sayHello(std::string name){std::cout<<name<<"\n";};
    void add(Test test){
        x+=test.x;
        y+=test.y;
    }
    void operator+=(Test test){
        x+=test.x;
        y+=test.y;
        std::cout<<x<<"  "<<y<<"\n";
    }
    void operator()(){
        printf("callback\n");
    }
};


int main(int argc, const char * argv[]) {
    /*People *man = new Man();
    man->virtualFunc();
    man->abstractFunc();
    delete man;
    man = NULL;*/
    Test *test = new Test(1,2);
    (*test)+=Test(1,2);
    (*test)();
    return 0;
}
