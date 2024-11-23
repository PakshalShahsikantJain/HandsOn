/*
    Author : Pakshal Shashikant Jain 
    Date : 31/07/2023
    Program : Accept character from user. If character is small display its
              corresponding capital character, and if it small then display its
              corresponding capital. In other cases display as it is.

              Input : Q
              Output : q

              Input : m
              Output : M

              Input : 4        
              Output : 4

              Input : %
              Output : % 
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraires
package main 
import "fmt"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Convert Character
func Convert(ch byte) byte {
	//Logic To Convert
	if ((ch >= 'A')&&(ch <= 'Z')) {
		ch = ch + 32;

		return ch;
	} else if ((ch >= 'a')&&(ch <= 'z')) {
		ch = ch - 32;
		
		return ch;
	} else	{
		return ch;
	}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
func main() {
	var ch byte = ' ';
	var cret byte = ' ';

	fmt.Println("Jay Ganesh...");

	//Taking input from user
	fmt.Println("Enter One Character");
	fmt.Scanf("%c",&ch);

	//Call TO Convert function
	cret = Convert(ch);

	//Handeling Condition According To Output 
	if ((ch >= 'A')&&(ch <= 'Z')) {
		fmt.Printf("Corresponding Small Letter of Entered Capital Letter %c is : %c",ch,cret);
	} else if ((ch >= 'a')&&(ch <= 'z')) {
		fmt.Printf("Corresponding Capital Letter of Entered Small Lettter %c is : %c",ch,cret);
	} else {
		fmt.Printf("There is No Corresponding Letter For Entered Character %c",cret);
	} 
}