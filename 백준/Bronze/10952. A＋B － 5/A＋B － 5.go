package main
 
import "fmt"
 
func main() {
    var a, b int
    for {
        fmt.Scan(&a, &b)
        if a == 0 && b == 0 {
            break
        } else {
            fmt.Println(a + b)
        }
    }
}