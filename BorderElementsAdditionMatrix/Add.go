/*
    Author : Pakshal Shashikant Jain
    Date : 26/08/2024
    Program : Write a program which accept matrix from user and return addition of Border
              elements.
*/

//Required Libraries
package main;
import "fmt"

//Function to add Border elements
func AddBorder(arr[][] int,irow int,icol int) int {
	var isum int = 0;
	var i int = 0;
	var j int = 0;

	//Logic to add Border elements of matrix
	for i = 0;i < irow;i++ {
		for j = 0;j < icol;j++ {
            if((i == 0)||(j == 0)||(i == (irow - 1))||(j == (icol - 1))) {
                isum = isum + arr[i][j];
            }
		}
	}

	//Returning sum of Border elements
	return isum;
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

	//Call to AddBorder function
	iret = AddBorder(arr,rows,cols);

	//Printing addition of Border elements
	fmt.Println("Addition of Border elements is : ",iret);
}