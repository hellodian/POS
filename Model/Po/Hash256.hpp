//
//  Hash256.hpp
//  POS
//
//  Created by dian hello on 2018/4/20.
//  Copyright © 2018年 dian hello. All rights reserved.
//

#ifndef Hash256_hpp
#define Hash256_hpp
#include "openssl/sha.h"
#include <string>
#include <stdio.h>
using namespace std;

//实现duiblock的sha256加密
class Hash256{
    //调用openssl的 哈希算法 对openssl的二次封装
public:
    void sha256(const std::string &srcStr, std::string &encodedStr, std::string &encodedHexStr);
    
};

#endif /* Hash256_hpp */
