/**
 * Author: Sigifredo Escobar Gómez
 * Email: sigifredo89@gmail.com
 * Date: Sun, 23 Feb 2014 16:01:24 -0500
 * Algorithm: Insertion Sort
 */

package main

import "fmt"

func insertion(arr []int) {

    for i := 1; i < len(arr); i++ {
        if arr[i-1] > arr[i] {
            tmp := arr[i]
            j := i - 1
            for j >= 0 && arr[j] > tmp {
                arr[j+1] = arr[j]
                j--
            }
            arr[j+1] = tmp
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

    insertion(arr)

    for _, v := range arr {
        fmt.Printf("%d ", v)
    }
    fmt.Printf("\n")
}
