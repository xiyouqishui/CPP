//
//  main.cpp
//  Test3
//
//  Created by roy on 15-2-24.
//  Copyright (c) 2015年 roy. All rights reserved.
//

#include <iostream>
#include <thread>
#include <unistd.h>
#define CH(fp) (CallbackHandler)(&fp)
using namespace std;
class Object;
typedef void(Object::*CallbackHandler)();
void threadFunc(Object *target,CallbackHandler handler,int second){
    sleep(second);
    (target->*handler)();
};

void callLater(Object *target,CallbackHandler handler,int second){
    thread t(threadFunc,target,handler,5);
    t.join();
};


class Object{
public:
    void sayHi();
};
class Hello:public Object{
public:
    Hello(){
        callLater(this, CH(Hello::sayHello), 3);
    }
    void sayHello(){
        printf("later\n");
    }
};



int main(int argc, const char * argv[]) {
    // insert code here...
    Hello *h = new Hello();
    
    std::cout << "Hello, World!\n";
    return 0;
}
