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

var imax int = 0;         //Global Variable
 
//Function To Calculate Largest Digit
func Max(ino int) int {
	var Digit int = 0;

	//Logic To Find
	Digit = ino % 10;
	if(imax < Digit) {
		imax = Digit;
	}
	ino = ino / 10;

	if(ino != 0) {
		//Recursive Function Call To Max Function
		Max(ino);
	} 

	return imax;
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

	//Call To Max Function
	iret = Max(ino);
	
	//Printing Largest Digit
	fmt.Printf("Largest Digit in Entered Number %d is : %d",ino,iret);
}