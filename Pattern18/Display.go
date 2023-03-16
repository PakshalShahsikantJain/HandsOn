/*
    Author : Pakshal Shashikant Jain
    Date : 16/03/2023
    Program : To Print Below Given Pattern 
    Input : iRow = 4 iCol = 4
    Output : 2 4 6 8 10
             1 3 5 7 9
             2 4 6 8 10
             1 3 5 7 9 
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
package main
import "fmt"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Print Pattern
func Pattern(No int,No2 int) {
	var i int = 0;
	var j int = 0;
	var k int = 1;
	var l int = 1;
	var no int = 0;

	//Logic To Print Pattern
	fmt.Println("Printing Below Given Pattern : ");
	for i = 0;i < No;i++ {
		for j = 0;j < No2;j++ {

			if i % 2 == 0 {
				no = k * 2;
				fmt.Printf("%d\t",no);
				k = k + 1
			} else {
				fmt.Printf("%d\t",l);
				l = l + 2;
			}
		}
		k = 1;
		l = 1;
		fmt.Println();
	}
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////

func main() {
	var No int = 0;
	var No2 int = 0;

	fmt.Println("Jay Ganesh...");

	//Taking input From User
	fmt.Println("Enter Number of Rows You Want...");
	fmt.Scan(&No);

	fmt.Println("Enter Number of Columns You Want....");
	fmt.Scan(&No2);

	//Call To Pattern Function
	Pattern(No,No2);
}