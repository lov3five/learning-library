package main

import (
	"fmt"
	"os"
	"os/exec"
)

func clearTerminal() {
	cmd := exec.Command("clear")
	cmd.Stdout = os.Stdout
	cmd.Run()
}

func main() {
	// Clear terminal
	clearTerminal()

	for {
		fmt.Println("+++++++++++++++++++++++++ MENU +++++++++++++++++++++++++")
		fmt.Println("1. Check Prime")
		fmt.Println("0. Exit")
		fmt.Print("Enter your choice: ")

		var choice int
		_, err := fmt.Scan(&choice)
		if err != nil {
			fmt.Println("Invalid input. Please enter a number.")
			continue
		}

		switch choice {
		case 1:
			fmt.Print("Enter a number: ")
			var n int
			fmt.Scanln(&n)
	}
}
