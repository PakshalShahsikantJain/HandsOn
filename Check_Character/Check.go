/*
    Author : Pakshal Shashikant Jain 
    Date : 19/07/2023
    Prorgam : Accept Character from user and check whether it is alphabet or not
              (A-Z a-z).
              Input : F
              Output : TRUE
                
              Input : &
              Output : FALSE
*/

//Required libraries
package main 
import "fmt"

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Check Entered Character is Alphabet or Not
func Character(ch byte) bool {
	if ((ch >= 'A')&&(ch <= 'Z')||(ch >= 'a')&&(ch <= 'z')) {
		return true;
	} else {
		return false;
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
func main() {
	var ch byte = ' ';
	var bret bool = false;

	fmt.Println("Jay Ganesh.....");

	//Taking input from user
	fmt.Println("Enter One Character You Want To Check it is alphabet or not");
	fmt.Scanf("%c",&ch);

	//Call To Character Function
	bret = Character(ch);

	//Handeling Conditions According Output
	if (bret == true) {
		fmt.Printf("Entered Chracter %c is An Alphabet", ch);
	} else {
		fmt.Printf("Entered Character %c is not an Alphabet", ch);
	}
}