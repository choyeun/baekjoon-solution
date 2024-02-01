package main

import (
	"bufio"
	"fmt"
	"os"
)

func factorial(n int) int {
	if n == 0 {
		return 1
	}
	return n * factorial(n-1)
}

func main() {
	var n int

	// use bufio for fast scan
	reader := bufio.NewReader(os.Stdin)
	writer := bufio.NewWriter(os.Stdout)
	defer writer.Flush()
	fmt.Fscanln(reader, &n)

	result := factorial(n)
	fmt.Fprintln(writer, result)
	
}
