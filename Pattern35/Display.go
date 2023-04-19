/*
    Author : Pakshal Shashikant Jain 
    Date : 13/04/2023
    Program : To Print Below Given Pattern 
    Input : iRow = 6 iCol = 6
    Output : * * * * * *
             * # # # * *
             * # # * $ *
             * # * $ $ *
             * * $ $ $ *
             * * * * * * 
*/

//Required Libraries
package main
import "fmt"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Print Given Pattern 
func Pattern(No int,No2 int) {
	var i int = 0;
	var j int = 0;

	fmt.Println("Printing Below Given Pattern : ");
	for i = No;i > 0;i-- {
		for j = 1;j <= No2;j++ {
			if ((i == j)||(i == 1)||(j == 1)||(i == No)||(j == No2)) {
				fmt.Print("*\t");
			} else if (i > j) {
				fmt.Print("#\t")
			} else {
				fmt.Print("$\t");
			}
		}
		fmt.Println();
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var No int = 0;
	var No2 int = 0;

	fmt.Println("Jay Ganesh....");

	//Taking Input From User
	fmt.Println("Enter Number of Rows You Want...");
	fmt.Scan(&No);

	fmt.Println("Enter Number of Columns You Want...");
	fmt.Scan(&No2);

	//Call To Pattern Function
	Pattern(No,No2);
}