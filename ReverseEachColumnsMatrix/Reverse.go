/*
    Author : Pakshal Shashikant Jain 
    Date : 7/08/2024
    Program : Write a program which accept matrix and reverse the contents of each columns. 
*/

//Required Libraries
package main;
import "fmt"

//Function to Reverse each columns of the matrix 
func ReverseColumn(arr[][] int,irow int,icol int) {
	var i int = 0;
	var j int = 0;

	//Logic to reverse each columns of the matrix 
	fmt.Println("Updated matrix is as follows : ");
	for i = irow - 1;i > -1;i-- {
		for j = 0;j < icol ;j++ {
			fmt.Printf("%d\t",arr[i][j]);
		}
		fmt.Printf("\n");
	}
}

//Main Function
func main() {
	var arr[][] int = nil;
	var rows int = 0;
	var cols int = 0;
	var i int = 0;
	var j int = 0;

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
			fmt.Printf("Enter element no %d : \n",(j + 1));
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

	//Call to ReverseColumn function
	ReverseColumn(arr,rows,cols);
}