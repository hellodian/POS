//
//  poSmainController.hpp
//  POS
//
//  Created by dian hello on 2018/4/20.
//  Copyright © 2018年 dian hello. All rights reserved.
//

#ifndef poSmainController_hpp
#define poSmainController_hpp

#include <stdio.h>
#include <iostream>
#include "Block.hpp"
#include "Hash256.hpp"
#include "poSSocket.hpp"
#include "shareStake.hpp"
#include "string.h"
class poSmainController{
public:
    static void startpoS(){
        //监听互联网上的广播
        poSSocket *sckt = new poSSocket;
        int port;
        cin>>port;
        //听到互联网网络广播后产生的新节点
        Block* bock = sckt->listenInterNetPort(port);
        
        //通过hash加密 实现区块节点的sha256计算
        int blockContext = bock->getnCoinDayWeight()+bock->getnStakeModifier()+bock->gettxPrev_block_nTime()+bock->getbnTarget();
        //获得字符串类型的明文
        string bolckContexStr = to_string(blockContext);
        
        //通过openssl的sha256实现明文哈希计算
        string dectype;// 摘要
        string decryptHex;
        Hash256* hash = new Hash256;
        hash->sha256(bolckContexStr, dectype, decryptHex);
        cout<<decryptHex<<endl;
        //计算利息
        shareStake * sk = new shareStake;
        cout<<"分成"<<sk->getShareStake(bock, decryptHex)<<endl;
        delete sk;
        delete bock;
        delete sckt;
    }

};
#endif /* poSmainController_hpp */
