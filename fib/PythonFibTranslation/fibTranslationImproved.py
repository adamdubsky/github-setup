"""
@file fibTranslationImproved.py
@author Camden Houston
@brief This file contains an improved implementation of the recursive fib translation. The included example is flawed in that it accepts values for n<2, which will result in infinate recursion. This is dangerous and must be fixed. It is intended to be used with the included main file.
"""

def recursiveFibImroved(n):
    if n<2:
        print("n must be greater than 2")
        return
    if n==1 or n==2:
        return 1
    return recursiveFibImroved(n-1)+recursiveFibImroved(n-2)


