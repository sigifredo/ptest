#!/usr/bin/env python
# -*- coding: utf-8 -*-
# Author: Sigifredo Escobar Gómez
# Email: sigifredo89@gmail.com
# Date: Sun, 23 Feb 2014 16:05:08 -0500
# Algorithm: Insertion Sort


def insertion(arr):

    for i in range(1, n):
        if (arr[i-1] > arr[i]):
            tmp = arr[i];
            j = i - 1;

            while (j >= 0 and arr[j] > tmp):
                arr[j+1] = arr[j];
                j = j-1;

            arr[j+1] = tmp;


if __name__ == '__main__':
    n = int(raw_input(""))

    arr = range(n)

    for i in range(n):
        arr[i] = int(raw_input(""))

    insertion(arr)

    for i in arr:
        print i,
