/*
    Author : Pakshal Shashikant Jain 
    Date : 5/5/2024
    Program : Write a recursive program which accept number from user and return
              summation of its digits.
              Input : 879
              Output : 24 
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
package main;
import "fmt";

var isum int = 0;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Calculate Summation of Digits
func SumDigits(ino int) int {
	var Digits int = 0;

	Digits = ino % 10;
	isum = isum + Digits;
	ino = ino / 10;

	if(ino != 0) {
		SumDigits(ino);
	}

	return isum;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var ino int = 0;
	var iret int = 0;

	fmt.Println("Jay Ganesh......");
	
	//Taking Input From User
	fmt.Println("Enter One Number : ");
	fmt.Scan(&ino);

	//Call To SumDigits Function
	iret = SumDigits(ino);

	//Printing Summation Calculated
	fmt.Println("Summation of Digits is :",iret);
}