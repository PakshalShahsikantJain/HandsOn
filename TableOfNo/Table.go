/*
	Author : Pakshal Jain
	Date : 24/10/2022
	Program : To Display Table of Entered Number
*/

//Required Libraries
package main
import "fmt"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Display table
func Table(No int,No2 int) {
	var i int = 0;
	var table int = 0;

	//Displaying Table of Entered Number
	fmt.Println("Printing Table of Entered Number....");
	for i = 1;i <= No2;i++ {
		table = No * i;
		fmt.Printf("%d\t",table);
	}
} 

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var No int = 0;
	var No2 int = 0;

	fmt.Println("Jay Ganesh....");
	
	//Taking Input From User
	fmt.Println("Enter One Number to Display Table of....");
	fmt.Scan(&No);

	fmt.Println("Enter Number Till You Want To Display Table i.e eg 2 * ? ");
	fmt.Scan(&No2);
	
	//Call to Table Function
	Table(No,No2);
}