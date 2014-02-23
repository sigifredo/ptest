#!/usr/bin/ruby
# Author: Sigifredo Escobar Gómez
# Email: sigifredo89@gmail.com
# Date: Sun, 23 Feb 2014 12:21:51 -0500
# Algorithm: Cocktail Sort

def cocktail(arr)
    swap = false

    left = 1
    right = arr.length-1

    begin
        swap = false
        for i in left...right
            if (arr[-i-1] > arr[-i])
                arr[-i] = arr[-i] + arr[-i-1]
                arr[-i-1] = arr[-i] - arr[-i-1]
                arr[-i] = arr[-i] - arr[-i-1]

                swap = true
            end
        end

        for i in left...right
            if (arr[i-1] > arr[i])
                arr[i] = arr[i] + arr[i-1]
                arr[i-1] = arr[i] - arr[i-1]
                arr[i] = arr[i] - arr[i-1]

                swap = true
            end
        end

    end while swap
end

arr = Array.new(Integer(gets), 0)

for i in 0...arr.length
    arr[i] = Integer(gets)
end

cocktail(arr)

for i in arr
    puts i
end

