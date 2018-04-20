//
//  shareStake.hpp
//  POS
//
//  Created by dian hello on 2018/4/20.
//  Copyright © 2018年 dian hello. All rights reserved.
//

#ifndef shareStake_hpp
#define shareStake_hpp
#include "Block.hpp"
#include <string>
using namespace std;
class shareStake{
public:
    int getShareStake(Block *bock,string hashCode){
        //proofhash < 币龄*目标值
        if(stoi(hashCode)<bock->getnCoinDayWeight()*bock->getbnTarget()){
            //才能获得点点币
            //stakeReward = (0.01*ncoinage/365)*COIN
            int stakeReward = (0.01*bock->getnCoinDayWeight()/365)*bock->getnCoin();
            return stakeReward;
        }
        return 0;
    }
    
};

#include <stdio.h>

#endif /* shareStake_hpp */
