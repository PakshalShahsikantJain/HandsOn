/*
	Author : Pakshal Jain
	Date : 30/10/2022
	Program : To Convert Entered Sqft to SqM
*/

//Required Libraries
package main

import "fmt"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Convert
func Convert(No float64) float64 {
	var ans float64 = 0.0;

	ans = No * 0.0929;

	return ans;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var No float64 = 0;
	var fret float64 = 0.0;

	fmt.Println("Jay Ganesh...");
	
	fmt.Println("Enter Sqft To Convert It into SqM");
	fmt.Scan(&No);

	//Call To Convert Function
	fret = Convert(No);

	fmt.Println("Sqft Converted To SqM is : ",fret);
}