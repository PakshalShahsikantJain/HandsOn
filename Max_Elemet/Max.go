/*
    Author : Pakshal Shashikant Jain 
    Date : 16/07/2023
    Program : Accept N numbers from user and return the largest number.
              Input : N : 6
                      Elements : 85 66 3 66 93 88
              Output : 93 
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
package main
import "fmt"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Find Maximum Number 
func Maximum(isize int,arr []int) int {
	var i int = 0;
	var imax int = 0;

	imax = arr[i];
	for i = 0;i < isize;i++ {
		if arr[i] > imax {
			imax = arr[i];
		}
	}

	return imax;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
func main() {
	var i int = 0;
	var isize int = 0;
	var arr []int;
	var iret int;

	fmt.Println("Jay Ganesh.....");

	//Taking Input from user
	fmt.Println("Enter Number of Elements You Want in array ");
	fmt.Scan(&isize);

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

	//Call To maximum function
	iret = Maximum(isize,arr);

	//Printing Maximum Element from Entered N Numbers
	fmt.Printf("Maximum Number from Entered Elements is : %d \t",iret);
}
