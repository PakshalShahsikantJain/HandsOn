/*
    Author : Pakshal Shashikant Jain 
    Date : 5/5/2024
    Program : Write a recursive program which accept number from user and display below
              pattern.

              Input : 5
              Output : 5 * 4 * 3 * 2 * 1 * 
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
package main;
import "fmt"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Display Given Pattern
func Display(ino int) {
	if(ino < 1) {
		return;
	} else {
		fmt.Printf("%d\t*\t",ino);
		ino--;

		//Recursive Function Call
		Display(ino);
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var ino int = 0;

	fmt.Println("Jay Ganesh....");

	fmt.Println("Enter One Number : ");
	fmt.Scan(&ino);

	fmt.Println("Output : ");

	//Call To Display Function
	Display(ino);
}