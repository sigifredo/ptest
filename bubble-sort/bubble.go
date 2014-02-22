package main

import "fmt"

func bubble(arr []int) {
    for i := 0; i < len(arr); i++ {
        for j := 0; j < len(arr)-1; j++ {
            if arr[j] > arr[j+1] {
                arr[j] = arr[j] + arr[j+1]
                arr[j+1] = arr[j] - arr[j+1]
                arr[j] = arr[j] - arr[j+1]
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

    bubble(arr)

    for _, v := range arr {
        fmt.Printf("%d ", v)
    }
    fmt.Printf("\n")
}
