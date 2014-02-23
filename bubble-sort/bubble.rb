#!/usr/bin/ruby
# Author: Sigifredo Escobar Gómez
# Email: sigifredo89@gmail.com
# Date: Sun, 23 Feb 2014 12:22:50 -0500
# Algorithm: Bubble Sort

def bubble(arr)
    for i in 0...arr.length
        for j in 0...arr.length-1
            if (arr[j] > arr[j+1])
                arr[j] = arr[j] + arr[j+1]
                arr[j+1] = arr[j] - arr[j+1]
                arr[j] = arr[j] - arr[j+1]
            end
        end
    end
end

arr = Array.new(Integer(gets), 0)

for i in 0...arr.length
    arr[i] = Integer(gets)
end

bubble(arr)

for i in arr
    puts i
end

