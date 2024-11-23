/*
    Author : Pakshal Shashikant Jain 
    Date : 27/06/2023
    Program : Accept N numbers from user and return difference between frequency of
              even number and odd numbers.
              Input : N : 7
                      Elements : 85 66 3 80 93 88 90

              Output : 1 (4 -3)

*/

//Required Libraries
package main 
import "fmt"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Calculate Difference
func Diff(isize int,arr []int) int {
	var icntEven int = 0;
	var icntOdd int = 0;
	var i int = 0;
	var diff int = 0;

	//Logic 
	for i = 0;i < isize;i++ {
		if ((arr[i] % 2) == 0) {
			icntEven = icntEven + 1;		
		} else {
			icntOdd = icntOdd + 1;
		}
	}

	diff = icntEven - icntOdd;

	return diff;
}

//Main Function
func main() {
	var i int = 0;
	var isize int = 0;
	var arr []int;
	var iret int = 0;

	fmt.Println("Ganapati Bappa Morya : ");

	//Taking input From User
	fmt.Println("Enter Number of Elements You Want in array : ");
	fmt.Scan(&isize);

	//Allocating Memory To array
	arr = make([]int,isize);

	//Inserting Elements in array
	fmt.Println("Enter Elements in array : ");
	for i = 0;i < isize;i++ {
		fmt.Println("Enter Element Number : ",i + 1);
		fmt.Scan(&arr[i]);
	}

	//Call To Diff Function
	iret = Diff(isize,arr);

	//Printing Difference Calculated
	fmt.Println("Difference Between Frequency of Even and Odd Elements is : ",iret);
}