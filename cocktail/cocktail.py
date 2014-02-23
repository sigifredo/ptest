#!/usr/bin/env python
# -*- coding: utf-8 -*-
# Author: Sigifredo Escobar Gómez
# Email: sigifredo89@gmail.com
# Date: Sun, 23 Feb 2014 12:12:32 -0500
# Algorithm: Cocktail Sort

def cocktail(arr):
    swap = True;

    left = 1;
    right = len(arr)-1;

    while swap:
        swap = False;
        for i in range(left, right):
            if (arr[-i-1] > arr[-i]):
                arr[-i] = arr[-i] + arr[-i-1];
                arr[-i-1] = arr[-i] - arr[-i-1];
                arr[-i] = arr[-i] - arr[-i-1];

                swap = True;

        for i in range(left, right):
            if (arr[i-1] > arr[i]):
                arr[i] = arr[i] + arr[i-1];
                arr[i-1] = arr[i] - arr[i-1];
                arr[i] = arr[i] - arr[i-1];

                swap = True;

if __name__ == '__main__':
    n = int(raw_input(""))

    arr = range(n)

    for i in range(n):
        arr[i] = int(raw_input(""))

    cocktail(arr)

    for i in arr:
        print i,
