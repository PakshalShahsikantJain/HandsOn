/*
    Author : Pakshal Shashikant Jain 
    Date : 07/06/2023
    Program :  Accept N numbers from user and return difference between summation
               of even elements and summation of odd elements.
               Input : N : 6
               Elements : 85 66 3 80 93 88
               Output : 53 (234 - 181) 
*/

//Required Libraries
package main
import "fmt"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function to Calculate Differnce
func Diff(isize int,arr[] int) int {
	var i int = 0;
	var diff int = 0;
	var SumEven int = 0;
	var SumOdd int = 0;

	//Logic To Calcualte Difference
	for i = 0;i < isize;i++ {
		if ((arr[i] % 2) == 0) {
			SumEven = SumEven + arr[i];
		} else {
			SumOdd = SumOdd + arr[i];
		}
	}

	diff = SumEven - SumOdd;

	return diff;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var isize int = 0;
	var i int = 0;
	var arr[] int;
	var iret int = 0;

	fmt.Println("Ganapati Bappa Morya.....");

	//Taking Input From User
	fmt.Println("Enter Number of Elements You Want in Array");
	fmt.Scan(&isize);

	//allocating Memory To array 
	arr = make([]int,isize);

	//Inserting Value in array 
	fmt.Println("Enter Elements in array")
	for i = 0;i < isize;i++ {
		fmt.Printf("Enter Element Number %d \n",i + 1);
		fmt.Scan(&arr[i]);
	}

	//Call To Diff Function
	iret = Diff(isize,arr);

	//Printing Difference Calculated
	fmt.Println("Difference Between Summation of Even And Odd Elements is :",iret);
}