/*
    Author : Pakshal Shashikant Jain 
    Date : 06/07/2023
    Program : Accept N numbers from user and accept one another number as NO ,
              check whether NO is present or not.

              Input : N : 6
                      NO: 66
                      Elements : 85 66 3 66 93 88
              Output : TRUE

              Input : N : 6
                      NO: 12
                      Elements : 85 11 3 15 11 111
              Output : FALSE 
*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
package main
import "fmt"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Check Entered Number is Present or Not
func Check(isize int,arr []int,NO int) bool {
	var i int = 0;

	//Logic To Check
	for i = 0;i < isize - 1;i++ {
		if arr[i] == NO {
			break;
		}
	}

	//Handeling Conditions
	if arr[i] == NO {
		return true;
	} else {
		return false;
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var i int = 0;
	var isize int = 0;
	var arr []int;
	var bret bool = false;
	var NO int = 0;

	fmt.Println("Jay ganesh....");

	//Taking Input From user
	fmt.Println("Enter Number of Elements you Want in array");
	fmt.Scan(&isize);

	//Allocating Memory To array 
	arr = make([]int,isize);

	//Inserting Elements in array 
	fmt.Println("Enter Elements in array : ");
	for i = 0;i < isize;i++ {
		fmt.Println("Enter Element Number : ",i + 1);
		fmt.Scan(&arr[i]);
	}

	//Taking another Number from user To Check if it is Present or Not
	fmt.Println("Enter Number You Want Check if it is Present or Not ");
	fmt.Scan(&NO);

	//Call to Check Function
	bret = Check(isize,arr,NO);

	//Handeling Conditions according To Return Value
	if bret == true {
		fmt.Printf("Entered %d number is Present in Entered N Numbers ",NO)
	} else {
		fmt.Printf("Entered %d number is Not Present in Entered N Numbers ",NO)
	}
}