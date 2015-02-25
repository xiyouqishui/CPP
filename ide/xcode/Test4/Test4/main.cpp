//
//  main.cpp
//  Test4
//
//  Created by roy on 15-2-24.
//  Copyright (c) 2015年 roy. All rights reserved.
//

#include <iostream>

class Point{
private:
    int x;
    int y;
public:
    Point(int x,int y){
        this->x=x;
        this->y=y;
    }
    void add(Point &p){
        this->x+=p.x;
        this->y+=p.y;
        std::cout<<this->x<<"  "<<this->y<<"\n";
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    Point *a = new Point(1,1);
    Point *b = new Point(2,2);
    a->add(*b);
    
    
    return 0;
}
