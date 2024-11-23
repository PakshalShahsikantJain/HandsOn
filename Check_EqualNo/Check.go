/*
	Author : Pakshal Jain
	Date : 10/10/2022
	Prorgam : To Check Entered Two Number are Equal or Not
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
package main
import "fmt";

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function Check
func Check(No int,No2 int ) bool {
	if No == No2 {
		return true;
	} else {
		return false;
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var No int = 0;
	var No2 int = 0;

	var bret bool = false;

	fmt.Println("Jay Ganesh...");
	
	fmt.Println("Enter one Number");
	fmt.Scan(&No);

	fmt.Println("Enter Second Number");
	fmt.Scan(&No2);

	//Call To Check Function
	bret = Check(No,No2);

	if bret == true {
		fmt.Printf("Entered Number %d and %d are Equal",No,No2);
	} else {
		fmt.Printf("Entered Number %d and %d are Not Equal",No,No2);
	}
}