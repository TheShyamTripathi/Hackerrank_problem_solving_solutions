#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'acmTeam' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts STRING_ARRAY topic as parameter.
#

def acmTeam(topic):
    topic_2 = []
    max_team = 0
    max_topics = 0
    max_int_topics = []

    # Convert binary strings to integers
    for i in topic:
        topic_2.append(int(i, 2))

    # Compare all pairs of topics
    for i in range(len(topic_2) - 1):
        for j in range(i + 1, len(topic_2)):
            max_int = topic_2[i] | topic_2[j]  
            max_int_topics.append(bin(max_int))  # Convert to binary string
            max_a = bin(max_int).count('1')  
            if max_a > max_topics:
                max_topics = max_a


    max_team = len([i for i in max_int_topics if i.count('1') == max_topics])

    return (max_topics, max_team)
            
            
        
        

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    first_multiple_input = input().rstrip().split()

    n = int(first_multiple_input[0])

    m = int(first_multiple_input[1])

    topic = []

    for _ in range(n):
        topic_item = input()
        topic.append(topic_item)

    result = acmTeam(topic)

    fptr.write('\n'.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
