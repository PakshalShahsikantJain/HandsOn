/*
    Author : Pakshal Shashikant Jain 
    Date : 04/07/2023
    Program : Accept N numbers from user and return frequency of 11 form it.
              Input : N : 6
                      Elements : 85 66 3 15 93 88
              Output : 0

              Input : N : 6
                      Elements : 85 11 3 15 11 111
              Output : 2
*/

//Required Libraries
package main
import "fmt"

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Calculate Frequency of 11 Number in Entered Elements
func Freq(arr []int,isize int) int {
	var i int = 0;
	var icnt int = 0;

	//Logic 
	for i = 0;i < isize;i++ {
		if (arr[i] == 11) {
			icnt = icnt + 1;
		}
	}

	return icnt;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var isize int = 0;
	var arr []int;
	var i int = 0;
	var iret int = 0;

	fmt.Println("Jay Ganesh....");
	
	//Taking Input From User
	fmt.Println("Enter Number of Elements you want in array : ");
	fmt.Scan(&isize);

	//Allocating Memory to Array
	arr = make([]int,isize);

	//Inserting Elements In array
	fmt.Println("Enter Elements in array");
	for i = 0;i < isize;i++ {
		fmt.Println("Enter Element Number : ",i + 1);
		fmt.Scan(&arr[i]);
	}

	//Call To Freq Function
	iret = Freq(arr,isize);

	//Printing Frequency Calculated
	fmt.Println("Frequency of 11 Number in Entered Elements is : ",iret);
}	