/*
    Author : Pakshal Shashikant Jain 
    Date : 05/09/2023
    Program : Write a program which accept one number and position from user and ON
              that bit. Return modified number.

              Input : 10 3
              Output : 14 
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
package main
import "fmt"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function TO On Bit At Entered Position
func OnBit(iNo int,iPos int) int {
	var iMask int = 0X000000001;
	var iResult int = 0;

	if (iNo < 0) {
		iNo = -iNo;
	}

	if ((iPos < 1)||(iPos > 32)) {
		return 0;
	}

	//Logic To Ont Bit
	iMask = iMask << (iPos - 1);
	iResult = iMask & iNo;

	if (iResult != iMask) {
		iResult = iMask ^ iNo;
	} else {
		iResult = iNo;
	}

	return iResult;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var iNo = 0;
	var iRet = 0;
	var iPos = 0;

	fmt.Println("Jay Ganesh....");

	//Taking Input from User
	fmt.Println("Enter One Number");
	fmt.Scan(&iNo);

	fmt.Println("Enter One Position");
	fmt.Scan(&iPos);

	//Call To OnBit Function
	iRet = OnBit(iNo,iPos);

	if (iRet == iNo) {
		fmt.Println("Bit is Already On");

		return;
	}

	//Printing Modified Number
	fmt.Printf("Modified Number is : %d",iRet);
}