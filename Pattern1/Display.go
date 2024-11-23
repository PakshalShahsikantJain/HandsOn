/*
	Author : Pakshal Jain
	Date : 14/09/2022
	Program : To Print * Entered Number of Times
*/

//Reuired Packages/Imports
package main;
import "fmt";

//Function To Print *
func Pattern(No int) {
	var i int = 0;

	fmt.Printf("Printing * %d Times : \n",No);
	for i = 0;i < No;i++ {
		fmt.Printf("*\t");
	}
}

//Main Function
func main() {
	var no int = 0;

	fmt.Println("Jay Ganesh....");
	fmt.Println("Enter One Number....");
	fmt.Scanf("%d",&no);

	//Call To Pattern Function
	Pattern(no);
}