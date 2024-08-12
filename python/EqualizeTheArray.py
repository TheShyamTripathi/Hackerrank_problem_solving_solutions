#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'equalizeArray' function below.
#
# The function is expected to return an INTEGER.
# The function accepts INTEGER_ARRAY arr as parameter.
#
def max_count_number(arr):
    max_count = 0
    for i in arr:
        temp = arr.count(i)
        if temp>= max_count:
            max_count = temp
            num = i
    return num
    
    
def equalizeArray(arr):
    num = max_count_number(arr)
    num_list_count =  len([i for i in arr if i != num])
    return num_list_count

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input().strip())

    arr = list(map(int, input().rstrip().split()))

    result = equalizeArray(arr)

    fptr.write(str(result) + '\n')

    fptr.close()
