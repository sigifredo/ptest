#!/usr/bin/env python
# -*- coding: utf-8 -*-
# Author: Sigifredo Escobar Gómez
# Email: sigifredo89@gmail.com
# Date: Sun, 23 Feb 2014 17:03:26 -0500
# Algorithm: Gnome Sort

def gnome(arr):
    i = 1

    while (i <= (len(arr)-1)):
        if (arr[i-1] <= arr[i]):
            i = i+1
        else:
            arr[i] = arr[i] + arr[i-1]
            arr[i-1] = arr[i] - arr[i-1]
            arr[i] = arr[i] - arr[i-1]

            if (i > 1):
                i = i-1


if __name__ == '__main__':
    n = int(raw_input(""))

    arr = range(n)

    for i in range(n):
        arr[i] = int(raw_input(""))

    gnome(arr)

    for i in arr:
        print i,
