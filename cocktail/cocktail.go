/**
 * Author: Sigifredo Escobar Gómez
 * Email: sigifredo89@gmail.com
 * Date: Sun, 23 Feb 2014 12:11:00 -0500
 * Algorithm: Cocktail Sort
 */


package main

import "fmt"

func cocktail(arr []int) {
    swap := true

    left := 1
    right := len(arr)-1

    for swap {
        swap = false

        for i := right; i > left; i-- {
            if arr[i-1] > arr[i] {
                arr[i] = arr[i] + arr[i-1]
                arr[i-1] = arr[i] - arr[i-1]
                arr[i] = arr[i] - arr[i-1]

                swap = true
            }
        }

        for i := left; i < right; i++ {
            if arr[i-1] > arr[i] {
                arr[i] = arr[i] + arr[i-1]
                arr[i-1] = arr[i] - arr[i-1]
                arr[i] = arr[i] - arr[i-1]

                swap = true
            }
        }
    }
}

func main() {
    var n int
    var arr []int

    fmt.Scanf("%d", &n)
    arr = make([]int, n)

    for i, _ := range arr {
        fmt.Scanf("%d", &arr[i])
    }

    cocktail(arr)

    for _, v := range arr {
        fmt.Printf("%d ", v)
    }
    fmt.Printf("\n")
}
