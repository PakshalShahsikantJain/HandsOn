/*
    Author : Pakshal Shashikant Jain 
    Date : 03/08/2024
    Program : Write a program which accept matrix and one number from user and return
              frequency of that number. 
*/

//Required Libraries
package main
import "fmt"

//Function to count frequency of entered number
func CountFrequency(arr[][] int,irow int,icol int,ino int) int {
	var i int = 0;
	var j int = 0;
	var icnt int = 0;

	//Logic to count frequecny of entered number
	for i = 0;i < irow;i++ {
		for j = 0;j < icol;j++ {
			if(arr[i][j] == ino) {
				icnt++;
			}
		}
	}

	return icnt;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main function
func main() {
	var arr[][] int = nil;
	var irow int = 0;
	var icol int = 0;
	var i int = 0;
	var j int = 0;
	var ino int = 0;
	var iret int = 0;

	fmt.Println("Jay Ganesh....");

	//Taking input from user
	fmt.Print("Enter number of rows : ");
	fmt.Scan(&irow);

	fmt.Print("Enter number of cols : ");
	fmt.Scan(&icol);

	//Allocating memory for matrix 
	arr = make([][]int,irow);

	for i = 0;i < irow;i++ {
		arr[i] = make([]int,icol);
	}

	//Inserting elements in matrix
	fmt.Println("Insert elements in matrix : ");
	for i = 0;i < irow;i++ {
		fmt.Printf("Enter elements of %d row : \n",(i + 1));
		for j = 0;j < icol;j++ {
			fmt.Printf("Enter element no %d : ",(j + 1));
			fmt.Scan(&arr[i][j]);
		}
	}

	//Taking no as input from user
	fmt.Printf("Enter one number to count frequency of : ");
	fmt.Scan(&ino);

	//Printing elements of matrix 
	fmt.Println("Elements of matrix are : ");
	for i = 0;i < irow;i++ {
		for j = 0;j < icol;j++ {
			fmt.Printf("%d \t",arr[i][j]);
		}
		fmt.Println();
	}

	//Call To count frequency function
	iret = CountFrequency(arr,irow,icol,ino);	
	//Printing frequency of entered number
	fmt.Printf("Frequency of entered no %d is : %d",ino,iret);
}
