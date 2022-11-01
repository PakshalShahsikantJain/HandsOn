/*
	Author : Pakshal Jain
	Date : 29/10/2022
	Program : To Convert Entered Km into M
*/

//Required Libraries
package main
import "fmt"

//Function To Convert Km into M
func Convert(No int) int {
	var ans int = 0;

	ans = No * 1000;

	return ans;
}

//Main Function
func main() {
	var No int = 0;	
	var iret int = 0;

	fmt.Println("Jay Ganesh...");
	
	//Taking Input From user
	fmt.Println("Enter Distance in Km");
	fmt.Scanf("%d",&No);

	//Call To Convert Function
	iret = Convert(No);

	//Printing Converted Km into M
	fmt.Println("Converted KM into M is :",iret);
}