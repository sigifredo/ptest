#!/usr/bin/env python

def bubble(arr):
    n = len(arr)
    for i in range(n):
        for j in range(n-1):
            if arr[j] > arr[j+1]:
                arr[j] = arr[j] + arr[j+1];
                arr[j+1] = arr[j] - arr[j+1];
                arr[j] = arr[j] - arr[j+1];


n = int(raw_input(""))

arr = range(n)

for i in range(n):
    arr[i] = int(raw_input(""))

bubble(arr)

for i in arr:
    print i,
