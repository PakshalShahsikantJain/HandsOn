/*
    Author : Pakshal Shashikant Jain 
    Date : 07/09/2023
    Program : Write a program which accept one number from user and count number of
              ON (1) bits in it without using % and / operator.

              Input : 11
              Output : 3
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required libraries
package main;
import "fmt"

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function TO Count Number of ON Bits
func CountOnBit(iNo uint) int {
	var i int = 0;
	var iMask uint = 0X00000001;
	var iResult uint = 0;
	var icnt = 0;

	//Logic To Count Number of ON Bits
	for i = 1;i <= 32;i++ {
		iMask = iMask << (i - 1);

		iResult = iMask & iNo;
		if (iResult == iMask) {
			icnt++;
		}

		iMask = 0X00000001;
		iResult = 0;
	};

	return icnt;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var iret int = 0;
	var iNo uint= 0;

	fmt.Println("Jay Ganesh....");

	//Taking Input from User
	fmt.Println("Enter One Number");
	fmt.Scan(&iNo);

	//Call To CountBit Function
	iret = CountOnBit(iNo);

	//Printing Count Of ON Bits
	fmt.Println("Count of ON Bits is : ",iret);
}