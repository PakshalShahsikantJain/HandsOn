/*
    Author : Pakshal Shashikant Jain 
    Date : 21/07/2023
    Prorgam : Accept Character from user and check whether it is capital or not(A-Z).
              Input : F
              Output : TRUE

              Input : d
              Output : FALSE 
*/

//Required Libraires
package main 
import "fmt"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Check Entered Character is Capital or Not 
func Check(ch byte) bool {
	if ((ch >= 'A')&&(ch <= 'Z')) {
		return true;
	} else {
		return false;
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
func main() {
	var bret bool = false;
	var ch byte = ' ';

	fmt.Println("Jay Ganesh.....");

	//Taking input from user
	fmt.Println("Enter One Character you Want To Check");
	fmt.Scanf("%c",&ch);

	//Call To Check Function
	bret = Check(ch);

	//Handeling Conditions According TO Output 
	if (bret == true) {
		fmt.Printf("Entered Character %c is Capital",ch);
	} else {
		fmt.Printf("Entered Character %c is Not Capital",ch);
	}
}