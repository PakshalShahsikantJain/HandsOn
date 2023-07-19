/*
    Author : Pakshal Shashikant Jain 
    Date : 16/07/2023
    Program : Accept N numbers from user and return the Smallest number.
              Input : N : 6
                      Elements : 85 66 3 66 93 88
              Output : 3 
*/

//Required Libraries
package main
import "fmt"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Find Minimum Number from Entered N Number
func Minimum(isize int,arr []int) int {
	var i int = 0;
	var imin int = 0;

	//Logic To Find
	imin = arr[0];
	for i = 0;i < isize;i++ {
		if arr[i] < imin {
			imin = arr[i];
		}
	}

	return imin;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
func main() {
	var isize int = 0;
	var arr []int;
	var i int = 0;
	var iret int = 0;

	fmt.Println("Jay Ganesh......");

	//Taking Input from user
	fmt.Println("Enter Number of Element You Want in array");
	fmt.Scan(&isize);

	//Handeling Conditions
	if (isize < 0) {
		isize = -isize;
	}

	//Allocating Memory To array 
	arr = make([]int,isize);

	//Inserting Elements in array 
	fmt.Println("Enter Elements in array ");
	for i = 0;i < isize;i++ {
		fmt.Println("Enter Element Number ",i + 1);
		fmt.Scan(&arr[i]);
	} 

	//Call To Minimum function
	iret = Minimum(isize,arr);
	
	//Printing Minimum Element From Entered N Numbers
	fmt.Println("Printing Minimum From  Entered N Numbers",iret);
}