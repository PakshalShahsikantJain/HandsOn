/*
	Author : Pakshal Jain
	Date : 21/10/2022
	Program : To accept number from user and if number is less than 50 then print small, 
              if it is greater than 50 and less than 100 then print medium, 
              if it is greater than 100 then print large
*/

//Required Libraries
package main;
import "fmt";

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Print Output
func Number(No int) {

	//Logic
	if (No < 50) {
		fmt.Println("Small");
	} else if ((No >= 50)&&(No <= 100)) {
		fmt.Println("Medium");
	} else if (No > 100) {
		fmt.Println("Large");
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var No int = 0;

	fmt.Println("Jay Ganesh...");
	
	//Taking Input From User
	fmt.Println("Enter One Number");
	fmt.Scanf("%d",&No);

	//Call To Number Function
	Number(No);
}