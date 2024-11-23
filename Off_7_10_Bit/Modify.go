/*
    Author : Pakshal Shashikant Jain 
    Date : 01/09/2023
    Program : Write a program which accept one number from user and off 7th and 10th
			  bit of that number. Return modified number. 
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
package main
import "fmt"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Off 
func OffBit(iNo int) int {
	var iResult int = 0;          //  0    0    0    0    0    2    4    0
	var iMask int = 0X00000240;  //  0000 0000 0000 0000 0000 0010 0100 0000

	if (iNo < 0) {
		iNo = -iNo;
	}

	//Logic To Off Given Bits
	iResult = iNo & iMask;

	if (iResult == iMask) {
		iResult = iNo ^ iMask;
	}

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

	//Call To OffBit Function
	iret = OffBit(iNo);

	//Printing Modified Number
	fmt.Println("Modified Number is :",iret);
}