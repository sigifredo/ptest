#!/usr/bin/ruby
# Author: Sigifredo Escobar Gómez
# Email: sigifredo89@gmail.com
# Date: Sun, 23 Feb 2014 16:10:30 -0500
# Algorithm: Insertion Sort

def insertion(arr)

    for i in 1...arr.length
        if (arr[i-1] > arr[i])
            tmp = arr[i]
            j = i - 1
            while (j >= 0 && arr[j] > tmp)
                arr[j+1] = arr[j]
                j = j-1
            end
            arr[j+1] = tmp
        end
    end

end

arr = Array.new(Integer(gets), 0)

for i in 0...arr.length
    arr[i] = Integer(gets)
end

insertion(arr)

for i in arr
    puts i
end
