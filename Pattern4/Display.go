/*
	Author : Pakshal Jain
	Date : 18/01/2023
	Program : Accept number from user and display below pattern.
	
	Input : 5
	Output : A B C D E
*/

//Required Libraries
package main
import "fmt"

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Print Given Pattern
func Pattern(No int) {
	var i int = 0;
	var Sum int = 0;

	//Logic To Print Pattern
	fmt.Println("Printing Below Pattern : ");
	for i = 0;i < No;i++ {
		Sum = i + 65;
		fmt.Printf("%c\t",Sum)
	}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var No int = 0;

	fmt.Println("Jay Ganesh....");

	//Taking Input From User
	fmt.Println("Enter Number Till You Want To Print Pattern");
	fmt.Scanf("%d",&No);

	//Call To Pattern Function
	Pattern(No);
}