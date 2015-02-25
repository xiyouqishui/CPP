//
//  man.h
//  Test1
//
//  Created by roy on 15-2-23.
//  Copyright (c) 2015年 roy. All rights reserved.
//

#ifndef __Test1__man__
#define __Test1__man__

#include <stdio.h>
#include "People.h"
class Man:public People{
public:
    Man();
    virtual ~Man();
    bool isMan();
    void say();
    virtual void virtualFunc();
    virtual void abstractFunc();
    
};

#endif /* defined(__Test1__man__) */
