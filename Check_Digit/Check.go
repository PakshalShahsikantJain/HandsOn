/*
    Author : Pakshal Shashikant Jain 
    Date : 24/07/2023
    Program : Accept Character from user and check whether it is digit or not
              (0-9).

              Input : 7 
              Output : TRUE

              Input : d
              Output : FALSE 
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
package main
import "fmt"

//Function To Check
func Check(ch byte) bool {
	//Logic To Check
	if ((ch >= '0')&&(ch <= '9')) {
		return true;
	} else {
		return false;
	}
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
func main() {
	var ch byte = ' ';
	var bret bool = false;

	fmt.Println("Jay Ganesh.....");

	//Taking input from user
	fmt.Println("Enter One Character To Check");
	fmt.Scanf("%c",&ch);

	//Call To Check Function
	bret = Check(ch);

	//Handeling Condition According To output
	if (bret == true) {
		fmt.Printf("Entered Character %c is a Digit",ch);
	} else {
		fmt.Printf("Entered Character %c is Not a Digit",ch);
	}
}