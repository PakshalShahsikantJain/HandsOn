/*
	Auhtor : Pakshal Jain 
	Date : 19/10/2022
	Program : To Count Frequency of Even Digits in Entered Number
*/

//Required Libraries
package main
import "fmt"

//Function to Cout Frequecy
func Frequency(No int) int {
	var Digit int = 0;
	var icnt int = 0;

	//Logic
	for No != 0 {
		Digit = No % 10;
		if Digit % 2 == 0 {
			icnt++;
		}
		No = No / 10;
	}

	return icnt;
}

//Main Function
func main() {
	var No int = 0;
	var iret int = 0;

	fmt.Println("Jay ganesh....");

	fmt.Println("Enter One Number");
	fmt.Scan(&No);

	//Call To Frequency Function
	iret = Frequency(No);

	//Printing Frequency
	fmt.Printf("Frequency of Even Digits in Entered Number is : %d",iret);
}