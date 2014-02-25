/**
 * Author: Sigifredo Escobar Gómez
 * Email: sigifredo89@gmail.com
 * Date: Sun, 23 Feb 2014 13:45:56 -0500
 * Algorithm: Selection Sort
 */

package main

import "fmt"

func selection(arr []int) {

    for i := 0; i < len(arr)-1; i++ {
        minimum := i;

        for j := i+1; j < len(arr); j++ {
            if arr[j] < arr[minimum] {
                minimum = j;
            }
        }

        if minimum != i {
            arr[i] = arr[i] + arr[minimum];
            arr[minimum] = arr[i] - arr[minimum];
            arr[i] = arr[i] - arr[minimum];
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

    selection(arr)

    for _, v := range arr {
        fmt.Printf("%d ", v)
    }
    fmt.Printf("\n")
}

