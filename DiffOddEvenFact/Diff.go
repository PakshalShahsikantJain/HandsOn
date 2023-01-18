/*
	Author : Pakshal Jain
	Date : 17/01/2023
	Program : To Calculate Difference Between Even and Odd Factorial of Entered Number
*/

//Required Libraies
package main
import "fmt"

//////////////////////////////////////////////////////////////////////////////////////////////

//Function To Calculate Difference
func Difference(No int) int {
	var i int = 0;
	var EvenFact int = 1;
	var OddFact int = 1;
	var Diff int = 0;

	if No < 0 {
		No = -No;
	}

	//Logic To Calcualate Difference
	for i = No;i > 0;i-- {
		if i % 2 != 0 {
			OddFact = OddFact * i;
		} else {
			EvenFact = EvenFact * i;
		}
	}

	//Calculating Difference
	Diff = EvenFact - OddFact;

	return Diff
}

///////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var No int = 0;
	var iret int = 0;

	fmt.Println("Jay Ganesh...");

	//Taking Input From User
	fmt.Println("Enter Number You Want : ");
	fmt.Scanf("%d",&No);

	//Call To Differnec Function
	iret = Difference(No);

	//Printing Obtained Function
	fmt.Println("Differnce Between Even and Odd Factorial of Entered Number is : ",iret);
}