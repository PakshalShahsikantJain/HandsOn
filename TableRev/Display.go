/*
	Author : Pakshal Jain
	Date : 25/10/2022
	Program : To Display Table of Entered Number in Reverse Order
*/

//Required Libraries
package main
import "fmt"

//Function To Display Table in Reverse order
func Display(No int,No2 int) {
	var table int = 0;
	var i int = 0;

	fmt.Println("Displaying Table in Reverse order");
	for i = No2;i > 0;i-- {
		table = No * i;
		fmt.Printf("%d\t",table);
	}
}

//Main Function
func main() {
	var No int = 0;
	var No2 int = 0;

	fmt.Println("Jay Ganesh...");

	fmt.Println("Enter One Number To Display Table of");
	fmt.Scan(&No);

	fmt.Println("Enter Number Till You Want Table of Entered Number i.e eg 2 * ?");
	fmt.Scan(&No2);

	Display(No,No2);
}