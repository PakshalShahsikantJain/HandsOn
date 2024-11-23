/*
    Author : Pakshal Shashikant Jain
    Date : 30/04/2024
    Program : Write a recursive program which display below pattern.
              Output : 5 4 3 2 1
*/

/////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
package main;
import "fmt"

////////////////////////////////////////////////////////////////////////////////////

//Function To Display Given pattern
func Display(ino int) {
	if(ino < 1) {
		return;
	} else {
		fmt.Printf("%d\t",ino);
		ino--;

		//Recusive Function Call
		Display(ino);
	}
}

/////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var ino int = 0;

	fmt.Println("Jay Ganesh....");
	
	//Taking Input From User
	fmt.Println("Enter Any One Number You Want : ");
	fmt.Scan(&ino);

	fmt.Println("Output : ");
	//Call To Display Function
	Display(ino);
}