#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the flatlandSpaceStations function below.

def flatlandSpaceStations(n, c):
    c.sort()  # Sort the list of space stations
    max_len = 0
    
    # Check distance to the first space station
    max_len = max(max_len, c[0] - 0)
    
    # Check distances between consecutive space stations
    for i in range(len(c)-1):
        dif = abs(c[i+1] - c[i])
        temp = math.floor(dif / 2)
        if max_len < temp:
            max_len = temp
    
    # Check distance to the last space station
    max_len = max(max_len, (n-1) - c[-1])
    
    return max_len

    
                      

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    nm = input().split()

    n = int(nm[0])

    m = int(nm[1])

    c = list(map(int, input().rstrip().split()))

    result = flatlandSpaceStations(n, c)

    fptr.write(str(result) + '\n')

    fptr.close()
