#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'timeInWords' function below.
#
# The function is expected to return a STRING.
# The function accepts following parameters:
#  1. INTEGER h
#  2. INTEGER m
#

def timeInWords(h, m):
    list_numbers = ['one', 'two', 'three', 'four', 'five', 'six', 'seven', 'eight', 'nine', 'ten','eleven', 'twelve', 'thirteen', 'fourteen', 'fifteen', 'sixteen', 'seventeen', 'eighteen', 'nineteen', 'twenty', 'twenty one', 'twenty two', 'twenty three', 'twenty four', 'twenty five', 'twenty six', 'twenty seven', 'twenty eight', 'twenty nine']
    
    if m == 0:
        return (f"{list_numbers[h-1]} o\' clock") 
    if m>0 and m<30:
        if m == 15:
            return (f"quarter past {list_numbers[h-1]}")
        elif m==1:
            return (f"{list_numbers[m-1]} minute past {list_numbers[h-1]}")
        else:
            return (f"{list_numbers[m-1]} minutes past {list_numbers[h-1]}")
    if m== 30:
        return (f"half past {list_numbers[h-1]}")
    if m>30 and m<60:
        if m == 45:
            return (f"quarter to {list_numbers[h]}")
        else:
            minute_rem = 60- m
            return (f"{list_numbers[minute_rem-1]} minutes to {list_numbers[h]}")
            
            


if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    h = int(input().strip())

    m = int(input().strip())

    result = timeInWords(h, m)

    fptr.write(result + '\n')

    fptr.close()
