/*
	Author : Pakshal Jain
	Date : 11/09/2022
	Program : To Print Numbers From Entered Number Till 1
*/

//Importing Required Packages
package main

import "fmt";

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

func Display(No int) {
	var i int= 0;

	fmt.Printf("Printing Numbers From %d Number Till 1\n",No);
	for i = No;i > 0;i-- {
		fmt.Printf("%d ",i);
	}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////

func main() {
	var No int = 0;

	fmt.Println("Jay Ganesh.....");
	
	fmt.Println("Enter Number.....");
	fmt.Scanf("%d",&No);

	Display(No);
}