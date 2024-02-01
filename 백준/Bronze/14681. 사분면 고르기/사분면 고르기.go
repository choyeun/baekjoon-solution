package main 
import "fmt"

func main() {
    var x int
    var y int
    var xx bool
    var yy bool
    xx = false
    yy = false
    fmt.Scan(&x, &y)
    if x > 0{
        xx = true
    } 
    if y > 0 {
        yy = true
    }
    if xx && yy {
        fmt.Println("1")
    }
    if !xx && yy {
        fmt.Println("2")
    }
    if !xx && !yy {
        fmt.Println("3")
    }
    if xx && !yy {
        fmt.Println("4")
    }
    
    
}