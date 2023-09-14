package main

import (
	"fmt"
)

func main() {
	// Khai báo nhiều biến trên cùng 1 dòng
	var x, y, z = 5, 10, 15
	fmt.Println(x, y, z)

	// var tenBien loaiBien = giaTriCuaBien
	var firstName string = "Tran Thanh"
	var lastName = "Luong"

	fmt.Println(firstName)
	fmt.Println(lastName)

	// Khai báo biến không có giá trị ban đầu
	var address string
	// Gán giá trị cho biến
	address = "123 Ha Huy Giap"

	fmt.Println(address)

	// Khai báo biến, loại biến được suy ra từ giá trị của nó (trình biên dịch phát hiện)
	var carName = "BMW"
	fmt.Println(carName)
	schoolName := "IUH"
	age := 19
	fmt.Println(age, schoolName)

	/*
		*var*
		1. Có thể được sử dụng bên trong và bên ngoài hàm (func)
		2. Việc khai báo biến và gán giá trị có thể được thực hiện riêng biệt

		*:=*
		1. Chỉ có thể được sử dụng bên trong các chức năng
		2. Việc khai báo biến và gán giá trị không thể thực hiện riêng biệt (phải thực hiện trên cùng 1 dòng)
	*/
}
