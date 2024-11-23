/*
    Author : Pakshal Shashikant Jain 
    Date : 18/07/2023
    Program : Accept N numbers from user and display all such numbers which contains
              3 digits in it.
              Input : N : 6
                      Elements : 8225 665 3 76 953 858
              Output : 665 953 858
*/

//Required Libraries
package main 
import "fmt"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Display All Such Elements Which contains Three Digits in it
func Digits(isize int,arr []int) {
	var i int = 0;	
	var icnt int = 0;
	var no int = 0;
	var Digi int = 0;

	//Logic To Display
	fmt.Println("Printing Such Elements Which contains 3 Digit in it");
	for i = 0;i < isize;i++ {
		no = arr[i];

		for no != 0 {
			Digi = no % 10;
			icnt = icnt + 1;
			no = no / 10;
		}

		if (icnt == 3) {
			fmt.Printf("%d\t",arr[i]);
		}
		icnt = 0;
	}

	_ = Digi;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
func main() {
	var isize int = 0;
	var arr []int;
	var i int = 0;

	fmt.Println("Jay Ganesh....");
	
	//Taking input from user
	fmt.Println("Enter Number of Elements You Want in array ");
	fmt.Scan(&isize);

	//Allocating Memory to array 
	arr = make([]int,isize);

	//Inserting Element in array
	fmt.Println("Enter Elements in array");
	for i = 0;i < isize;i++ {
		fmt.Println("Enter Element Number : ",i + 1);
		fmt.Scan(&arr[i]);
	}

	//Call To Digits Function
	Digits(isize,arr);
}