/*
	Auhtor : Pakshal Jain
	Date : 20/10/2022
	Program : To Calculate Difference Between Summation Of Even and Odd Digits
*/

//Required Libraries
package main
import "fmt"

//Function To Calculate Difference
func Diff(No int) int {
	var Diff int = 0;
	var Digits int = 0;
	var Sum int = 0;
	var Sum2 int = 0;

	//Logic
	for No != 0 {
		Digits = No % 10;
		if Digits % 2 == 0 {
			Sum = Sum + Digits;
		}else if Digits % 2 != 0 {
			Sum2 = Sum2 + Digits;
		}
		No = No / 10;
	}

	Diff = Sum - Sum2;

	return Diff;
}

//Main Function
func main() {
	var No int = 0;
	var iret int = 0;

	fmt.Println("Jay Ganesh...");
	
	fmt.Println("Enter One Number");
	fmt.Scanf("%d",&No);

	//Call To Difference Function
	iret = Diff(No);

	//Printing Difference Calculated
	fmt.Println("Difference Between Summation of Even and Odd Digits is : ",iret);
}