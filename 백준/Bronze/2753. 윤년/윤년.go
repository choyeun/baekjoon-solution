package main
import "fmt"

func main(){
    var a int
    fmt.Scan(&a)
    var sa, bak, sabak, yoon bool
    sa = false
    bak = false
    sabak = false
    yoon = false
    if a % 4 == 0 {
        sa = true
    }
    if a % 100 == 0 {
        bak = true
    }
    if a % 400 == 0 {
        sabak = true
    }
    if sa && !bak {
        yoon = true
    }
    if bak && !sabak {
        yoon = false
    }
    if sabak {
        yoon = true
    }
    if yoon {
        fmt.Println("1")
    } else {
        fmt.Println("0")
    }
}