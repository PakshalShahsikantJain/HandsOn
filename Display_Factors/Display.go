/*
	Author : Pakshal Jain
	Date : 24/09/2022
	Program : To Display Factors of Entered Number 
*/

//Rquired Libraries
package main;
import "fmt";

//Function To Display Factors
func Display(No int){
	var i int = 0;

	if No < 0 {
		No = -No;
	}

	fmt.Println("Factors of Entered NUmber is As Follows...");
	for i = 1;i <= No;i++ {
		if No % i == 0 {
			fmt.Printf("%d\t",i);
		}
	}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

func main() {
	var No int = 0;

	fmt.Println("Jay Ganesh....");
	
	fmt.Println("Enter One Number...");
	fmt.Scanf("%d",&No);

	//Call To Display Function
	Display(No);
}