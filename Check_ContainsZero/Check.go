/*
	Author : Pakshal Jain
	Date : 16/10/2022
	Program : To Check Entered Number Contains Zero or not
*/

//Required Libraries
package main
import "fmt";

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Check Entered Number Contains Zero or Not
func Check(No int) bool {
	var Digit int = 0;

	//Logic
	for No != 0 {
		Digit = No % 10;
		if Digit == 0{
			break;
		}
		No = No / 10;
	}

	//Handeling Condition if Number Contains Zero
	if Digit == 0{
		return true;
	}/*Handeling Condition if Number Does Not Constains Zero*/ else {
		return false;
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var No int = 0;
	var bret bool = false;

	fmt.Println("Jay Ganesh...");
	
	fmt.Println("Enter One Number");
	fmt.Scanf("%d",&No);

	//Call To Check Function
	bret = Check(No);

	//Handeling Condition if Return value is True
	if bret == true {
		fmt.Println("Entered Number Contains Zero in it");
	}/*Handeling Condition if Return Value is False*/ else {
		fmt.Println("Entered Number Does Not Contains Zero in it");
	}
}