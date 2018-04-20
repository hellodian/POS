//
//  poSSocket.hpp
//  POS
//
//  Created by dian hello on 2018/4/20.
//  Copyright © 2018年 dian hello. All rights reserved.
//

#ifndef poSSocket_hpp
#define poSSocket_hpp

#include <stdio.h>
#include "Block.hpp"
class poSSocket{
public:
    //对当前计算机的port端口 进行监听  当听到互联网的广播时 就需要设置一系列参数
    Block* listenInterNetPort(int port);
};
#endif /* poSSocket_hpp */
