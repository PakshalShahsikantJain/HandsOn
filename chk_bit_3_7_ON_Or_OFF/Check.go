/*
    Author : Pakshal Shashikant Jain
    Date : 12/09/2023
    Program : Write a program which accept one number , two positions from user and
              check whether bit at first or bit at second position is ON or OFF.

              Input : 10 3 7
              Output : FALSE 
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
package main
import "fmt"

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Check Bits are On or Off
func CheckBit(No int,iPos1 int,iPos2 int) bool {
	var iMask int = 0X00000001;
	var iMask2 int = 0X00000001;

	var iResult int = 0;
	var iResult2 int = 0;

	//Logic To Check
	iMask = iMask << (iPos1 - 1);
	iMask2 = iMask2 << (iPos2 - 1);

	iResult = iMask & No;
	iResult2 = iMask2 & No;

	if ((iResult == iMask)||(iResult2 == iMask2)) {
		return true;	
	} else {
		return false;
	}
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var iNo int = 0;
	var iPos1 int = 0;
	var iPos2 int = 0;
	var bret bool = false;

	fmt.Println("Jay Ganesh....Ganpati Bappanchancy Aagmanala 7 Divas Bakki.....");

	//Taking Input from user
	fmt.Println("Enter One Number");
	fmt.Scan(&iNo);

	fmt.Println("Enter One Position");
	fmt.Scan(&iPos1);
	
	fmt.Println("Enter Second Position");
	fmt.Scan(&iPos2);

	//Call To Check Bit Function
	bret = CheckBit(iNo,iPos1,iPos2);
	if (bret == true) {
		fmt.Println("One or Both Bits are ON");
	} else {
		fmt.Println("Both Bits are OFF")
	}
}