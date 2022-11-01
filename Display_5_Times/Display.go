/*
	Author : Pakshal Jain
	Date : 10/09/2022
	Program : To Display Marvellous Entered Number of Times
*/

//Importing Required Packages
package main

import "fmt";

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

func Display(No int) {
	var i int = 0;

	fmt.Printf("Printing Marvellous %d Times\n",No);
	
	for i = 0;i < No;i++ {
		fmt.Println("Marvellous");
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

func main() {
	var No int = 0;

	fmt.Printf("Jay Ganesh....\n");
	
	fmt.Println("Enter One Number.....");
	fmt.Scanf("%d",&No);

	Display(No);
}