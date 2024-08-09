#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'designerPdfViewer' function below.
#
# The function is expected to return an INTEGER.
# The function accepts following parameters:
#  1. INTEGER_ARRAY h
#  2. STRING word
#

def designerPdfViewer(h, word):
    alphabet = 'abcdefghijklmnopqrstuvwxyz'
    temp =[]
    temp_height=[]
    for i in word:
        a = alphabet.index(i)
        temp.append(a)
    for i in temp:
        temp_height.append(h[i])
    max_height = max(temp_height)
    
    return ((len(word))*1*max_height)
    
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    h = list(map(int, input().rstrip().split()))

    word = input()

    result = designerPdfViewer(h, word)

    fptr.write(str(result) + '\n')

    fptr.close()
