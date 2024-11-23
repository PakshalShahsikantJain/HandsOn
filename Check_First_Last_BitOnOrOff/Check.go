/*
    Author : Pakshal Shashikant Jain 
    Date : 31/08/2023
    Program : Write a program which checks whether first and last bit is On or
              OFF. First bit means bit number 1 and last bit means bit number 32. 
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
package main
import "fmt"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Check Bit is ON or OFF
func ChkBit(iNo int) bool {
	var iResult int = 0;          
	var iMask int = 0X80000001;  

	if(iNo < 0) {
		iNo = -iNo;
	}

	//Logic To Check Bit is ON or OFF
	iResult = iMask & iNo;

	if (iResult == iMask) {
		return true;
	} else {
		return false;
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var No int = 0;
	var bret bool = false;

	fmt.Println("Jay Ganesh....");

	//Taking Input from user
	fmt.Println("Enter One Number");
	fmt.Scan(&No);

	//Call To Check Bit Function
	bret = ChkBit(No);

	//Handeling Condition if bret is True
	if bret == true {
		fmt.Println("First and Last Bit is ON");
	} else {
		fmt.Println("First or Last Bit is OFF");
	}
}