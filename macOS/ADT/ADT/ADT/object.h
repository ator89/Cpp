//
//  object.hpp
//  ADT
//
//  Created by Angel Torres on 1/26/19.
//  Copyright © 2019 Angel Torres. All rights reserved.
//

#ifndef OBJECT_H
#define OBJECT_H

#include <stdio.h>
#include <string>

class Object{
    
private:
    
public:
    Object();
    ~Object();
    
    
    virtual void toString(std::string);
};

#endif /* object_hpp */
