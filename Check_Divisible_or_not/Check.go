/*
	Author : Pakshal Jain
	Date : 14/09/2022
	Program : To Check Whether Entered Number is Divisible By 5 or Not
*/

//Required Packages
package main
import "fmt";

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

func Check(No int) bool {
	
	if No % 5 == 0 {
		return true;
	}else {
		return false;
	}
	
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

func main() {
	var No int = 0;
	var bret bool = false;

	fmt.Println("Jay Ganesh.....");

	fmt.Println("Enter One Number....");
	fmt.Scanf("%d",&No);

	bret = Check(No);

	if bret == true {
		fmt.Println("Entered Number is Divisible By 5");
	} else {
		fmt.Println("Entered Number is Not Divisible By 5");
	}
}