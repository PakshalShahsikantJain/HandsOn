/*
    Author : Pakshal Shashikant Jain
    Date : 07/06/2023
    Program : Accept N numbers from user and display all such elements which are
              divisible by 5.
              
              Input : N : 6
              Elements : 85 66 3 80 93 88
              Output : 85 80 
*/

//Required Libraries
package main
import "fmt"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Display Elements Which are Divisible By 5
func Display(arr[] int,isize int) {
	var i int = 0;

	fmt.Println("Elements Divisible By 5 Are : ");
	for i = 0;i < isize;i++ {
		if ((arr[i] % 5) == 0) {
			fmt.Printf("%d\t",arr[i]);
		}
	}
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var isize int = 0;
	var i int = 0;

	var arr[] int;

	fmt.Println("Jay Ganesh....");

	//Taking input From user
	fmt.Println("Enter Number of Elements You Want in array");
	fmt.Scan(&isize);

	//Allocating Memory To Array
	arr = make([]int,isize);

	//Inserting Elements in array
	fmt.Println("Enter Elements in Array : ");
	for i = 0;i < isize;i++ {
		fmt.Printf("Enter Element Number %d\n",i + 1);
		fmt.Scan(&arr[i]);
	}

	//Call To Display Function
	Display(arr,isize);
}