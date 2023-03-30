/*
    Author : Pakshal Shashikant Jain 
    Date : 26/03/2023
    Program : To Print Below Given Pattern 
    
    Input : iRow = 4 iCol = 4
    Output : * * * *
             * * * #
             * * # #
             * # # # 
*/

//Required libraries
package main 
import "fmt"

////////////////////////////////////////////////////////////////////////////////////////

//Function To Display Pattern
func Display(No int,No2 int) {
	var i int = 0;
	var j int = 0;

	//Logic To Print Pattern
	fmt.Println("Printing Below Given Pattern : ");
	for i = 1;i <= No;i++ {
		for j = No2; j > 0;j-- {
			if ((i == j)||(i < j)) {
				fmt.Print("*\t");
			} else {
				fmt.Print("#\t");
			}
		} 
		fmt.Println();
	}
}

///////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var No int = 0;
	var No2 int = 0;

	fmt.Println("Jay Ganesh....");

	//Taking Input From User
	fmt.Println("Enter Number of Rows You Want..");
	fmt.Scan(&No);

	fmt.Println("Enter Number of Columns You Want..");
	fmt.Scan(&No2);

	//Call To Display Function
	Display(No,No2);
}