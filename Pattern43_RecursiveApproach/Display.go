/*
    Author : Pakshal Shashikant Jain
    Date : 29/04/2024
    Program : Write a recursive program which display below pattern.
              Output : 1 2 3 4 5
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
package main;
import "fmt"

var i int = 1;  //Global Variable

//Function To Display Given Pattern 
func Display(ino int) {
	if(i > ino) {
		return;
	} else {
		fmt.Printf("%d\t",i);
		i++;

		//Recursive Function Call
		Display(ino);
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var ino int = 0;

	fmt.Println("Jay Ganesh.....");

	//Taking Input from user
	fmt.Println("Enter One Number You Want : ");
	fmt.Scan(&ino);

	fmt.Println("Output : ");

	//Call To Display Function
	Display(ino);
}