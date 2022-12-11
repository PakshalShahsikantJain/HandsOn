/*
	Author : Pakshal Jain
	Date : 11/12/2022
	Program : To Calculate Summation of Even Numbers in Entered Number
*/

//Required Libraries
package main

import "fmt"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Calculate Summation of Numbers
func SumEven(No int,No2 int) int {
	var i int = 0;
	var Sum int = 0;

	//Logic
	for i = No;i <= No2;i++ {
		if i % 2 == 0 {
			Sum = Sum + i;
		}
	}

	return Sum;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var No int = 0;
	var No2 int = 0;
	var iret int = 0;

	fmt.Println("Jay Ganesh...");

	//Taking input From user
	fmt.Println("Enter Starting Number");
	fmt.Scan(&No);

	fmt.Println("Enter Ending Number");
	fmt.Scan(&No2);

	//Handeling Condition if Entered Starting number is Greater Than Ending Number
	if No < 0 || No > No2 {
		fmt.Println("Invalid Range");

		return;
	}

	//Call SumEven Function
	iret = SumEven(No,No2);

	//Printing obtained output
	fmt.Println("Summation of Even Numbers is : ",iret);
}