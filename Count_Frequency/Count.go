/*
	Author : Pakshal Jain
	Date : 17/10/2022
	Program : To Count Frequecy of Two in Entered Number
*/

//Required Libraries
package main
import "fmt";

///////////////////////////////////////////////////////////////////////////////////////////////

//Function To Count Frequecy
func Frequency(No int) int {
	var icnt int = 0;
	var Digit int = 0;

	//Logic To Count Frequecy of Two in Entered Number
	for No != 0 {
		Digit = No % 10;
		if Digit == 2 {
			icnt++;
		}
		No = No / 10;
	}

	return icnt;
}

//////////////////////////////////////////////////////////////////////////////////////////

func main() {
	var No int = 0;
	var iret int = 0;

	fmt.Println("Jay Ganesh....");

	fmt.Println("Enter One NUmber");
	fmt.Scanf("%d",&No);

	//Call To Frequecy Function
	iret = Frequency(No);
	fmt.Println("Frequecy of 2 in Entered Number is : ",iret);
}