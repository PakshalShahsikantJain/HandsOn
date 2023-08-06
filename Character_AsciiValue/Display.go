/*
    Author : Pakshal Shashikant Jain 
    Date : 06/08/2023
    Program : Accept character from user and display its ASCII value in decimal,
              octal and hexadecimal format.
              
              Input : A
              Output : Decimal 65
                       Octal 0101
                       Hexadecimal 0X41
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Class Declaration
package main 
import "fmt"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Display AsciiValue 
func AsciiValue(ch byte) {
	fmt.Printf("Decimal Value : %d\n",ch);
	fmt.Printf("Hexadecimal Value : %#X\n",ch);
	fmt.Printf("Octal Value : %#o\n",ch);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
func main() {
	var ch byte = ' ';

	//Taking input from user
	fmt.Println("Enter One Character");
	fmt.Scanf("%c",&ch);

	//Call To Ascii Value Function
	AsciiValue(ch);
}