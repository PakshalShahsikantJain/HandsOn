/*
    Author : Pakshal Shashikant Jain
    Date : 04/08/2024
    Program : Write a program which accept matrix and display addition of elements From each
              column  
*/

//Required Libraries
package main;
import "fmt"

//Function to add columns elements
func AddColumns(arr[][] int,irow int,icol int) {
	var isum int = 0;
	var i int = 0;
	var j int = 0;

	//Logic to add columns elements of matrix
	fmt.Println("Addition of elements of each columns is as follows : ");
	for i = 0;i < irow;i++ {
		for j = 0;j < icol;j++ {
			isum = isum + arr[j][i];
		}
		fmt.Printf("%d\t",isum);

		isum = 0;
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

	//Call to AddColumns function
	AddColumns(arr,rows,cols);
}