/*
	Author : Pakshal Jain
	Date : 06/10/2022
	Program : To Calculate Differecnce Between Summation of Nonfactors and factors of Entered Number
*/

//Required Libraries
package main
import "fmt";

//Function To Calculate Difference
func FactDifference(No int) int {
	var i int = 0;
	var sum int = 0;
	var sum2 int = 0;
	var diff int = 0;

	for i = 1;i < No;i++ {
		if No % i == 0 {
			sum = sum + i;
		}else if No % i != 0 {
			sum2 = sum2 + i;
		}
	}

	diff = sum - sum2;

	return diff;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

func main() {
	var No int = 0;
	var iret int = 0;

	fmt.Println("Jay Ganesh....");
	
	fmt.Println("Enter One Number");
	fmt.Scanf("%d",&No);

	//Call To FactDifferecnce Function
	iret = FactDifference(No);
	fmt.Printf("Diffrence Between Summation of Factors and Nonfactors is : %d",iret);
}