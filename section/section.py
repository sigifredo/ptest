#!/usr/bin/env python
# -*- coding: utf-8 -*-
# Author: Sigifredo Escobar Gómez
# Email: sigifredo89@gmail.com
# Date: Sun, 23 Feb 2014 13:52:44 -0500
# Algorithm: Section Sort


def section(arr):

    for i in range(len(arr)-1):
        minimum = i;

        for j in range(i+1, n):
            if (arr[j] < arr[minimum]):
                minimum = j;

        if (minimum != i):
            arr[i] = arr[i] + arr[minimum];
            arr[minimum] = arr[i] - arr[minimum];
            arr[i] = arr[i] - arr[minimum];

if __name__ == '__main__':
    n = int(raw_input(""))

    arr = range(n)

    for i in range(n):
        arr[i] = int(raw_input(""))

    section(arr)

    for i in arr:
        print i,
