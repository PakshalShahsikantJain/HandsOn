/*
    Author : Pakshal Shashikant Jain 
    Date : 24/06/2023
    Program : Accept N numbers from user and display all such elements which are
              multiples of 11.

              Input : N : 6
                      Elements : 85 66 3 55 93 88
                
              Output : 66 55 88 
*/

//Required libraries
package main
import "fmt"

//////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Display Elements Which are Multiples of 11
func Display(arr[] int,isize int) {
	var i int = 0;

	//Printing Elements Which are Multiples of 11 
	fmt.Println("Elements Which are Multiples of 11 are : ");
	for i = 0;i < isize;i++ {
		if ((arr[i] % 11) == 0) {
			fmt.Printf("%d\t",arr[i]);
		}
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var isize int = 0;
	var i int = 0;
	var arr []int;

	fmt.Println("Jay ganesh.....");

	//Taking Input From User
	fmt.Println("Enter Number of Elements You Want in array");
	fmt.Scan(&isize);

	//Allocating Memory To Array 
	arr = make([]int,isize);

	//Inserting Elements in array
	fmt.Println("Enter Elements in array");
	for i = 0;i < isize;i++ {
		fmt.Printf("Enter Element Number %d : \n",i + 1);
		fmt.Scan(&arr[i]);
	}
	
	//Call To Display Function
	Display(arr,isize);
}