/*
    Author : Pakshal Shashikant Jain 
    Date : 28/04/2024
    Program : Write a recursive program which display below pattern.
              Output : * * * * *
*/

///////////////////////////////////////////////////////////////////////////////

//Required Libraries
package main;
import "fmt"

//////////////////////////////////////////////////////////////////////////

//Function To Display Pattern
func Pattern(ino int) {
	if(ino == 0) {
		return;
	} else {
		fmt.Printf("*\t");
		ino--;

		//Recursive Function Call
		Pattern(ino);
	}
}

/////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var ino int = 0;

	fmt.Println("Jay Ganesh....");

	//Taking Input from User
	fmt.Println("Enter One Number to Print that number of '*' on Screen");
	fmt.Scan(&ino);

	//Call To Pattern Function
	Pattern(ino);
}