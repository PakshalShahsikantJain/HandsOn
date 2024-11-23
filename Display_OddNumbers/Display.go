/*
	Author : Pakshal Jain
	Date : 28/10/2022
	Program : To Accept Number from User and Print Odd Numbers Till That Number
*/

//Required Libraries
package main
import "fmt"

//Function To Print Odd Numbers
func OddNumbers(No int) {
	var i int = 0;

	//Logic
	fmt.Println("Printing Odd Numbers Till Entered Number...");
	for i = 1;i <= No;i++ {
		if i % 2 != 0 {
			fmt.Printf("%d\t",i);
		}
	}
}

//Main Function
func main() {
	var No int = 0;

	fmt.Println("Jay Ganesh...");

	//Takin input From user
	fmt.Println("Enter One Number..");
	fmt.Scanf("%d\t",&No);

	//Call To OddNumbers Function
	OddNumbers(No);
}