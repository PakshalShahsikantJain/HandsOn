/*
	Author : Pakshal Jain 
	Date : 19/02/2023
	Program : To Print Below Given Pattern 

	Input : iRow = 4 iCol = 3
	Output : * * *
		 	 * * *
 			 * * *
 			 * * * 
*/

//Required Libraries
package main
import "fmt"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Print Pattern 
func Pattern(Row int,Col int) {
	var i int = 0;
	var j int = 0;
	
	//Logic To Print Pattern 
	fmt.Println("Printing Given Pattern...");
	for i = 1;i <= Row;i++ {
		for j = 1;j <= Col;j++ {
			fmt.Printf("*\t");
		}
		fmt.Println();
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var No int = 0;
	var No2 int = 0;

	fmt.Println("Jay Ganesh....");

	//Taking Input From user
	fmt.Println("Enter Nmber of Row You Want..");
	fmt.Scan(&No);

	fmt.Println("Enter Number of Columns You Want...");
	fmt.Scan(&No2);

	//Call To Pattern Function
	Pattern(No,No2);
}