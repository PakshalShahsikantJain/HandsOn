/*
	Author : Pakshal Jain
	Date : 28/10/2022
	Program : To Accept Radius from user and Print Area of Circle
*/

//Required Libraries
package main
import "fmt"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Calculate Area of Circle
func Calculate(No float64) float64 {
	var ans float64 = 0.0;
	
	//Logic
	ans = 3.14 * No * No;

	return ans;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var No float64 = 0.0;
	var fret float64 = 0.0;

	fmt.Println("Jay Ganesh...");

	//Taking Input From User
	fmt.Println("Enter Number....");
	fmt.Scanf("%f",&No);

	//Call To Calculate Function
	fret = Calculate(No);

	//Printing area of Circle
	fmt.Println("Area of Circle is : ",fret);
}