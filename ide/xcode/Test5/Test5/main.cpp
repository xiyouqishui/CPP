//
//  main.cpp
//  Test5
//
//  Created by roy on 15-2-24.
//  Copyright (c) 2015年 roy. All rights reserved.
//

#include <iostream>
class A{
    friend class B;
    
    int x = 99;
    
};
class B:public A{
public:
    void p(){
        printf("%d\n",x);
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    B b;
    b.p();
    return 0;
}
