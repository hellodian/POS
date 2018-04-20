//
//  poSSocket.cpp
//  POS
//
//  Created by dian hello on 2018/4/20.
//  Copyright © 2018年 dian hello. All rights reserved.
//

#include "poSSocket.hpp"
#include <time.h>
Block* poSSocket::listenInterNetPort(int port){
    if(port == 8222){//8333是比特币
        //将网络上的参数设置到block上
        Block *block = new Block;
        block->setnStakeModifier(1107);//1107网络传递过来调节器的参数
        //设置区块的参数
        block->setnCoinDayWeight(100*90);//币龄
        time_t t = time(0);
        block->settxPrev_block_nTime(int(t));
        block->setbnTarget(100*(1007*60*60+2*10)/(1009*10*60));
        block->setnCoin(100);//设置点点币数量
        return block;
    }
    return NULL;
}
