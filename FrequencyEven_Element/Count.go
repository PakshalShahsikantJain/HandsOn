/*
    Author : Pakshal Shashikant Jain 
    Date : 26/06/2023
    Program : Accept N numbers from user and return frequency of even numbers.
              Input : N : 6
                      Elements : 85 66 3 80 93 88
              Output : 3 
*/

///////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
package main 
import "fmt"

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Calculate Frequency 
func Frequency(arr []int,isize int) int {
	var i int = 0;
	var icnt int = 0;
	
	//Logic To Calculate Frequency 
	for i = 0;i < isize;i++ {
		if (( arr[i] % 2 ) == 0) {
			icnt = icnt + 1;		
		}
	}

	return icnt;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var isize int = 0;
	var arr []int;
	var i int = 0;
	var iret int = 0;

	fmt.Println("Jay Ganesh.......");

	//Taking input From user
	fmt.Println("Enter Number of Elements You Want in array");
	fmt.Scan(&isize);

	//Allocating Memory To array
	arr = make([]int,isize);

	//Inserting Elements in array
	fmt.Println("Enter Elements In array : ");
	for i = 0;i < isize;i++ {
		fmt.Println("Enter Element Number",i + 1);
		fmt.Scan(&arr[i]);
	}

	//Call To Frequecy Function
	iret = Frequency(arr,isize);

	//Priting Frequecy Calculated
	fmt.Println("Frequecy of Even Elements From Entered N Numbers is : ",iret);
}