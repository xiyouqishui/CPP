//
//  main.cpp
//  Test2
//
//  Created by roy on 15-2-24.
//  Copyright (c) 2015年 roy. All rights reserved.
//

#include <iostream>
class Father;
typedef void(Father::*SayHi)();
class Father{
public:
    SayHi sayHi;
};
class Son:public Father{
public:
    Son(){
        sayHi = (void(Father::*)())(&Son::sonSayHi);
        (this->*sayHi)();
    }
    
    void sonSayHi(){
        printf("son say hi\n");
    }
};



int main(int argc, const char * argv[]) {
    // insert code here...
    Son * son = new Son();
    son->sonSayHi();
    
    std::cout << "Hello, World!\n";
    return 0;
}
