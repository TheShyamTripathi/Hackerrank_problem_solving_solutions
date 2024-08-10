#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'appendAndDelete' function below.
#
# The function is expected to return a STRING.
# The function accepts following parameters:
#  1. STRING s
#  2. STRING t
#  3. INTEGER k
#

def appendAndDelete(s, t, k):
    common_length =0
    for i in range (min(len(s), len(t))):
        if s[i]==t[i]:
            common_length += 1
        else:
            break
    
    min_operations = (len(s) - common_length) + (len(t) - common_length)
    
    # Check if k is enough and meets the conditions
    if k == min_operations or (k >= len(s) + len(t)) or (k > min_operations and (k - min_operations) % 2 == 0):
        return "Yes"
    else:
        return "No"
        
    

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    t = input()

    k = int(input().strip())

    result = appendAndDelete(s, t, k)

    fptr.write(result + '\n')

    fptr.close()
