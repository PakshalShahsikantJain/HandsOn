/*
    Author : Pakshal Shashikant Jain 
    Date : 31/07/2023
    Program : Write a program which displays ASCII table. Table contains symbol,
              Decimal, Hexadecimal and Octal representation of every member from
              0 to 255
*/

//Required libraries
package main
import "fmt"

//Function To Display AsciiTable
func AsciiTable() {
	var i int = 0;

	fmt.Println("---------------------Ascii Table----------------------------------");
	
	//Logic 
	fmt.Printf("Decimal \t Hexadecimal \t Octal \tSymbol\n");
	for i = 0;i <= 255;i++ {
		fmt.Printf("%d \t\t %#x \t\t %o \t %c\n",i,i,i,i);
		fmt.Println();
	}
}

//Main function
func main() {
	fmt.Println("Jay Ganesh......");

	//Call To Ascii Table
	AsciiTable();
}