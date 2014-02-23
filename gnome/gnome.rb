#!/usr/bin/ruby
# Author: Sigifredo Escobar Gómez
# Email: sigifredo89@gmail.com
# Date: Sun, 23 Feb 2014 17:07:17 -0500
# Algorithm: Gnome Sort


def gnome(arr)
    i = 1

    while (i <= (arr.length-1))
        if (arr[i-1] <= arr[i])
            i = i+1
        else
            arr[i] = arr[i] + arr[i-1]
            arr[i-1] = arr[i] - arr[i-1]
            arr[i] = arr[i] - arr[i-1]

            if (i > 1)
                i = i-1
            end
        end
    end
end

arr = Array.new(Integer(gets), 0)

for i in 0...arr.length
    arr[i] = Integer(gets)
end

gnome(arr)

for i in arr
    puts i
end
