/*
	Author : Pakshal Jain
	Date : 23/10/2022
	Program : To Calculate Factorial of Entered Number
*/

//Required Libraries
package main
import "fmt"

/////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Calculate Factorial of Entered Number
func Factorial(No  int) int {
	var fact int = 1;
	var i int = 0;

	//Handeling Condition if Entered Number is Negative
	if No < 0 {
		No = -No;
	}

	//Logic
	for i = No ;i > 0;i-- {
		fact = fact * i;
	}

	return fact;
}

///////////////////////////////////////////////////////////////////////////////////////////////

func main() {
	var No int = 0;
	var iret int = 0;

	fmt.Println("Jay Ganesh...");
	
	//Taking Input From user
	fmt.Println("Enter One Number");
	fmt.Scanf("%d",&No);

	//Call To Factorial Function
	iret = Factorial(No);

	fmt.Println("Factorial of Entered Number is :",iret);
}