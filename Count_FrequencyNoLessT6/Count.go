/*
	Author : Pakshal Jain 
	Date : 18/10/2022
	Program : To Count Frequecy of Digits Less Than 6 
*/

//Required Libraries
package main
import "fmt"

//Function TO Count Frequency
func Frequecy(No int) int {
	var Digit int = 0;
	var icnt int = 0;

	//Logic
	for No != 0 {
		Digit = No % 10;
		if Digit < 6 {
			icnt++;
		} 
		No = No / 10;
	}

	return icnt;
}

//Main Function
func main() {
	var No int = 0;
	var iret int = 0;

	fmt.Println("Jay Ganesh...");
	
	fmt.Println("Enter One Number");
	fmt.Scanf("%d",&No);
	
	//Call To Frequecy Function
	iret = Frequecy(No);

	fmt.Println("Frequecy of Digits Less Than6 is : ",iret);
}