/*
	Author : Pakshal Jain 
	Date : 14/01/2023
	Program : To Calculate OddFactorial of Entered Number
*/

//Required Libraries
package main
import "fmt"

//Function To Calculate OddFactorial of Entered Number
func OddFactorial(No int) int {
	var fact int = 1;
	var i int = 0;

	//Logic
	for i = No;i > 0;i-- {
		if (i % 2 != 0) {
			fact = fact * i;
		}
	} 

	return fact;
}

//////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var No int = 0;
	var iret int = 0;

	fmt.Println("Jay Ganesh....");

	//Taking Input From User
	fmt.Println("Enter Number You Want Factorial of :");
	fmt.Scanf("%d",&No);

	//Call To OddFactorial Function
	iret = OddFactorial(No);

	//Printing Result Obtained
	fmt.Println("OddFactorial of Entered Number is :",iret);
}	
