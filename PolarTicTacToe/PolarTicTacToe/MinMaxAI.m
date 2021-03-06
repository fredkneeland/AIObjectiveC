//
//  MinMaxAI.m
//  PolarTicTacToe
//
//  Created by Fred Kneeland on 11/2/14.
//  Copyright (c) 2014 Fred Kneeland. All rights reserved.
//

#import "MinMaxAI.h"
#import "Search.h"

@implementation MinMaxAI

+(int *) getNextMove:(int *)board :(int)team :(int)heuristicVal :(int)searchDepthVal
{
    return [Search getNextSpot:board :team :heuristicVal :searchDepthVal];
}

@end
