/*
    Author : Pakshal Shashikant Jain 
    Date : 07/07/2023
    Program : Accept N numbers from user and accept one another number as NO ,
                return index of first occurrence of that NO.

    Input : N : 6
            NO: 66
            Elements : 85 66 3 66 93 88
    Output : 1

    Input : N : 6
            NO: 12
            Elements : 85 11 3 15 11 111
    Output : 0 
*/

//Required Libraries
package main 
import "fmt"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Find First Occurance of Entered Number in Entered N Numbers
func FirstOcc(isize int,arr []int,NO int) int {
	var i int = 0;

	//Logic 
	for i = 0;i < isize - 1;i++ {
		if arr[i] == NO {
			break;
		}
	}
	
	//Handeling Conditions
	if arr[i] == NO {
		return i;
	} else {
		return -1;
	}
}

/////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var isize int = 0;
	var arr []int;
	var i int = 0;
	var NO int = 0;
	var iret int = 0;

	fmt.Println("Jay ganesh.....");

	//Taking Input From user
	fmt.Println("Enter Number of Elements in Array : ");
	fmt.Scan(&isize);

	arr = make([]int,isize);

	//Inserting Elements in Array
	fmt.Println("Enter Elements in array : ");
	for i = 0;i < isize;i++ {
		fmt.Printf("Enter Element Number : %d \n",i + 1);
		fmt.Scan(&arr[i]);
	} 

	//Taking Another number from User To Check
	fmt.Println("Enter Number You Want To Check");
	fmt.Scan(&NO);

	//Call To FirstOcc Function
	iret = FirstOcc(isize,arr,NO);

	//Printing First occurance of Entered Number
	fmt.Printf("Entered Number %d is Present At index Number : %d",NO,iret);
}