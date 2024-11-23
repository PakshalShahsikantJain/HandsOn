/*
    Author : Pakshal Shashikant Jain 
    Date : 01/09/2023
    Program : Write a program which accept one number from user and on its first 4
              bits. Return modified number.

              Input : 73
              Output : 79 
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
package main
import "fmt"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To On First Four Bits 
func OnBit(iNo int) int {
	var iResult int = 0;
	var iMask int = 0X0000000F;

	if (iNo < 0) {
		iNo = -iNo;
	}

	iResult = iNo | iMask;

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

	//Call To OnBit Function
	iret = OnBit(iNo);

	//Printing Modified Number
	fmt.Println("Modified Number is :",iret);
}