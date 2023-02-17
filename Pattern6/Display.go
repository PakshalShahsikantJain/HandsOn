/*
	Author : Pakshal Jain 
	Date : 16/02/2023
	Program : To Print Below Pattern

	Input : 5
	Output : 1 * 2 * 3 * 4 * 5 * 
*/

//Required Libraries
package main
import "fmt"

/////////////////////////////////////////////////////////////////////////////

//Function To Print Given Pattern
func Pattern(No int) {
	var i int = 0;

	//Logic To Print Pattern
	for i = 1;i <= No;i++ {
		fmt.Printf("%d\t*\t",i);
	} 
}

/////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var No int = 0;

	fmt.Println("Jay Ganesh...");

	//Taking Input From User
	fmt.Println("Enter Number Till You Want To Print");
	fmt.Scanf("%d",&No);

	//Call To Pattern Function
	Pattern(No);
}