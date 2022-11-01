/*
	Author : Pakshal Jain
	Date : 20/09/2022
	Program : Accept one number from user and print that number of even numbers on screen
*/

//Required Libraries
package main;
import "fmt";

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Display Even Numbers
func Display(No int) {
	var i int = 0;

	for i = 1;i <= No;i++ {
		fmt.Printf("%d\t",i * 2);
	}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////

func main() {
	var no int = 0;

	fmt.Println("Ganapati Bappa Morya....");
	
	fmt.Println("Enter One Number....");
	fmt.Scanf("%d",&no);

	//Call To Display Function
	Display(no);
}