#!/usr/bin/ruby
# Author: Sigifredo Escobar Gómez
# Email: sigifredo89@gmail.com
# Date: Sun, 23 Feb 2014 13:52:44 -0500
# Algorithm: Section Sort


def section(arr)

    for i in 0...arr.length-1
        minimum = i;

        for j in i+1...arr.length
            if arr[j] < arr[minimum]
                minimum = j;
            end
        end

        if minimum != i
            arr[i] = arr[i] + arr[minimum];
            arr[minimum] = arr[i] - arr[minimum];
            arr[i] = arr[i] - arr[minimum];
        end
    end

end

arr = Array.new(Integer(gets), 0)

for i in 0...arr.length
    arr[i] = Integer(gets)
end

section(arr)

for i in arr
    puts i
end

