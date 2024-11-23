/*
    Author : Pakshal Shashikant Jain 
    Date : 18/03/2023
    Program : To Print Below Given Pattern
    
    Input : iRow = 4 iCol = 4
    Output : 1 2 3 4
             2 3 4 5
             3 4 5 6
             4 5 6 7 
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required libraires
package main
import "fmt"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Display Pattern
func Pattern(No int,No2 int) {
	var i int = 0;
	var j int = 0;
	var k int = 1;

	//Logic To Print Below Given Pattern
	fmt.Println("Printing Below Given Pattern : ");
	for i = 0;i < No;i++ {
		for j = 0;j < No2;j++ {
			fmt.Printf("%d\t",k);
			k++;
			if(j == No2 - 1) {
				k = k - 3;
			}
		}
		fmt.Println();
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var No int = 0;
	var No2 int = 0;

	fmt.Println("Jay Ganesh.....");

	//Taking Input From user
	fmt.Println("Enter number of Rows You Want");
	fmt.Scan(&No);

	fmt.Println("Enter Number of Columns You Want");
	fmt.Scan(&No2);

	//Call To Pattern Function
	Pattern(No,No2);
}