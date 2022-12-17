/*
	Author : Pakshal Jain
	Date : 15/12/2022
	Program : To Convert Entered Money in Dollar To Inr 
*/

//Required Libraries
package main
import "fmt"

//Function To Convert Money
func Convert(No int) int {
	var ans int = 0;

	//Handeling Condition if Entered Number is Negative
	if(No < 0) {
		No = -No;
	}

	//Logic
	ans = No * 70;

	return ans;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var No int = 0;
	var iret int = 0;
	
	fmt.Println("Jay ganesh...");

	//Taking Input From user
	fmt.Println("Enter Money in Dollar");
	fmt.Scan(&No);

	//Call To Convert Function
	iret = Convert(No);

	//Printing Obtained Output
	fmt.Println("Money After Conversion from Dollar To Inr is :",iret);
}
