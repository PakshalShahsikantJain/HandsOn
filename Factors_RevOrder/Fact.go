/*
	Author : Pakshal Jain
	Date : 10/03/2022
	Program : To Print Factors of Entered Number in Reverse order
*/

//Requried Libraries
package main
import "fmt"

//Function To Print 
func RevFact(No int) {
	var i int = 0;

	fmt.Println("Factors of Entered Number in Reverse order is : ");
	for i = No - 1;i > 0;i-- {
		if No % i == 0 {
			fmt.Printf("%d\t",i);
		}
	}
}

//Main Function
func main() {
	var no int = 0;

	fmt.Println("Jay Ganesh...");

	fmt.Println("Enter One Number..");
	fmt.Scanf("%d",&no);

	//Call To RevFact Function
	RevFact(no);
}