package main

import (
	"fmt"
)

func main() {
	// go lang binary bits
	a := 10             // 1010
	b := 3              // 0011
	fmt.Println(a & b)  // 0010
	fmt.Println(a | b)  // 1011
	fmt.Println(a ^ b)  // 1001
	fmt.Println(a &^ b) // 0100

	fmt.Println("	Bit Shifting	")
	fmt.Println("==============================")
	c := 8              // 2^3
	fmt.Println(c << 3) // 2^3 * 2^3 = 2^6
	fmt.Println(c >> 3) // 2^3 / 2^3 = 2^0

	fmt.Println("	Complex Number	")
	fmt.Println("==============================")
	var n complex64 = 1 + 2i
	fmt.Printf("%v, %T\n", n, n)

}
