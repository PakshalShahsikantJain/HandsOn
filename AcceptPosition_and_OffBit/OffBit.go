/*
    Author : Pakshal Shashikant Jain 
    Date : 04/09/2023
    Program : Write a program which accept one number and position from user and off
              that bit. Return modified number.

              Input : 10 2
              Output : 8 
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Librariess
package main
import "fmt"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Off Bit at Entered Position
func OffBit(iNo int,iPos int) int {
	var iMask int = 0X00000001;
	var	iResult int = 0;

	if (iNo < 0) {
		iNo = -iNo;
	}

	if ((iPos < 1) || (iPos > 32)) {
		return 0;
	}

	//Logic To Off Bit 
	iMask = iMask << (iPos - 1);
	iResult = iMask & iNo;

	if (iResult == iMask) {
		iResult = iMask ^ iNo;
	}

	return iResult;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var iret = 0;
	var iNo = 0;
	var iPos = 0;

	fmt.Println("Jay Ganesh.....");

	//Taking Input from user
	fmt.Println("Enter One Number");
	fmt.Scan(&iNo);

	fmt.Println("Enter One Position");
	fmt.Scan(&iPos);

	//Call To OffBit Function
	iret = OffBit(iNo,iPos);

	//Printing Modified Number
	fmt.Println("Modified Number is :",iret);
}