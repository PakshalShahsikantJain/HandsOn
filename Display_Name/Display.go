/*
	Author : Pakshal Jain
	Date : 09/10/2022
	Program : To Accept Full name from user and Display It
*/

//Required Libraries
package main
import "fmt"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

func main() {
	var str string = " ";
	var str2 string = " ";

	fmt.Println("Jay Ganesh....");
	
	fmt.Println("Enter Your First Name");
	fmt.Scan(&str);

	fmt.Println("Enter Your Last Name");
	fmt.Scan(&str2);

	fmt.Printf("Your Full Name is %s %s",str,str2);
}