#!/bin/python3

import math
import os
import random
import re
import sys


def pickingNumbers(a):
    max_length = 0
    a.sort()
    for i in range(len(a)):
        count = 1
        for j in range(i + 1, len(a)):
            if abs(a[i] - a[j]) <= 1:
                count += 1
            else:
                break
        if count > max_length:
            max_length = count
    return max_length
      
        

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    a = list(map(int, input().rstrip().split()))

    result = pickingNumbers(a)

    fptr.write(str(result) + '\n')

    fptr.close()
