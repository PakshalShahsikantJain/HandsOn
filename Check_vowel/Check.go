/*
	Author : Pakshal Jain
	Date : 28/09/2022
	Program : To Check Entered Character is Voewl or Not
*/

//Required Libraries
package main
import "fmt";

//Function To Check 
func Check(ch byte) bool {

	//Logic to Check Entered Character is Vowel or Not
	if ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' {
		return true;
	} else if ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' {
		return true;
	} else {
		return false;
	}
}

////////////////////////////////////////////////////////////////////////////////////////////////

func main() {
	var ch byte = ' ';
	var bret bool = false;

	fmt.Println("Jay Ganesh...");
	fmt.Println("Enter One Character");
	fmt.Scanf("%c",&ch);

	//Calling Check Function
	bret = Check(ch);

	if bret == true {
		fmt.Printf("Entered Character %c is Vowel",ch);
	} else {
		fmt.Printf("Entered Character %c is Not a Vowel",ch);
	}
}	