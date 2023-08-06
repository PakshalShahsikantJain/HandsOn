/*
    Author : Pakshal Shashikant Jain 
    Date : 04/08/2023
    Program : Accept character from user. If it is capital then display all the
              characters from the input characters till Z. If input character is small
              then print all the characters in reverse order till a. In other cases
              return directly.

              Input : Q
              Output : Q R S T U V W X Y Z

              Input : m
              Output : m l k j i h g f e d c b a

              Input : 8
              Output : 
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraires
package main 
import "fmt"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Display Alphabets According To Given Conditions
func Display(ch byte) {
	var i byte = 0;

	if ((ch >= 'A')&&(ch <= 'Z')) {
		for i = ch;i <= 'Z';i++ {
			fmt.Printf("%c ",i);
		}
	} else if ((ch >= 'a')&&(ch <= 'z')) {
		for i = ch;i >= 'a';i-- {
			fmt.Printf("%c ",i);
		}		
	} else {
		return;
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
func main() {
	var ch byte = ' ';

	fmt.Println("Ganapati Bappa Morya Mangal Murti Morya....");

	//Taking input from user
	fmt.Println("Enter One Alphabet To Print Alphabets According To Given Conditions");
	fmt.Scanf("%c ",&ch);

	//Call To Display Function
	Display(ch);
}