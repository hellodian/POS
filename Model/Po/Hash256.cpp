
//
//  Hash256.cpp
//  POS
//
//  Created by dian hello on 2018/4/20.
//  Copyright © 2018年 dian hello. All rights reserved.
//

#include "Hash256.hpp"
void Hash256::sha256(const std::string &srcStr, std::string &encodedStr, std::string &encodedHexStr)
{
    // 调用sha256哈希
    unsigned char mdStr[33] = {0};
    SHA256((const unsigned char *)srcStr.c_str(), srcStr.length(), mdStr);
    
    // 哈希后的字符串
    encodedStr = std::string((const char *)mdStr);
    // 哈希后的十六进制串 32字节
    char buf[65] = {0};
    char tmp[3] = {0};
    for (int i = 0; i < 32; i++)
    {
        sprintf(tmp, "%02x", mdStr[i]);
        strcat(buf, tmp);
    }
    buf[32] = '\0'; // 后面都是0，从32字节截断
    encodedHexStr = std::string(buf);
}
