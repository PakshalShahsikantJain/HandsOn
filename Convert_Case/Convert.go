/*
	Author : Pakshal Jain
	Date : 24/09/2022
	Program : To Convert Case of Entered Character
*/

//Requried Libraries
package main
import "fmt";

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

func Convert(ch byte) byte  {
	var c byte = ' ';

	//Logic To Convert Case of Character
	if ch  >= 'A' && ch <= 'Z'{
		c = ch + 32;
	} else if ch >= 'a' && ch <= 'z' {
		c = ch - 32;
	}

	return c;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

func main() {
	var ch byte = ' ';
	var cret byte = ' ';

	fmt.Println("Jay Ganesh.....");

	fmt.Println("Enter One Character...");
	fmt.Scanf("%c",&ch);

	fmt.Printf("Entered Character is : %c\n",ch);

	//Call To Convert Function
	cret = Convert(ch);
	fmt.Printf("Convereted Character is : %c\n",cret);
}