//
//  People.h
//  Test1
//
//  Created by roy on 15-2-23.
//  Copyright (c) 2015年 roy. All rights reserved.
//

#ifndef __Test1__People__
#define __Test1__People__

#include <stdio.h>
class People{

protected:int sex;
public:
    int getSex();
    
    People(int sex);
    void say();
    virtual void virtualFunc();
    virtual void abstractFunc()=0;
    virtual ~People();
};



#endif /* defined(__Test1__People__) */
