/*
    Author : Pakshal Shashikant Jain 
    Date : 18/07/2021
    Program : Accept N numbers from user and display summation of digits of each number.
              Input : N : 6
                      Elements : 8225 665 3 76 953 858
              Output : 17 17 3 13 17 21 
*/

//Required Libraires
package main
import "fmt"

////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Find Summation
func Summation(isize int,arr []int) {
	var i int = 0;
	var idigits int = 0;
	var No int = 0;
	var isum int = 0;

	//Logic
	fmt.Println("Summation of Digits of Each Number is as Follow");
	for i = 0;i < isize;i++ {
		No = arr[i];

		for No != 0 {
			idigits = No % 10;
			isum = isum + idigits;
			No = No / 10;			
		}

		fmt.Printf("%d\t",isum);
		isum = 0;
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
func main() {
	var isize int = 0;
	var arr []int;
	var i int = 0;

	fmt.Println("Ganapati Bappa Morya");

	//Taking input from user
	fmt.Println("Enter Number of Elements you want in array");
	fmt.Scan(&isize);

	//Allocating Memory To array 
	arr = make([]int,isize);

	//Inserting Elements in array
	fmt.Println("Enter Elements in array");
	for i = 0;i < isize;i++ {
		fmt.Println("Enter Element Number : ",i + 1);
		fmt.Scan(&arr[i]);
	}

	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	//Call To Summation function
	Summation(isize,arr);
}