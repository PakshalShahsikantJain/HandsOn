/*
	Auhtor : Pakshal Jain
	Date : 20/10/2022
	Program : To Calculate Multiplication of Digits of Entered Number
*/

//Required Libraries
package main
import "fmt"

//Function To Calculate Multiplication of Digits
func Multiplication(No int) int {
	var Digit int = 0;
	var Mult int = 1;

	//Logic To Calculate Multiplication of Digits
	for No != 0 {
		Digit = No % 10;
		if Digit == 0 {
			Digit = 1;
		}
		Mult = Mult * Digit;
		No = No / 10;
	}

	return Mult;
}

//Main Function
func main() {
	var No int = 0;
	var iret int = 0;

	fmt.Println("Jay Ganesh...");

	fmt.Println("Enter One Number");
	fmt.Scanf("%d",&No);

	//Call To Main Function
	iret = Multiplication(No);

	//Printing Multiplication of Digits
	fmt.Println("Multiplication of Digits of Entered Number is : ",iret);
}