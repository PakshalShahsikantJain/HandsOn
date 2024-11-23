/*
    Author : Pakshal Shashikant Jain
    Date : 12/09/2023
    Program : Write a program which accept one number from user and range of
              positions from user. Toggle all bits from that range.
              Input : 897 9 13
              Toggle all bits from position 9 to 13 of input number ie 879.

              UINT ToggleBitRange(UINT iNo, int iStart, int iEnd)
              {
                // Logic
              } 
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
package main
import "fmt"

//////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To ToggleBits in Entered Range
func ToggleBitRange(No uint,iStart int,iEnd int) uint {
	var iMask uint = 0X00000001;
	var iResult uint = 0;
	var i int = 0;

	//Logic To Toggle
	iResult = No;
	for i = iStart;i <= iEnd;i++ {
		iMask = iMask << (i - 1);
		iResult = iResult ^ iMask;
		iMask = 0X00000001;
	}

	return iResult;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var iNo uint= 0;
	var iStart int = 0;
	var iEnd int = 0;
	var iRet uint = 0;

	fmt.Println("Jay Ganesh....");
	
	//Taking Inputs From user
	fmt.Println("Enter One Number");
	fmt.Scan(&iNo);

	fmt.Println("Enter Starting Number");
	fmt.Scan(&iStart);

	fmt.Println("Enter Ending Number");
	fmt.Scan(&iEnd);

	//Call To ToggleBitRange Function
	iRet = ToggleBitRange(iNo,iStart,iEnd);

	//Printing Modified Numbers
	fmt.Println("Modified Number is :",iRet);
}