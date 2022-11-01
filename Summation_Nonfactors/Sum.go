/*
	Author : Pakshal Jain
	Date : 05/10/2022
	Program : To Print Summation of Nonfactors of Entered Number
*/

//Required Libraries
package main
import "fmt"

//Function To Calculate Summation of Nonfactors of Number
func Summation(no int) int {
	var i int = 0;
	var sum int = 0;

	//Logic
	for i = 1;i < no;i++ {
		if no % i != 0 {
			sum = sum + i;
		}
	}

	return sum;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

func main() {
	var No int = 0;
	var iret int = 0;

	fmt.Println("Jay Ganesh....");
	
	fmt.Println("Enter One Number..");
	fmt.Scanf("%d",&No);
	
	//Call To Summation Function
	iret = Summation(No);
	fmt.Printf("Summation of Nonfactors of Entered Numbe is : %d",iret);
}
