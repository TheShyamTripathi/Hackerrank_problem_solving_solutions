#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'beautifulDays' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. INTEGER i
#  2. INTEGER j
#  3. INTEGER k
#

def reverse(i):
    temp =''
    while(i!=0):
        rem = i%10
        temp += str(rem)
        i //= 10
    return int(temp)
def beautifulDays(i, j, k):
    beutiful_days = 0
    for a in range (i,j+1):
        if abs(a- reverse(a))%k ==0:
            beutiful_days +=1
    return beutiful_days

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    first_multiple_input = input().rstrip().split()

    i = int(first_multiple_input[0])

    j = int(first_multiple_input[1])

    k = int(first_multiple_input[2])

    result = beautifulDays(i, j, k)

    fptr.write(str(result) + '\n')

    fptr.close()
