/*
    Author : Pakshal Shashikant Jain 
    Date : 11/5/2024
    Program : Write a recursive program which accept number from user and return
              largest digit

              Input : 87983
              Output : 9   
*/

//Required Libraries
package main
import "fmt"

var imin int = 0;         //Global Variable

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Calculate Smallest Digit
func Min(ino int) int {
	var Digit int = 0;

	if(imin == 0) {
		imin = ino % 10;
		ino = ino / 10;
	}

	//Logic To Find
	Digit = ino % 10;
	if(Digit == 0) {
		imin = 0;
		return imin;
	} else if(Digit < imin) {
		imin = Digit;
	}
	ino = ino / 10;

	if(ino != 0) {
		//Recursive Function Call To Min Function
		Min(ino);
	} 

	return imin;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var ino int = 0;
	var iret int = 0;

	fmt.Println("Jay Ganesh....");

	//Taking Input From User
	fmt.Println("Enter One Number : ");
	fmt.Scan(&ino);

	//Call To Min Function
	iret = Min(ino);
	
	//Printing Smallest Digit
	fmt.Printf("Smallest Digit in Entered Number %d is : %d",ino,iret);
}