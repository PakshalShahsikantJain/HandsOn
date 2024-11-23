/*
	Auhtor : Pakshal Jain
	Date : 09/10/2022
	Program : To Check Entered Number is Greater Than 100 Or Not
*/

//Requried libraries
package main
import "fmt";

//Function TO Check
func Check(No int) bool {

	if No > 100 {
		return true;
	} else {
		return false;
	}

}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

func main()	{
	var No int = 0;
	var bret bool = false;

	fmt.Println("Jay Ganesh....");
	
	fmt.Println("Enter one Number....");
	fmt.Scanf("%d",&No);

	//Call To Check Function
	bret = Check(No);

	if bret == true {
		fmt.Printf("Entered Number %d is Greater Than 100",No);
	} else {
		fmt.Printf("Entered Number %d is Less Than 100",No);
	}
	
}