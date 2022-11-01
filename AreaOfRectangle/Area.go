/*
	Author : Pakshal Jain
	Date : 28/10/2022
	Program : To Accept Height and Radius of Rectangle From User and Calculate its Area
*/

//Required Libraries
package main
import "fmt"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Calculate Area of Rectangle
func Calculate(Height float64,Width float64) float64 {
	var area float64 = 0.0;

	area = Height * Width;

	return area;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var Height float64 = 0.0;
	var Width float64 = 0.0;
	var fret float64 = 0.0;

	fmt.Println("Jay Ganesh...");

	//Taking Input From User
	fmt.Println("Enter Height of Rectangle...");
	fmt.Scan(&Height);

	fmt.Println("Enter Width of Rectangle...");
	fmt.Scan(&Width);

	//Call To Calculate Function
	fret = Calculate(Height,Width);

	//Printing area of rectangle
	fmt.Println("Area of Rectangle is : ",fret);
}