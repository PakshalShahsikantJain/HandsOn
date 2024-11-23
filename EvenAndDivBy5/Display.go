/*
    Author : Pakshal Shashikant Jain 
    Date : 12/06/2023

    Program : Accept N numbers from user and display all such elements which are even and divisible by 5.
              Input : N : 6
              Elements : 85 66 3 80 93 88
              Output : 80 
*/

//Required Libraries
package main
import "fmt"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Display ELements Which are Even And Divsible By 5
func Display(arr[] int,isize int) {
	var i int = 0;

	//Logic
	fmt.Println("Printing Elements Which are Even and Divisble By 5 are : ");
	for i = 0;i < isize;i++ {
		if(((arr[i] % 2) == 0)&&((arr[i] % 5) == 0)) {
			fmt.Printf("%d\t",arr[i]);
		}
	}
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//main Function
func main() {
	var i int = 0;
	var isize int = 0;
	var arr[] int;
	
	fmt.Println("Jay Ganesh....");

	//Taking input from user
	fmt.Println("Enter number of Elements You Want in array");
	fmt.Scan(&isize);

	//Allocating Memory to array 
	arr = make([]int,isize);

	//Inserting Elements in array 
	fmt.Println("Enter Elements in array : ");
	for i = 0;i < isize;i++ {
		fmt.Printf("Enter Element Number : %d\n",i + 1);
		fmt.Scan(&arr[i]);
	}

	//Call To Display Function
	Display(arr,isize);
}