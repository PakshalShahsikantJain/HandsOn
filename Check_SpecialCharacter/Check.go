/*
    Author : Pakshal Shashikant Jain 
    Date : 05/08/2023
    Program : Accept Character from user and check whether it is special symbol
              or not (!, @, #, $, %, ^, &, *).

              Input : %
              Output : TRUE

              Input : d
              Output : FALSE 
*/

/////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
package main 
import "fmt"

////////////////////////////////////////////////////////////////////////////////////

//Function To Check 
func Check(ch byte) bool {
	if ((ch >= '#')&&(ch <= '&')) {
		return true;
	} else if((ch == '!')||(ch == '@')||(ch == '^')||(ch == '*')) {
		return true;
	} else {
		return false;
	}
}

////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var bret bool = false;
	var ch byte = ' ';

	fmt.Println("Jay Ganesh.....");

	//Taking input from user
	fmt.Println("Enter One Character To Check");
	fmt.Scanf("%c",&ch);

	//Call To Check Function
	bret = Check(ch);

	//Handeling Output According To Given Conditions
	if (bret == true) {
		fmt.Printf("Entered Character %c is a Special Symbol",ch);
	} else {
		fmt.Printf("Entered Character %c is Not A Special Symbol",ch);
	}
}