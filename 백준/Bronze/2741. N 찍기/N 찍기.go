package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	var a int

	reader := bufio.NewReader(os.Stdin)
	writer := bufio.NewWriter(os.Stdout)
	defer writer.Flush()
	fmt.Fscanln(reader, &a)

	for i := 0; i < a; i++ {
		fmt.Fprintln(writer, i+1)
	}
}
