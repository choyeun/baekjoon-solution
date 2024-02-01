package main
import "fmt"
import "math"

func main(){
    var a, b int
    fmt.Scan(&a, &b)
    s :=int(math.Abs(float64(b - a)))

    fmt.Println(s)
    
}