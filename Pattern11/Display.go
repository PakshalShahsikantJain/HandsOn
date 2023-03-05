/*
	Author : Pakshal Shashikant Jain 
	Date : 02/03/2023
	Program : To Print Below Given Pattern 
	Input : iRow = 3 iCol = 4
	Output : * # * #
 			 * # * #
 		 	 * # * # 
*/

//Required Libraries
package main 
import "fmt"

//Function To Print Given Pattern
func Pattern(No int,No2 int) {
	var i int = 0;
	var j int = 0;

	fmt.Println("Printing Given Pattern : ");
	for i = 1;i <= No;i++ {
		for j = 1;j <= No2;j++ {
			if j % 2 != 0 {
				fmt.Printf("*\t");
			} else {
				fmt.Printf("#\t");
			}
		}
		fmt.Println();
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var No int = 0;
	var No2 int = 0;

	fmt.Println("Jay Ganesh...");

	//Taking Input From User
	fmt.Println("Enter Number of Rows You Want");
	fmt.Scan(&No);

	fmt.Println("Enter Number of Columns You Want");
	fmt.Scan(&No2);

	//Call To Pattern Function
	Pattern(No,No2);
}