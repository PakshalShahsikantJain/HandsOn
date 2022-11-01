/*
	Auhtor : Pakshal Jain
	Date : 19/10/2022
	Program : To Count Frequecy of Digits Which are Between 3 and 7
*/

//Required Libraries
package main
import "fmt"

//Function To Count Frequecy
func Frequency(No int) int {
	var Digit int = 0;
	var icnt int = 0;

	//Logic 
	for No != 0 {
		Digit = No % 10;

		if Digit > 3 && Digit < 7 {
			icnt++;
		}
		
		No = No / 10;
	}

	return icnt;
}

//Main Funcnction
func main() {
	var No int = 0;
	var iret int = 0;

	fmt.Println("Jay Ganesh...");
	
	//Taking Input From User
	fmt.Println("Enter one number");
	fmt.Scanf("%d",&No);

	//Call To Frequecy Function
	iret = Frequency(No);

	fmt.Println("Frequecy Of Digits Which are Between 3 and 7 is : ",iret);
}