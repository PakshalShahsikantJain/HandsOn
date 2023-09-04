/*
    Author : Pakshal Shashikant Jain
    Date : 04/09/2023
    Program : Write a program which accept one number and position from user and
              check whether bit at that position is on or off. If bit is one return TURE
              otherwise return FALSE.
            
              Input : 10 2
              Output : TRUE 
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
package main
import "fmt"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Check Bit is ON or OFF At Entered Position
func CheckBit(iNo int,iPos int) bool {
	var iMask = 0X00000001;
	var iResult = 0;

	if (iNo < 0) {
		iNo = -iNo;
	}

	if ((iPos < 1) || (iPos > 32)) {
		return false;
	}
	
	//Logic To Check
	iMask = iMask << (iPos -1);

	iResult = iMask & iNo;

	if (iResult == iMask) {
		return true;
 	} else {
		return false;
	}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var bret bool = false;
	var iNo int = 0;
	var iPos int = 0;

	fmt.Println("Jay Ganesh....");
	
	//Taking Input from user 
	fmt.Println("Enter One Number");
	fmt.Scan(&iNo);

	fmt.Println("Enter One Position");
	fmt.Scan(&iPos);

	//Call To CheckBit Function
	bret = CheckBit(iNo,iPos);

	//Handeling Condition if bret is True
	if (bret == true) {
		fmt.Printf("Bit is ON at Entered Position %d",iPos);
	} else  {    //Handeling Condition if bret is False
		fmt.Printf("Bit is OFF at Entered Position %d",iPos);
	}
}	