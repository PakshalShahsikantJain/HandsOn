/*
    Author : Pakshal Shashikant Jain 
    Date : 08/05/2024
    Program : Write a recursive program which accept number from user and return its
              factorial.
              
              Input : 5
              Output : 120 
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
package main;
import "fmt";

var imult int = 1;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Calculate Factorial of Number
func Factorial(ino int) int {
	if(ino != 0) {
		imult = imult * ino;
		ino--;
		Factorial(ino);
	} 
	
	return imult;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var ino int = 0;
	var iret int = 0;

	fmt.Println("Jay Ganesh....");

	//Taking Input From User
	fmt.Println("Enter One Number : ");
	fmt.Scan(&ino);

	//Call To Factorial Function
	iret = Factorial(ino);
	
	//Printing Factorial of Number Calculated
	fmt.Printf("Factorial of %d  is : %d",ino,iret);
}