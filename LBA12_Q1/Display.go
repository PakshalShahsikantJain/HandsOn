/*
	Author : Pakshal Jain
	Date : 15/12/2022
	Program : To Print Below Pattern 

	Input : 5
    Output : * * * * * # # # # #

    Input : 6
    Output : * * * * * * # # # # # # #
    
    Input : -5
    Output : * * * * * # # # # #
    
    Input : 2
    Output : * * # #
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Requird Libraries
package main
import "fmt"

//Pattern Function to Print Pattern
func Pattern(No int) {
	var i int = 0;

	//Handeling Condition if Entered Number is Negative
	if No < 0 {
		No = -No;
	}

	//Logic To Print Given Pattern
	for i = 0;i < No;i++ {
		fmt.Print("*\t");
	}

	for i = 0;i < No;i++ {
		fmt.Print("#\t");
	}
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var No int = 0;

	fmt.Println("Jay ganesh...");

	//Taking Input From User
	fmt.Println("Enter One Number");
	fmt.Scan(&No);

	//Call To Pattern Function
	Pattern(No);
}