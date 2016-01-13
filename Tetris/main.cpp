//
//  main.cpp
//  Tetris
//
//  Created by LeeKyuseop on 2016. 1. 12..
//  Copyright © 2016년 rednjzz. All rights reserved.
//

#include <iostream>
#include "Blocks.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Start Tetris \n";
    blocks b1(0,1);
    process p1(0,0);
    p1.show_window();
    //b1.Show();
    
    return 0;
}




