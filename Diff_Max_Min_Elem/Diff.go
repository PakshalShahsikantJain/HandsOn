/*
    Author : Pakshal Shashikant Jain 
    Date : 16/07/2023
    Program : Accept N numbers from user and return the difference between largest
              and smallest number.
              Input : N : 6
                      Elements : 85 66 3 66 93 88
              Output : 90 (93 -3) 
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
package main
import "fmt"

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function to Calculate Difference
func Diff(isize int,arr []int) int {
	var i int = 0;
	var imax int = 0;
	var imin int = 0;
	var diff int = 0;

	//Logic
	imax = arr[0];
	imin = arr[0];
	for i = 0;i < isize;i++ {
		if (arr[i] > imax) {
			imax = arr[i];
		} else if (arr[i] < imin) {
			imin = arr[i];
		}
	}

	diff = imax - imin;

	return diff;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
func main() {
	var isize int = 0;
	var arr []int;
	var iret int = 0;
	var i int  = 0;

	fmt.Println("Jay Ganesh....");
	
	//Taking input from user
	fmt.Println("Enter Number of Elements You Want in array");
	fmt.Scan(&isize);

	//Handeling conditions
	if (isize < 0) {
		isize = -isize;
	}

	//Allocating Memory To array 
	arr = make([]int,isize);

	//Inserting Elements in array 
	fmt.Println("Enter Elements in array");
	for i = 0;i < isize;i++ {
		fmt.Println("Enter Element Number : ",i + 1);
		fmt.Scan(&arr[i]);
	}

	//Call To Difference Function
	iret = Diff(isize,arr);

	//Printing Difference Calculated
	fmt.Printf("Difference Between Max and Min Element is : %d",iret);
}