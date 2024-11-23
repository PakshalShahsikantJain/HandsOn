/*
	Author : Pakshal Jain
	Date : 06/11/2022
	Program : To Print Even Number in Entered Range
*/

//Required Libraries
package main
import "fmt"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Print Even Number in Entered Range
func Range(No int,No2 int) {
	var i int = 0;

	//Logic To Print Even Number in Range
	fmt.Println("Printing Even Number in Entered Range : ");
	for i = No;i <= No2;i++ {
		if i % 2 == 0 {
			fmt.Printf("%d\t",i);
		}
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var No int = 0;
	var No2 int = 0;

	fmt.Println("Jay Ganesh....");

	fmt.Println("Enter Starting Number...");
	fmt.Scan(&No);

	fmt.Println("Enter Ending Number...");
	fmt.Scan(&No2);

	//Call To Range Function
	Range(No,No2);
}