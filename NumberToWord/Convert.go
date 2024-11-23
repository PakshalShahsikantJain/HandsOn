/*
	Author : Pakshal Jain
	Date : 22/10/2022
	Program : To Convert Entered Single Digit Number into Word
*/

//Required Libraries
package main
import "fmt";

//Function To Convert Number into Word
func Convert(No int) {
	
	if No < 0 {
		No = -No;
	}
	//Logic
	switch No {
		case 1 :
			fmt.Println("One");
			break;
		case 2 :
			fmt.Println("Two");
			break;
		case 3 :
			fmt.Println("Three");
			break;
		case 4 :
			fmt.Println("Four");
			break;
		case 5 :
			fmt.Println("Five");
			break;
		case 6 :
			fmt.Println("Six");
			break;
		case 7 :
			fmt.Println("Seven");
			break;
		case 8 :
			fmt.Println("Eight");
			break;
		case 9 :
			fmt.Println("Nine");
			break;
		default :
			fmt.Println("Invalid Number");
			break;
	}
}

//Main Function
func main() {
	var No int = 0;

	fmt.Println("Jay Ganesh...");
	
	//Taking Input From User
	fmt.Println("Enter One Number...");
	fmt.Scanf("%d",&No);

	//Call To Convert Function
	Convert(No);
}