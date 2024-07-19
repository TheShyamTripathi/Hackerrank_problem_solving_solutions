#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'climbingLeaderboard' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts following parameters:
#  1. INTEGER_ARRAY ranked
#  2. INTEGER_ARRAY player
#

# def climbingLeaderboard(ranked, player):
#     result = []
#     for i in  player:
#         rank =1
#         ranked.append(i)
#         ranked.sort(reverse=True)
#         a = ranked.index(i)
        
#         for j in range (0,a):
#              if(ranked[j]!=ranked[j+1]):
#                  rank +=1
#              elif(ranked[j]==ranked[j+1]):
#                 continue
#         result.append(rank)
#     return result
    
def climbingLeaderboard(ranked, player):
    # Create a list of unique ranks in descending order
    unique_ranks = sorted(set(ranked), reverse=True)
    result = []

    for score in player:
        # Determine the player's rank
        while unique_ranks and score >= unique_ranks[-1]:
            unique_ranks.pop()
        result.append(len(unique_ranks) + 1)  # +1 for rank

    return result
              
if __name__ == '__main__':
    import os

    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    ranked_count = int(input().strip())
    ranked = list(map(int, input().rstrip().split()))

    player_count = int(input().strip())
    player = list(map(int, input().rstrip().split()))

    result = climbingLeaderboard(ranked, player)

    fptr.write('\n'.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
