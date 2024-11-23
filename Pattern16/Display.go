/*
	Author : Pakshal Shashikant Jain 
	Date : 	15/03/2023
	Program : To Print Below Given Pattern 
    
	Input : iRow = 3 iCol = 4
    Output : 1 2 3 4
             5 6 7 8
             9 10 11 12 	
*/

//Required Libraries
package main
import "fmt"

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Print Pattern 
func Pattern(No int,No2 int) {
	var i int = 0;
	var j int = 0;
	var k int = 1;

	//Logic To Print Pattern 
	fmt.Println("Printing Below Given Pattern");
	for i = 0;i < No;i++ {
		for j = 0;j < No2;j++ {
			fmt.Printf("%d\t",k);
			k = k + 1;
		}
		fmt.Println();
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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