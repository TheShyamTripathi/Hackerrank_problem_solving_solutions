#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'minimumDistances' function below.
#
# The function is expected to return an INTEGER.
# The function accepts INTEGER_ARRAY a as parameter.
#

def minimumDistances(a):
    min_dist = float('inf')
    index_map = {}
    
    for i, value in enumerate(a):
        if value in index_map:
            min_dist = min(min_dist, i-index_map[value])
        index_map[value] = i
    return min_dist if min_dist != float('inf') else -1           
    
    

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    a = list(map(int, input().rstrip().split()))

    result = minimumDistances(a)

    fptr.write(str(result) + '\n')

    fptr.close()
