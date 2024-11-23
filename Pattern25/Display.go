/*
	Author : Pakshal Shashikant Jain 
	Date : 01/04/2023
	Program : To Print Below Given Pattern

	Input : iRow = 6 iCol = 5 
	Output : * * * * *
			 * @ @ @ *
			 * @ @ @ *
			 * @ @ @ *
			 * @ @ @ *
			 * * * * * 
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
package main
import "fmt"

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Display Pattern 
func Display(No int,No2 int) {
	var i int = 0;
	var j int = 0;

	fmt.Println("Printing Below Given Pattern : ");
	for i = 1;i <= No;i++ {
		for j = 1;j <= No2;j++ {
			if ((i == 1)||(j == 1)||(i == No)||(j == No2)) {
				fmt.Printf("*\t");
			} else {
				fmt.Printf("@\t");
			}
		}
		fmt.Println();
	}
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var No int = 0;
	var No2 int = 0;

	//Taking Input From User
	fmt.Println("Enter Number of Rows You Want...");
	fmt.Scan(&No);

	fmt.Println("Enter Number of Columns You Want....");
	fmt.Scan(&No2);

	//Call To Display Function
	Display(No,No2);
}