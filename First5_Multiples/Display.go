/*
	Author : Pakshal Jain
	Date : 28/10/2022
	Program : To Calculate First Five Multiples of Entered Number
*/

//Required Libraries
package main
import "fmt"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Calculate Multiples of Entered Number
func Multiples(No int) {
	var i int = 0;
	var Mult int = 0;

	//Logic
	fmt.Println("Printing First Five Multiples of Entered Number");
	for i = 1;i <= 5;i++ {
		Mult = No * i;
		fmt.Printf("%d\t",Mult);
	}
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var No int = 0;
	
	fmt.Println("Jay Ganesh...");

	//Taking Input From User
	fmt.Println("Enter One Number..");
	fmt.Scanf("%d",&No);

	//Call To Mutiple Function
	Multiples(No);
}