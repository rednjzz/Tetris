//
//  Blocks.hpp
//  Tetris
//
//  Created by LeeKyuseop on 2016. 1. 12..
//  Copyright © 2016년 rednjzz. All rights reserved.
//

#ifndef Blocks_hpp
#define Blocks_hpp

#include <stdio.h>
#include <iostream>

class blocks{
private:
    //unsigned char speed;
    //int num;
    unsigned char state;
    int kind;
    
public:
    blocks(unsigned char _state, int _kind);
    blocks(blocks& bl);
    
    //void Move();
    void Show();
};

class process{
private:
    unsigned int score;
    unsigned int n_clear_bl;
public:
    process(unsigned int _score, unsigned int _n_clear_bl);
    //void show_window(char* blocks,unsigned int score);
    void show_window();
    
};



#endif /* Blocks_hpp */
