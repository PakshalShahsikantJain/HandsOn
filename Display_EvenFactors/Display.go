/*
	Auhtor : Pakshal Jain
	Date : 20/09/2022
	Program : To Display Even Factors of Entered Number
*/

//Requried Libraries
package main
import "fmt";

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Display Even Factors
func EvenFact(No int) {
	var i int = 0;
	
	fmt.Println("Printing Even Factors of Given Number...");
	for i = 1;i <= No;i++ {
		if No % i == 0 && i % 2 == 0{
			fmt.Printf("%d\t",i);
		}
	} 
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

func main() {
	var No int = 0;

	fmt.Println("Ganapati Bappa Morya...");
	fmt.Println("Enter One Number....");
	fmt.Scanf("%d",&No);

	//Call To Even Function
	EvenFact(No);
}