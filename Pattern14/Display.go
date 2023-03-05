/*
	Author : Pakshal Shashikant Jain 
	Date : 05/03/2023
	Program : To Print Below Given Pattern
	Input : iRow = 4 iCol = 4
	Output : A B C D
			 a b c d
			 A B C D
			 a b c d 

*/

//Required Libraries
package main
import "fmt"

//Function To Print Pattern
func Pattern(No int,No2 int) {
	var i int = 0;
	var j int = 0;

	//Logic To Print Pattern
	fmt.Println("Printing Below Given Patter");
	for i = 0;i < No;i++ {
		for j = 0;j < No;j++ {
			if i % 2 == 0 {
				fmt.Printf("%c\t",j + 65);
			} else {
				fmt.Printf("%c\t",j + 97);
			}
		}
		fmt.Println();
	}
}

//////////////////////////////////////////////////////////////////////////////////////////

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