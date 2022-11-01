/*
	Author : Pakshal Jain
	Date : 18/09/2022
	Program : To Print Hello if Entered Number is Less 10 or else Print Demo
*/

//Required Packages
package main;
import "fmt";

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Print Output
func Display(No int) {
	if No < 10 {
		fmt.Println("Hello");
	}else {
		fmt.Println("Demo");
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

func main() {
	var No int = 0;

	fmt.Println("Jay Ganesh......");
	
	fmt.Println("Enter One Number....");
	fmt.Scanf("%d",&No);

	//Call To Display Function
	Display(No);
}