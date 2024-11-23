/*
    Author : Pakshal Shashikant Jain 
    Date : 9/5/2024
    Program : Write a recursive program which accept number from user and return its
              product of digits.

              Input : 523
              Output : 30 
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
package main;
import "fmt";

var imult int = 1;

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Calculate Products of Digits
func Mult(ino int) int {
	var Digits int = 0;

	Digits = ino % 10;
	imult = imult * Digits;
	ino = ino / 10;

	if(ino != 0) {
		Mult(ino);
	}

	return imult;
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

	//Call To Mult Function
	iret = Mult(ino);

	//Printing Products Calculated
	fmt.Println("Products of Digits is :",iret);
}