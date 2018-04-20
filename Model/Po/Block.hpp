//
//  Block.hpp
//  POS
//
//  Created by dian hello on 2018/4/20.
//  Copyright © 2018年 dian hello. All rights reserved.
//

#ifndef Block_hpp
#define Block_hpp

#include <stdio.h>
class Block{
private:
    //点点币区块中的属性
    int nStakeModifier;//调节器
    int txPrev_block_nTime;//时间戳
    int bnTarget;//目标值
    int nCoinDayWeight;//币龄
public:
    Block(){
        nStakeModifier = 0;
        txPrev_block_nTime=0;
        bnTarget = 0;
        nCoinDayWeight = 0;
        nCoin = 0;
        
        
    }
    void setnStakeModifier(int n);//调节器
    void settxPrev_block_nTime(int n);//时间戳
    void setbnTarget(int n);//目标值
    void setnCoinDayWeight(int n);//币龄
    int nCoin;//币的数量
    
public:
    int getnStakeModifier();//调节器
    int gettxPrev_block_nTime();//时间戳
    int getbnTarget();//目标值
    int getnCoinDayWeight();//币龄
    int getnCoin();
    void setnCoin(int n);
    
};
#endif /* Block_hpp */
