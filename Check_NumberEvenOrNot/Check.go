/*
	Author : Pakshal Jain
	Date : 19/09/2022
	Program : To Check Whether Entered Number is Even or Not
*/

//Required packages
package main;
import "fmt";

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

func Check(No int) bool {
	if No % 2 == 0 {
		return true;
	} else {
		return false;
	}
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

func main() {
	var No int = 0;
	var bret bool  = false;

	fmt.Println("Jay Ganesh.....");

	fmt.Println("Enter One Number....");
	fmt.Scanf("%d",&No);

	bret = Check(No);
	if bret == true {
		fmt.Println("Entered Number is Even....");
	} else {
		fmt.Println("Entered Number is Odd..");
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
