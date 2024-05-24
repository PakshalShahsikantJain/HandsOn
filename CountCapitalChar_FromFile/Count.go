/*
    Author : Pakshal Shashikant Jain 
    Date : 24/05/2024
    Program : Write a program which accepts file name from user and count number of
              capital characters from that file.

              Input : Demo.txt
              Output : Number of capital characters are 23
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Required Libraries
package main;
import (
	"fmt"
	"bufio"
	"os"
	"strings"
) 

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function To Count Capital Characters From File
func CountCapital(fname string) int {
	fname = strings.TrimSpace(fname);
	var arr []byte;
	var i int = 0;
	var icnt int = 0;

	//Opening File in Read Only Mode
	fd,err := os.OpenFile(fname,os.O_RDONLY,0644);

	if(err != nil) {
		fmt.Println("Unable To Open File in Read Mode",err);

		return -1;
	} else {
		fmt.Printf("File Successfully Opened With File Descriptor : %u",fd.Fd());
	}

	//Calculating Size of File
	isize,err := fd.Seek(0,2);

	if(err != nil) {
		fmt.Println("An Error Occured While Calculating Size of File",err);
		return -1;
	}

	//Local Array
	arr = make([]byte,isize);

	//Bringing Cursor to Initial Position in File
	fd.Seek(0,0);

	//Reading Data From File and Storing Data in Local Array
	iret,err := fd.Read(arr);

	if(err != nil) {
		fmt.Println("Unable To Read File :",err);
	} else {
		fmt.Printf("\nNumber of Byte Successfully Readed : %d bytes\n",iret);
	}

	//Counting Number of Capital Characters From File 
	for i = 0;i < len(arr);i++ {
		if((rune(arr[i]) >= 'A')&&(rune(arr[i]) <= 'Z')) {
			icnt++;
		}
	} 
		
	//Closing File
	fd.Close();

	//Returning Count of Capital Characters
	return icnt;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Main Function
func main() {
	var name string = " ";
	var err error = nil;
	var iret int = 0;

	fmt.Println("Jay Ganesh.....");

	//Creating Object of bufio library To Take input From User
	var bobj = bufio.NewReader(os.Stdin);

	//Taking Input From User
	fmt.Println("Enter File Name : ");
	name,err = bobj.ReadString('\n');

	if(err != nil) {
		fmt.Println("Error Occured While Taking Input From User : ",err);
	}

	//Call To CountCapital Function
	iret = CountCapital(name);
	
	//Printing Count of Capital Characters
	fmt.Printf("Count of Capital Characters From File is : %d",iret);

	bobj = nil;
}