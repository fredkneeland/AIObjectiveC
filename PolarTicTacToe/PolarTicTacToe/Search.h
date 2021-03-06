//
//  Search.h
//  PolarTicTacToe
//
//  Created by Fred Kneeland on 9/29/14.
//  Copyright (c) 2014 Fred Kneeland. All rights reserved.

#import <Foundation/Foundation.h>

int searchDepth;
@interface Search : NSObject

+(int *) getNextSpot:(int *)gameBoard :(int)team :(int)heuristicVal :(int)searchDepthVal;
+(int) strictMinMaxSearch:(int *)gameBoard :(int)team :(int)round :(int)heuristicVal;
+(int *) getNextSpotAlphaBeta:(int *)gameBoard :(int)team :(int)heuristicVal :(int)searchDepthVal :(int)verboseVal;
+(int) alphaBetaSearch:(int *)gameBoard :(int)team :(int)round :(int)parentScore :(int)heuristicVal :(int) verboseVal;
+(int *) getNextSpotNearestNeighbor:(int *)gameBoard :(int)team :(int)heuristicVal :(int)searchDepthVal;

@end