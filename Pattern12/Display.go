/*
	Author : Pakshal Jain 
	Date : 04/03/2023
	Program : To Print Below Given Pattern 
	Input : iRow = 3 iCol = 4
	Output : 1 1 1 1
 		     2 2 2 2
 			 3 3 3 3
 			 4 4 4 4 
*/

//Required Libraries
package main
import "fmt"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Print Pattern 
func Pattern(No int,No2 int) {
	var i int = 0;
	var j int = 0;

	//Logic To Print Pattern 
	fmt.Println("Printing Below Given Pattern");
	for i = 1;i <= No;i++ {
		for j = 1;j <= No2;j++ {
			fmt.Printf("%d\t",i);
		}
		fmt.Println();
	}
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var No int = 0;
	var No2 int = 0;

	fmt.Println("Jay Ganesh....");
	
	//Taking Input From User
	fmt.Println("Enter Number of Rows You Want");
	fmt.Scan(&No);

	fmt.Println("Enter Number of Columns You Want");
	fmt.Scan(&No2);

	//Call To Pattern Function
	Pattern(No,No2);
}