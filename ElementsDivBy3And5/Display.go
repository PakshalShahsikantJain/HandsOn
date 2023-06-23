/*
    Author : Pakshal Shashikant Jain 
    Date : 23/06/2023
    Program : Accept N numbers from user and display all such elements which are
              divisible by 3 and 5.
              
              Input :  N : 6
                       Elements : 85 66 3 15 93 88
              
              Output : 15 
*/

//Required Libraries
package main
import "fmt"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To display Elements Divisible By 3 and 5
func Display(arr []int,isize int) {
	var i int = 0;

	//Logic 
	fmt.Println("Element Divisible By 3 and 5 are : ");
	for i = 0;i < isize;i++ {
		if (((arr[i] % 3) == 0)&&((arr[i] % 5) == 0)) {
			fmt.Printf("%d\n",arr[i]);
		}
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var isize int = 0;
	var arr []int;
	var i int = 0;

	fmt.Println("Ganapati Bappa Morya....");

	//Taking Input From User
	fmt.Println("Enter Number of Elements You Want in array : ");
	fmt.Scan(&isize);

	//allocating memory to array
	arr = make([]int,isize);

	//Inserting elements in array
	fmt.Println("Enter Elements in array : ");
	for i = 0;i < isize;i++ {
		fmt.Printf("Enter Element Number : %d\n",i + 1);
		fmt.Scan(&arr[i]);
	}

	//Call To Display Function
	Display(arr,isize);
}