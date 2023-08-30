package main

import (
	"fmt"
)

func main() {
	// var tenBien loaiBien = giaTriCuaBien
	var firstName string = "Tran Thanh"
	var lastName = "Luong"

	fmt.Println(firstName)
	fmt.Println(lastName)

	// Khai báo biến không có giá trị ban đầu
	var address string
	address = "123 Ha Huy Giap"

	fmt.Println(address)

	// Khai báo biến, loại biến được suy ra từ giá trị của nó (trình biên dịch phát hiện)
	var carName = "BMW"
	fmt.Println(carName)
	schoolName := "IUH"
	age := 19
	fmt.Println(age, schoolName)
}