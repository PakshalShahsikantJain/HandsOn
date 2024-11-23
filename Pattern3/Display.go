/*
	Author : Pakshal Jain
	Date : 27/10/2022
	Program : To Accept Number From User and Print That Number of $ and * on Screen
*/

//Required Libraries
package main
import "fmt";

//Function To Print Pattern
func Pattern(No int) {
	var i int = 0;

	//Logic
	for i = 0;i < No;i++ {
		fmt.Print("$\t*\t");
	}
}

//Main Function
func main() {
	var No int = 0;

	fmt.Println("Jay Ganesh...");
	
	//Taking Input From User
	fmt.Println("Enter One Number");
	fmt.Scanf("%d",&No);

	//Call To Pattern Function
	Pattern(No);
}