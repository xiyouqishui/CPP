//
//  main.cpp
//  List
//
//  Created by roy on 15-2-24.
//  Copyright (c) 2015年 roy. All rights reserved.
//

#include <iostream>
#include <string>
#include <list>
#include <map>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    list<string> l;
    l.push_back("10");
    l.push_back("9");
    l.push_back("8");
    for(list<string>::iterator it = l.begin(); it!=l.end(); it++){
        cout<<*it<<"\n";
    }
    
    map<string, string > m;
    m.insert(pair<string, string>("123","123"));
    m["321"]="321";
    cout<<m["123"]<<"\n";
    
    
    return 0;
}
