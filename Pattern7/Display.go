/*
	Author : Pakshal Jain 
	Date : 17/02/2023
	Program : To Print Below Given Pattern 

	Input : 4
	Output : # 1 * # 2 * # 3 * # 4 *
*/

//Required Libraries
package main
import "fmt";

////////////////////////////////////////////////////////////////////////

//Function To Display Given Pattern 
func Display(No int) {
	var i int = 0;

	//Logic To Print
	for i = 1;i <= No;i++ {
		fmt.Printf("#  %d  *  ",i);
	}
}

/////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var No int = 0;

	fmt.Println("Jay Ganesh....");

	//Taking Input From User
	fmt.Println("Enter Number Till You Want To Print");
	fmt.Scanf("%d",&No);

	//Call To Display Function
	Display(No);
}