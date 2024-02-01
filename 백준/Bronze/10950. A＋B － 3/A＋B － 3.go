package main

import "fmt"

func main() {
    var a int
    fmt.Scan(&a)

    for i := 0; i < a; i++ {
        var b, c int
        fmt.Scan(&b, &c)
        fmt.Println(b + c)
    }
}
