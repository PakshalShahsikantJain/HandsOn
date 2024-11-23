/*
    Author : Pakshal Shashikant Jain 
    Date : 08/09/2023
    Program : Write a program which accept two numbers from user and display position
              of common ON bits from that two numbers.
              Input : 10 15 (1010 1111)
              Output : 2 4
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required libraries
package main;
import "fmt"

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function TO Display Positions of Common ON Bits
func CommonBit(iNo int,iNo2 int) {
	var iResult int = 0;
	var iPos int = 0;
	var iRem int = 0;

	iResult = iNo & iNo2;
	
	//Logic To Count Number of ON Bits
	iPos = 1;
	for iResult != 0 {
		iRem = iResult % 2;
		if (iRem == 1) {
			fmt.Printf("%d\t",iPos);
		}
		iResult = iResult / 2;
		iPos++;
	};
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var iNo int= 0;
	var iNo2 int = 0;

	fmt.Println("Jay Ganesh....");

	//Taking Input from User
	fmt.Println("Enter One Number");
	fmt.Scan(&iNo);

	fmt.Println("Enter Second Number");
	fmt.Scan(&iNo2);

	//Call To CommonBit Function
	CommonBit(iNo,iNo2);
}