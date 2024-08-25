#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'kaprekarNumbers' function below.
#
# The function accepts following parameters:
#  1. INTEGER p
#  2. INTEGER q
#

def kaprekarNumbers(p, q):
    k_list = []
    for i in range(p, q + 1):
        temp_sq = i ** 2
        str_sq = str(temp_sq)
        d = len(str(i))
        # Split the square into left and right parts
        left = str_sq[:-d] if str_sq[:-d] else "0"
        right = str_sq[-d:]
        if int(left) + int(right) == i:
            k_list.append(i)
    if len(k_list) == 0:
        print("INVALID RANGE")
    else:
        k_list.sort()
        print(" ".join(map(str, k_list)))
        
      
        
        

if __name__ == '__main__':
    p = int(input().strip())

    q = int(input().strip())

    kaprekarNumbers(p, q)
