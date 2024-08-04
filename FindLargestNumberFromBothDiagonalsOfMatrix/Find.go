/*
    Author : Pakshal Shashikant Jain
    Date : 04/08/2024
    Program : Write a program which accept matrix and return largest number from both the
              diagonals 
*/

//Required Libraries
package main;
import "fmt"

//Function to Find largest no from both the digonals of matrix
func MaxDiagonal(arr[][] int,irow int,icol int) int {
	var imax int = 0;
	var i int = 0;
	var j int = 0;

	//Logic to find largest no
	for i = 0;i < irow;i++ {
		for j = 0;j < icol;j++ {
			if((i == j)||(i + j)==(icol - 1)) {
				if(arr[i][j] > imax) {
					imax = arr[i][j];
				}
			}
		}
	}

	//Returning largest no
	return imax;
}

//Main Function
func main() {
	var arr[][] int = nil;
	var rows int = 0;
	var cols int = 0;
	var i int = 0;
	var j int = 0;
	var iret int = 0;

	fmt.Println("Jay Ganesh....");

	//Taking input from user
	fmt.Print("Enter Number of Rows : ");
	fmt.Scan(&rows);

	fmt.Print("Enter Number of Columns : ");
	fmt.Scan(&cols);

	//Allocating memory for matrix
	arr = make([][]int,rows);

	for i = 0;i < rows;i++ {
		arr[i] = make([]int,cols);
	} 
	
	//Inserting elements in matrix 
	fmt.Println("Enter elements of matrix : ");
	for i = 0;i < rows;i++ {
		fmt.Printf("---Enter elements of %d row : ---\n",(i + 1));
		for j = 0;j < cols;j++ {
			fmt.Printf("Enter element no %d : ",(j + 1));
			fmt.Scan(&arr[i][j]);
		}
	}

	//Printing elements of matrix
	fmt.Println("Elements of matrix are : ");
	for i = 0;i < rows;i++ {
		for j = 0;j < cols;j++ {
			fmt.Printf("%d\t",arr[i][j]);
		}
		fmt.Printf("\n");
	}

	//Call to MaxDiagonal function
	iret = MaxDiagonal(arr,rows,cols);

	//Printing larget no 
	fmt.Println("Largest No from both the diagonal elements of matrix is : ",iret);
}