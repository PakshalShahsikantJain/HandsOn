/*
	Author : Pakshal Jain
	Date : 27/10/2022
	Program : To accept number from user and print numbers till that number
*/

//Required Libraries
package main
import "fmt"

//Function To Print Required Pattern
func Pattern(No int) {
	var i int = 0;

	if No < 0 {
		No = -No;
	}

	//Logic
	fmt.Println("Printing Numbers Till Entered Number");
	for i = 1;i <= No;i++ {
		fmt.Printf("%d\t",i);
	}
}

//Main Function
func main() {
	var No int = 0;

	fmt.Println("Jay Ganesh....");

	//Taking Input From user
	fmt.Println("Enter One Number");
	fmt.Scanf("%d",&No);

	//Calling Pattern Function
	Pattern(No);
}