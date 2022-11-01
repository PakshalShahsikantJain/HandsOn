/*
	Author : Pakshal Jain
	Date : 29/10/2022
	Program : To Convert Entered Temparature From Fahrenheit To Celcius
*/

//Required Libraries
package main
import "fmt";

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Convert Temparature
func Convert(No float64) float64 {
	var ans float64 = 0.0;

	ans = (No - 32) * 5 / 9;

	return ans;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var No float64 = 0.0;
	var fret float64 = 0.0;

	fmt.Println("Jay Ganesh....");
	
	//Taking Input From User
	fmt.Println("Enter Temperature In Fahrenheit");
	fmt.Scan(&No);

	//Call To Convert Function
	fret = Convert(No);

	fmt.Println("Temperature Converted To Celcius is ",fret);
}