/*
    Author : Pakshal Shashikant Jain
    Date : 30/08/2023
    Program : Write a program which checks whether 5th & 18th bit is On or OFF.
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
package main
import "fmt"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Check Bit is ON or OFF
func ChkBit(iNo int) bool {
	var iResult int = 0;          // 0     0     0     2     0     0     1     0  
	var iMask int = 0X00020010;  // 0000  0000  0000  0010  0000  0000  0001  0000

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
		fmt.Println("5th and 18th Bit is On");
	} else {
		fmt.Println("5th and 18th Bit is OFF");
	}

}