/*
    Author : Pakshal Shashikant Jain 
    Date : 12/07/2023
    Program : Accept N numbers from user and accept Range, Display all elements from
              that range.
              
              Input : N : 6
                      Start: 60
                      End : 90
                      Elements : 85 66 3 76 93 88
              Output : 66 76 88

              Input : N : 6
                      Start: 30
                      End : 50
                      Elements : 85 66 3 76 93 88
              Output : 
*/

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
package main
import "fmt"

//Function To Print Elements Which are In Entered Range
func Range(isize int,arr []int,start int,end int) []int {
	var i int = 0;
	var brr []int;

	//Allocating Memory To array
	brr = make([]int,isize);
	
	//Logic
	for i = 0;i < isize;i++ {
		if ((arr[i] >= start)&&(arr[i] <= end)) {
			brr[i] = arr[i];
		}
	}

	return brr;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
func main() {
	var isize int = 0;
	var i int = 0;
	var arr []int;	
	var iret []int;
	var start int = 0;
	var end int = 0;

	fmt.Println("Jay Ganesh.....");
	
	//Taking Input From User
	fmt.Println("Enter Number of Elements You Want in array");
	fmt.Scan(&isize);

	//Allocating Memory To Array 
	arr = make([]int,isize);
	iret = make([]int,isize);

	//Inserting Elements in array 
	fmt.Println("Enter Elements in array");
	for i = 0;i < isize;i++ {
		fmt.Printf("Enter Element Number %d\n",i + 1);
		fmt.Scan(&arr[i]);
	}

	//Taking Starting Number from user
	fmt.Println("Enter Starting Number of Range");
	fmt.Scan(&start);

	fmt.Println("Enter Ending Number of Range");
	fmt.Scan(&end);

	//Call To Range Function
	iret = Range(isize,arr,start,end);

	//Priting Elements Which are In Entered Range
	fmt.Printf("Priting Elements Which are in Entered Range of %d and %d numbers : \n",start,end);
	for i = 0;i < isize;i++ {
		if iret[i] != 0 {
			fmt.Printf("%d\t",iret[i]);
		}
	}
}