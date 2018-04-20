//
//  Block.cpp
//  POS
//
//  Created by dian hello on 2018/4/20.
//  Copyright © 2018年 dian hello. All rights reserved.
//

#include "Block.hpp"
//调节器
void Block::setnStakeModifier(int n){
    nStakeModifier = n;
}
//时间戳
void Block::settxPrev_block_nTime(int n){
    txPrev_block_nTime = n;
}
//目标值
void Block::setbnTarget(int n){
    bnTarget = n;
}
//币龄
void Block::setnCoinDayWeight(int n){
    nCoinDayWeight = n;
}

void Block::setnCoin(int n){
    nCoin = n;
}


int Block::getnStakeModifier(){
    return nStakeModifier;
}
int Block::gettxPrev_block_nTime(){
    return txPrev_block_nTime;
}
int Block::getbnTarget(){
    return bnTarget;
}
int Block::getnCoinDayWeight(){
    return nCoinDayWeight;
}
int Block::getnCoin(){
    return nCoin;
}
