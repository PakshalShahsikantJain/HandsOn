/*
	Author : Pakshal Jain
	Date : 04/10/2022
	Program : To Print Non factors of Entered Number
*/

//Required Libraries
package main
import "fmt"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

func NonFact(No int) {
	var i int = 0;

	fmt.Println("Printing NonFactors of Entered Number...");
	for i = 1;i < No;i++ {
		if No % i != 0 {
			fmt.Printf("%d\t",i);
		}
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

func main() {
	var no int = 0;

	fmt.Println("Jay Ganesh...");
	
	fmt.Println("Enter One Number");
	fmt.Scanf("%d",&no);
	
	//Call To Nonfact Function	
	NonFact(no);
}