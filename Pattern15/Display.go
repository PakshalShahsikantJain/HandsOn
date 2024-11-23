/*
	Author : Pakshal Shashikant Jain 
	Date : 14/03/2023
	Program : To Print Below Given Pattern
    Input : iRow = 3 iCol = 5
    Output : A A A A A
             B B B B B
             C C C C C
*/

//Required Libraries
package main 
import "fmt"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To print Pattern 
func Pattern(No int,No2 int) {
	var i int = 0;
	var j int = 0;

	//Logic To Print Pattern
	fmt.Println("Printing Below Given Pattern : ");
	for i = 0;i < No;i++ {
		for j = 0;j < No2;j++ {
			fmt.Printf("%c\t",i + 65);
		}
		fmt.Println();
	}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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

	//Call To pattern Function
	Pattern(No,No2);
}