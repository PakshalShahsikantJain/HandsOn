/*
    Author : Pakshal Shashikant Jain 
    Date : 18/03/2023
    Program : To Print Below Given Pattern
    
    Input : iRow = 5 iCol = 5
    Output : a b c d e
             1 2 3 4 5
             a b c d e
             1 2 3 4 5
             a b c d e
*/

//Required libraries
package main 
import "fmt"

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Print Pattern
func Pattern(No int,No2 int) {
	var i int = 0;
	var j int = 0;

	//Logic To Print Pattern
	fmt.Println("Printing Below Given Pattern");
	for i = 0;i < No;i++ {
		for j = 0;j < No2;j++ {
			if i % 2 == 0 {
				fmt.Printf("%c\t",j + 97);
			} else {
				fmt.Printf("%d\t",j + 1);
			}
		}
		fmt.Println();
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var No int = 0;
	var No2 int = 0;

	fmt.Println("Jay Ganesh.....");

	//Taking Input From User
	fmt.Println("Enter Number of Rows You Want....");
	fmt.Scan(&No);

	fmt.Println("Enter Number of Columns You Want...");
	fmt.Scan(&No2);

	//Call To Pattern Function
	Pattern(No,No2);	
}	