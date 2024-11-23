/*
    Author : Pakshal Shashikant Jain 
    Date : 07/09/2023
    Program : Write a program which accept one number from user and toggle contents 
              of first and last nibble of the number. Return modified number. (Nibble is a
              group of four bits) 

*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
package main
import "fmt"

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Toggle Bit
func NibbleToggle(iNo uint) uint {
	var iMask uint = 0XF000000F;
	var iResult uint = 0;

	//Logic To Toggle Bit
	if (iNo < 0) {
		iNo = -iNo;
	}

	iResult = iMask ^ iNo;

	return iResult;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var iNo uint = 0;
	var iRet uint = 0;

	fmt.Println("Jay Ganesh......");

	//Taking input from user
	fmt.Println("Enter One Number");
	fmt.Scan(&iNo);

	//Call To NibbleToggle Function
	iRet = NibbleToggle(iNo);

	//Printing Modified Number
	fmt.Println("Modified Number is :",iRet);
}