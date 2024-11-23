/*
    Author : Pakshal Shashikant Jain 
    Date : 05/07/2023
    Program : Accept N numbers from user and accept one another number as NO return frequency of NO form it.
              Input : N : 6
                      NO: 66
                      Elements : 85 66 3 66 93 88
              Output : 2

              Input : N : 6
                      NO: 12
                      Elements : 85 11 3 15 11 111
              Output : 0 
*/

//Required Libraries
package main
import "fmt"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Calculate Frequency 
func Freq(arr []int,isize int,NO int) int {
	var i int = 0;
	var icnt int = 0;

	//Logic To Count 
	for i = 0;i < isize;i++ {
		if arr[i] == NO {
			icnt = icnt + 1;
		}
	}

	return icnt;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
func main() {
	var isize int = 0;
	var arr []int;
	var i int = 0;
	var iret int = 0;
	var NO int = 0;

	fmt.Println("Jay ganesh.....");

	//Taking Input From user
	fmt.Println("Enter Number of Elements you want in array");
	fmt.Scan(&isize);

	//Allocating Memory To Array
	arr = make([]int,isize);

	//Inserting Elememts in array 
	fmt.Println("Enter Elements in array");
	for i = 0;i < isize;i++ {
		fmt.Println("Enter Element Number : ",i + 1);
		fmt.Scan(&arr[i]);
	}

	//Taking another input from user
	fmt.Println("Enter Number To Count Frequency of : ");
	fmt.Scan(&NO);

	//Call To Freq Function
	iret = Freq(arr,isize,NO);

	//Printing Frequency Calculated
	fmt.Println("Frequency of Entered N number is : ",iret);
}