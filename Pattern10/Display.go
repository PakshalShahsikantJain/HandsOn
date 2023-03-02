/*
	Author : Pakshal Jain 
	Date : 02/03/2023
	Program : To Print Given Pattern 
	Input : iRow = 3 iCol = 5
	Output : 5 4 3 2 1
 			 5 4 3 2 1
 			 5 4 3 2 1 
*/

//Required Libraries
package main
import "fmt"

//Function To Display
func Display(No int,No2 int) {
	var i int = 0;
	var j int = 0;

	//Printing Given Pattern 
	fmt.Println("Printing Given Pattern..");
	for i = 1;i <= No;i++ {
		for j = No2;j > 0;j-- {
			fmt.Printf("%d\t",j);
		}
		fmt.Println();
	}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var No int = 0;
	var No2 int = 0;

	fmt.Println("Jay Ganesh....");
	
	//Taking input From User
	fmt.Println("Enter Numbeer of Rows You Want...");
	fmt.Scan(&No);

	fmt.Println("Enter Number of Columns You Want...");
	fmt.Scan(&No2);

	//Call To Display Function
	Display(No,No2);
}