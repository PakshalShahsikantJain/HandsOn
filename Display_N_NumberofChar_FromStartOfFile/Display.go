/*
    Author : Pakshal Shashikant Jain 
    Date : 28/05/2024
    Program : Write a program which accepts file name and one count from user and read
              that number of characters from starting position.

              Input : Demo.txt 12
              Output : Display first 12 characters from Demo.txt 
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
package main;
import (
	"fmt"
	"bufio"
	"os"
	"strings"
)

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Display N Number of Characters From File 
func DisplayN(fname string,isize int) {
	//Opening File in Read Mode Only 
	fd,err := os.OpenFile(fname,os.O_RDONLY,0644);

	if(err != nil) {
		fmt.Println("Unable to Open File : ");
	} else {
		fmt.Printf("File Successfully Opened With File Descriptor : %u",fd.Fd());
	}

	//Local Array 
	arr := make([]byte,isize);

	//Reading Data From File and Storing it in Local Array 
	iret,err := fd.Read(arr);

	if(err != nil) {
		fmt.Println("Unable To Read File");
		return;
	}

	fmt.Printf("\nNo of Bytes Successfully Readed From File : %d",iret);

	//Printing Data From File
	fmt.Println("\nData From File is : ");
	fmt.Print(string(arr));
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var fname string = " ";
	var err error = nil;
	var ino int = 0;

	fmt.Println("Jay Ganesh....");

	//Taking Input From User
	fmt.Println("Enter File Name : ");
	var bobj = bufio.NewReader(os.Stdin);

	fname,err = bobj.ReadString('\n');

	if(err != nil) {
		fmt.Println("Unable to Take Input From User");
	}

	fmt.Println("Enter Number of Characters You Want To Read From File : ");
	fmt.Scan(&ino);

	fname = strings.TrimSpace(fname);

	//Call To DisplayN Function
	DisplayN(fname,ino);
}