/**
 * Author: Sigifredo Escobar Gómez
 * Email: sigifredo89@gmail.com
 * Date: Sun, 23 Feb 2014 16:57:53 -0500
 * Algorithm: Gnome Sort
 */

package main

import "fmt"

func gnome(arr []int) {
    i := 1

    for i <= (len(arr)-1) {
        if (arr[i-1] <= arr[i]) {
            i++
        } else {
            arr[i] = arr[i] + arr[i-1]
            arr[i-1] = arr[i] - arr[i-1]
            arr[i] = arr[i] - arr[i-1]

            if (i > 1) {
                i--
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

    gnome(arr)

    for _, v := range arr {
        fmt.Printf("%d ", v)
    }
    fmt.Printf("\n")
}
