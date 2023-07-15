/*
    Author : Pakshal Shashikant Jain 
    Date : 15/07/2023
    Program : Accept N numbers from user and return product of all odd elements.
              Input : N : 6
                      Elements : 15 66 3 70 10 88
                      Output : 45
              Input : N : 6
                      Elements : 44 66 72 70 10 88
                      Output : 0
*/

//Required Libraries
package main 
import "fmt"

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Calcualte Product
func Product(isize int,arr []int) int {
	var i int = 0;
	var imult int = 1;

	//Logic 
	for i = 0;i < isize;i++ {
		if ((arr[i] % 2) != 0) {
			imult = imult * arr[i];
		} 
	}

	if (imult == 1) {
		imult = 0;
	}

	return imult; 
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
func main() {
	var isize int = 0;
	var i int = 0;
	var iret int = 0;
	var arr []int;

	fmt.Println("Jay Ganesh....");
	fmt.Println("Enter Number of Elements You Want");
	fmt.Scanf("%d",&isize);

	if (isize < 0) {
		isize = -isize;
	}

	//Allocating Memory To array 
	arr = make([]int,isize);

	//Inserting Elements in array
	fmt.Println("Enter Elements in array");
	for i = 0;i < isize;i++ {
		fmt.Printf("Enter Element Number : %d \n",i + 1);
		fmt.Scan(&arr[i]);
	}

	//Call To Product Function
	iret = Product(isize,arr);	

	//Printing Product of Elements
	fmt.Println("Poduct of Odd Elements is :",iret);
}