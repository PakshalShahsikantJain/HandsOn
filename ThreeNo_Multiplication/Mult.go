/*
	Author : Pakshal Jain
	Date : 12/10/2022
	Program : To Calulate Multiplication of Entered Three Numbers
*/

//Required Libraries
package main
import "fmt";

//Function To Calculate Multiplcation
func Mult(No int,No2 int,No3 int) int {
	var ans int = 0;

	//Conditions To Handel if any Of Entered Number is Zero
	if No == 0 && No2 == 0 {
		ans = No3;
	} else if No2 == 0 && No3 == 0 {
		ans = No;
	} else if No == 0 && No3 == 0 {
		ans = No2;
	} else if No == 0 {
		ans = No2 * No3;
	} else if No2 == 0 {
		ans = No * No3;
	} else if No3 == 0 {
		ans = No * No2;
	} else {          				//Handeling Condtion if Non Of The Entered Number is Zero                   
		ans = No * No2 * No3;
	}

	return ans;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

func main() {
	//Requried Variables
	var No int = 0;
	var No2 int = 0;
	var No3 int = 0;
	var iret int = 0;

	fmt.Println("Jay Ganesh....");
	
	fmt.Println("Enter First Number");
	fmt.Scan(&No);

	fmt.Println("Enter Second Number");
	fmt.Scan(&No2);

	fmt.Println("Enter Third Number");
	fmt.Scan(&No3);

	//Handeling Condition all The Entered Numbers are Zero
	if No == 0 && No2 == 0 && No3 == 0 {
		iret = No * No2 * No3;
	} else {
		//Calling Mult Function
		iret = Mult(No,No2,No3);
	}

	//Printing final Output
	fmt.Printf("Multiplication of Entered Three Numbers is : %d",iret);
}