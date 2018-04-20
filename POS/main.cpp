//
//  main.cpp
//  POS
//
//  Created by dian hello on 2018/4/20.
//  Copyright © 2018年 dian hello. All rights reserved.
//

#include <iostream>
#include "Block.hpp"
#include "Hash256.hpp"
#include "poSSocket.hpp"
#include "shareStake.hpp"
#include "string.h"
#include "poSmainController.hpp"

int main(int argc, const char * argv[]) {
    poSmainController::startpoS();
    return 0;
}
