package prime

import "fmt"

func IsPrime(n int) bool {
	if n <= 1 {
		return false
	}
	for i := 2; i < n; i++ {
		if n%i == 0 {
			return false
		}
	}
	return true
}

func CheckPrime(n int) string {
	if IsPrime(n) {
		return fmt.Sprintf("Number %d is Prime", n)
	}
	return fmt.Sprintf("Number %d is not Prime", n)
}
