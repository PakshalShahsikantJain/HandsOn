/*
	Author : Pakshal Jain
	Date : 17/12/2022
	Program : To Calculate Even Factorial of Entered Number
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required libraries
package main
import "fmt"

//////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Calculate Even Factorial of Entered Number
func EvenFactorial(No int) int {
	var i int = 0;
	var fact int = 1;

	//Handeling Condition if Entered Number is Negative
	if No < 0 {
		No = -No;
	}

	//Logic To Calculate Even Factorial of Entered number
	for i = No;i > 0;i-- {
		if i % 2 == 0 {
			fact = fact * i;
		}
	}

	return fact;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var No int = 0;
	var iret int = 0;

	fmt.Println("Jay ganesh..");
	
	//Taking Input From User
	fmt.Println("Enter One Number To Calculate Even Factorial of...");
	fmt.Scan(&No);

	//Call To Evenfactorial Function
	iret = EvenFactorial(No);

	//Printing Obtained Output 
	fmt.Println("Even Factorial of Entered Number is :",iret);
}