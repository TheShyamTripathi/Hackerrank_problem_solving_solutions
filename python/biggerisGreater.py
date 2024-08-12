#!/bin/python3

import math
import os
import random
import re
import sys
from itertools import permutations

#
# Complete the 'biggerIsGreater' function below.
#
# The function is expected to return a STRING.
# The function accepts STRING w as parameter.
#

def biggerIsGreater(w):
    w_list = list(w)
    new_list = sorted(w_list, reverse=True)
    if new_list == w_list:
        return 'no answer'
         
    i = len(w_list) - 2
    while i >= 0 and w_list[i] >= w_list[i + 1]:
        i -= 1  

    j = len(w_list) - 1
    while w_list[j] <= w_list[i]:
        j -= 1

    w_list[i], w_list[j] = w_list[j], w_list[i]
    
    # Reverse the sequence from i+1 to end to get the next smallest lexicographical permutation
    w_list = w_list[:i + 1] + w_list[i + 1:][::-1]
    
    return ''.join(w_list)


        
    
    
        
    

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    T = int(input().strip())

    for T_itr in range(T):
        w = input()

        result = biggerIsGreater(w)

        fptr.write(result + '\n')

    fptr.close()
