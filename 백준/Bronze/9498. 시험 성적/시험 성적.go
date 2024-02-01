package main 
import "fmt"
func main () {
    var a int
    var b bool
    b = false
    fmt.Scan(&a)
    if (a >= 90) {
        b = true
        fmt.Println("A")
    } else if (a >= 80)  {
        b = true
        fmt.Println("B")
    } else if (a >= 70) {
        b = true
        fmt.Println("C")
    } else if (a >= 60)  {
        b= true
        fmt.Println("D")
    } else if (!b){ 
     fmt.Println("F")
    }
}