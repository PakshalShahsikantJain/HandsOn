/*
    Author : Pakshal Shashikant Jain 
    Date : 30/07/2023
    Program : Accept Character from user and check whether it is small case or
              not (a-z).

              Input : g
              Output : TRUE

              Input : D
              Output : FALSE 
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
package main
import "fmt"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Check To Entered Character is Small Case Character or Not
func Check(ch byte) bool {

	//Logic To Check
	if ((ch >= 'a')&&(ch <= 'z')) {
		return true;
	} else {
		return false;
	}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
func main() {
	var ch byte = ' ';
	var bret bool = false;

	fmt.Println("Jay Ganesh.....");

	//Taking input from user
	fmt.Println("Enter Character You Want To Check");
	fmt.Scanf("%c",&ch);

	//Call To Check Function
	bret = Check(ch);	

	//Handeling Condition According To Output 
	if bret == true {
		fmt.Printf("Enterd Character %c is A Small Case Character",ch);
	} else {
		fmt.Printf("Entered Character %c is Not A Small Case Character",ch);
	}
}