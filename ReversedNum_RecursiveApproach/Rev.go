/*
    Author : Pakshal Shashikant Jain 
    Date : 14/5/2024
    Program :  Write a recursive program which accept number from user and return its
               reverse number.

               Input : 523
               Output : 325  
*/

/////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
package main;
import "fmt";

var rno int = 0;   //Global Variable 

/////////////////////////////////////////////////////////////////////////////////////////

//Function To Reverse Entered Number
func Reverse(ino int) int {
	var Digit int = 0;

	if(ino != 0) {
		Digit = ino % 10;
		rno = (rno * 10) + Digit;
		ino = ino / 10;

		//Recursive Call To Reverse Function
		Reverse(ino);
	}

	return rno;
}

///////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var ino int = 0;
	var iret int = 0;

	fmt.Println("Jay Ganesh....");
	
	//Taking Input From User
	fmt.Println("Enter One Number : ");
	fmt.Scan(&ino);

	//Call To Reverse Function
	iret = Reverse(ino);
	
	//Printing Reversed Number
	fmt.Printf("Reversed Number of Number %d is : %d",ino,iret);
}