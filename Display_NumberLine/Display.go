/*
	Author : Pakshal Jain
	Date : 27/10/2022
	Program : To Accept Number From User and Print NumberLine of Enterd Number
*/

//Required Libraries
package main
import "fmt"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function to Print NumberLine
func NumberLine(No int) {
	var i int = 0;

	//Logic
	fmt.Println("Printing NumberLine of Entered Number");
	for i = -No;i <= No;i++ {
		fmt.Printf("%d\t",i);
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var No int = 0;

	fmt.Println("Jay Ganesh...");
	
	//Taking Input From User
	fmt.Println("Enter One Number");
	fmt.Scanf("%d",&No);

	//Call To NumberLine Function
	NumberLine(No);
}