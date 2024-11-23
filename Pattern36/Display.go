/*
    Author : Pakshal Shashikant Jain 
    Date : 19/04/2023
    Program : To Print Below Given Pattern 
    
    Input : iRow = 4 iCol = 4
    Output : 1 2 3 4 5
             1 2     5
             1   3   5
             1     4 5
             1 2 3 4 5 
*/

//Required Libraries
package main 
import "fmt"

//Function To Print Given Pattern 
func Pattern(No int,No2 int) {
	var i int = 0;
	var j int = 0;

	//Logic To Print Given Pattern 
	fmt.Println("Printing Given Pattern : ");
	for i = 1;i <= No;i++ {
		for j = 1;j <= No2;j++ {
			if ((i == j)||(i == 1)||(j == 1)||(i == No)||(j == No2)) {
				fmt.Printf("%d\t",j);
			} else {
				fmt.Printf(" \t");
			}
		}
		fmt.Println();
	}
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var No int = 0;
	var No2 int = 0;

	fmt.Println("Jay Ganesh...");

	//Taking Input From User 
	fmt.Println("Enter Number of Rows You Want : ");
	fmt.Scan(&No);

	fmt.Println("Enter Number of Columns You Want : ");
	fmt.Scan(&No2);

	//Call To pattern Function
	Pattern(No,No2);
}