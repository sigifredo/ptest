#!/usr/bin/ruby

def bubble(arr)
    for i in 0...arr.length
        for j in 0...arr.length-1
            if (arr[j] > arr[j+1])
                arr[j] = arr[j] + arr[j+1];
                arr[j+1] = arr[j] - arr[j+1];
                arr[j] = arr[j] - arr[j+1];
            end
        end
    end
end

n = Integer(gets)

arr = Array.new(n, 0)

for i in 0...n
    arr[i] = Integer(gets)
end

bubble(arr)

for i in arr
    puts i
end

