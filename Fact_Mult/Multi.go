/*
	Author : Pakshal Jain
	Date : 01/10/2022
	Prorgam : To Calcualte Multiplication of Factors of Entered Number
*/

//Requried Libraries
package main
import "fmt";

//Function To calculate  Multiplication of Factors of Entered Number
func Fact_Mult(No int) int {
	var i int = 0;
	var Mult int = 1;

	//Logic
	for i = 1;i < No;i++ {
		if No % i == 0 {
			Mult = Mult * i;
		}
	}

	return Mult;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////

func main() {
	var No int = 0;
	var iret int = 0;

	fmt.Println("Jay Ganesh...");
	fmt.Println("Enter One Number....");
	fmt.Scanf("%d",&No);

	//Call To Fact_Mult
	iret = Fact_Mult(No);
	fmt.Printf("Multiplication of Factors of Entered Number is : %d",iret);
}