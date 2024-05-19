/*
    Author : Pakshal Shashikant Jain 
    Date : 19/05/2024
    Program : Write application which accept file name from user and read all data from that file
              and display contents on screen.
            
              Input : Demo.txt
              Output : Display all data of file. 
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
package main
import (
	"fmt"
	"os"
	"bufio"
	"strings"
)

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Read File
func ReadFile(fname string) {
	fname = strings.TrimSpace(fname);

	//Opening File
	file,err := os.Open(fname);

	if(err != nil) {
		fmt.Println("Unable To Open File",err);
	} else {
		fmt.Printf("File Successfully Opened With File Decriptor : %d(means fd = 3)\n",file.Fd());
	}

	//Calculating Size of File 
	isize,err := file.Seek(0,2);

	if(err != nil) {
		fmt.Println("Unable To Fetch Size of File");
	}

	//Printing Size of File 
	fmt.Printf("Size of File is : %d bytes\n",isize);
	var arr[] byte = make([]byte,isize);

	//Fetching Current of Position of Cursor of File
	cursor,err := file.Seek(0,0);

	if(err != nil) {
		fmt.Println("Unable To Fetch Size of File");
	} else {
		fmt.Println("Cursor's Current Position is : ",cursor);
	}

	//Reading Data From File
	fmt.Println("Data From File is : ");
	file.Read(arr);

	//Printing Data From File 
	fmt.Printf("%s",arr);
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

func main() {
	var name string = "";
	var err error = nil;

	fmt.Println("Jay Ganesh....");

	//Creating object of bufio Class To Take Input From Users
	var bobj = bufio.NewReader(os.Stdin);

	//Taking File Name as Input From User
	fmt.Println("Enter File Name : ");
	name,err = bobj.ReadString('\n');
	
	if(err != nil) {
		return;
	}

	//Call To ReadFile Function
	ReadFile(name);

	bobj = nil;
}