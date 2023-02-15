/*
	Author : Pakshal Jain
	Date : 19/01/2023
	Program : Accept number from user and display below pattern.

	Input : 5
	Output : 5 # 4 # 3 # 2 # 1 # 
*/

//Required Libraries
package main;
import "fmt";

//Function To Dispaly Given Pattern
func Display(No int) {
	var i int = 0;

	//Logic To Print Given Pattern
	fmt.Println("Printing Given Pattern...");
	for i = No;i > 0;i-- {
		fmt.Printf("%d\t#\t",i);
	}
}

//Main Function
func main() {
	var No int = 0;

	fmt.Println("Jay Ganesh....");

	//Taking Input From User
	fmt.Println("Enter One Number...");
	fmt.Scanf("%d",&No);

	//Call To Display Function
	Display(No);
}