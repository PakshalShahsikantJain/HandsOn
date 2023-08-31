/*
    Author : Pakshal Shashikant Jain 
    Date : 01/09/2023
    Program : Write a program which accept one number from user and toggle 7th bit of
			  that number. Return modified number.  
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
package main
import "fmt"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Toggle Bit 
func ToggleBit(iNo int) int {
	var iResult int = 0;          //  0    0    0    0    0    0    4    0
	var iMask int = 0X00000040;  //  0000 0000 0000 0000 0000 0000 0100 0000

	if (iNo < 0) {
		iNo = -iNo;
	}

	//Logic To Toggle Given Bits
	iResult = iNo ^ iMask;

	return iResult;
}	

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
func main() {
	var iret int = 0;
	var iNo int = 0;

	fmt.Println("Jay Ganesh....");

	//Taking Input from user
	fmt.Println("Enter One Number");
	fmt.Scan(&iNo);

	//Call To ToggleBit Function
	iret = ToggleBit(iNo);

	//Printing Modified Number
	fmt.Println("Modified Number is :",iret);
}