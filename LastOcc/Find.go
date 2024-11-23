/*
    Author : Pakshal Shashikant Jain 
    Date : 11/07/2023
    Program : Accept N numbers from user and accept one another number as NO ,
              return index of last occurrence of that NO.

              Input : N : 6
                      NO: 66
                      Elements : 85 66 3 66 93 88
              Output : 3

              Input : N : 6
                      NO: 93
                      Elements : 85 66 3 66 93 88
              Output : 4
            
              Input : N : 6
                      NO: 12
                      Elements : 85 11 3 15 11 111
              Output : -1 
*/

//Required Libraries
package main 
import "fmt"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Find Last Occurance of Entered Numbers
func LastOcc(isize int,arr []int,NO int) int {
	var i int = 0;

	//Logic To Find Last Occurance of Entered Numbers
	for i = isize - 1;i > 0;i-- {
		if arr[i] == NO {
			break;
		}
	}

	//Handeling Conditionss
	if arr[i] == NO {
		return i;
	} else {
		return -1;
	}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
func main() {
	var iret int = 0;
	var isize int = 0;
	var NO int = 0;
	var arr []int;
	var i int = 0;

	fmt.Println("Jay Ganesh......");

	//Taking input from user
	fmt.Println("Enter number of Elements you want in array : ");
	fmt.Scan(&isize);

	//Allocating Memory to array 
	arr = make([]int,isize);

	//INserting ELements in array 
	fmt.Println("Enter Elements in array : ");
	for i = 0;i < isize;i++ {
		fmt.Printf("Enter Element Number : %d \n",i + 1);
		fmt.Scan(&arr[i]);
	}

	//Taking another number from user To Find Last Occurance of 
	fmt.Println("Enter Number You Want To Find Last Occurance of Entered Number");
	fmt.Scan(&NO);

	//Call To LastOcc Function
	iret = LastOcc(isize,arr,NO);

	//Printing Last Occurance of Entered NUmber found 
	fmt.Printf("Last Occurance of %d is at index Number %d",NO,iret);
}	