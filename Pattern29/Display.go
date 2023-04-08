/*
    Author : Pakshal Shashikant Jain 
    Date : 07/04/2023
    Program : To Print Below Given Pattern 
    Input : iRow = 5 iCol = 5
    Output : $ * * * *
             # $ * * *
             # # $ * *
             # # # $ *
             # # # # $
*/

//Required Libraries
package main
import "fmt"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Display Given Pattern 
func Display(No int,No2 int) {
	var i int = 0;
	var j int = 0;

	//Logic To Print Given Pattern
	fmt.Println("Printing Below Given Pattern : ");
	for i = 1;i <= No;i++ {
		for j = 1;j <= No2;j++ {
			if (i == j) {
				fmt.Print("$\t");	
			} else if (i > j) {
				fmt.Print("#\t");
			} else {
				fmt.Print("*\t");
			}
		}
		fmt.Println();
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var No int = 0;
	var No2 int = 0;

	fmt.Println("Jay Ganesh...");

	//Taking Input From User
	fmt.Println("Enter Number of Rows You Want...");
	fmt.Scan(&No);

	fmt.Println("Enter Number of Columns You Want.....");
	fmt.Scan(&No2);

	//Call To Display Function
	Display(No,No2);
}